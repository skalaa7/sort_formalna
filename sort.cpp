#include <iostream>
#include <fstream>
#include <algorithm>
#include <time.h>
using namespace std;
void swap(int *a,int *b)
{
	int *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
int main(int argc, char * argv[])
{
	int n=strtol(argv[1],NULL,10);;
	cout<<"n=";
	//cin>>n;
	cout<<n<<endl;
	int a[n];
	int b[n];
	int cnt=0;
	cout<<"a=";
	for(int i=0;i<n;i++)
	{	
		srand(time(NULL)+i);
		a[i]=rand()%50;
		cout<<a[i]<<",";
	}
	cout<<endl;
	cout<<"b=";
	for(int i=0;i<n;i++)
	{	
		b[i]=a[i];
		cout<<b[i]<<",";
	}
	cout<<endl;
	int sorted=0;
	while(sorted==0)
	{
		sorted=1;
		for(int i=0;i<n-3;i++)
		{
			cnt++;
			if(a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
				sorted=0;
			}
			if(a[i+2]>a[i+3])
			{
				swap(a[i+2],a[i+3]);
				sorted=0;
			}
		}
	}
	sort(b,b+n);
	cout<<"a_sorted=";
	for(int i=0;i<n;i++)
	{	
		cout<<a[i]<<",";
	}
	cout<<endl;
	
	cout<<"b_sorted=";
	for(int i=0;i<n;i++)
	{	

		cout<<b[i]<<",";
	}
	cout<<endl;
	int equals=1;
	for(int i=0;i<n; i++)
	{
		if(a[i]!=b[i])
		{
			cout<<a[i]<<"!="<<b[i]<<endl;
			equals=0;
		}
	}
	cout<<endl;
	if(equals)
		cout<<"My sort is good, count = "<<cnt<<endl;
	
	return 0;
}	

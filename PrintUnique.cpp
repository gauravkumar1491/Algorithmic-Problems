#include<iostream>
using namespace std;

int main()
{
	int a[]={-4,-3,-3,-2,-2,-2};
	int i=0;
	bool flag = false;
	int n= sizeof(a)/sizeof(int);
	while(i<n-1)
	{
		if(a[i]^a[i+1])
		{
			cout<<a[i]<<" ";
		}
		i++;
		
	}
		cout<<a[n-1];
	return 0;
}

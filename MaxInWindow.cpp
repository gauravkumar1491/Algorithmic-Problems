#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int first = 0,last=k-1;
	    if(k>=n)
	       last = n-1;
	    int max = -1;
	    int sec_max = -1;
	    int max_ind = -1,sec_ind = -1;
	    
	     for(int i=0;i<n;i++)
	     {
	         if(arr[i]>max)
	         {
	             max = arr[i];
	             max_ind = i;
	         }
	         if(arr[i]>sec_max && arr[i]<max)
	         {
	             sec_max = arr[i];
	             sec_ind = i;
	         }
	     }
	     
	     while(last<n)
	     {
	         if(max_ind == first-1)
	         {
	             if(arr[last]>sec_max)
	             {
	                 max_ind = last;
	                 max = arr[last];
	                 
	             }
	             else
	             {
	                 max= sec_max;
	                 max_ind = sec_ind;
	             }
	         }
	         else if(arr[last] > max)
	         {
	             sec_max = max;
	             sec_ind = max_ind;
	             max = arr[last];
	             max_ind = last;
	         }
	         else if(arr[last] > sec_max)
	         {
	             sec_ind = last;
	             sec_max = arr[last];
	         }
	         
	         cout<<max<<" ";
	         first++;
	         last++;
	     }
	     cout<<endl;
	}
	return 0;
}

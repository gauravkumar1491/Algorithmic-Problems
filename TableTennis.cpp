#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int n,win;
    long long k;
    long long count = 0;
    std::deque<int> mydeque;
     cin>>n>>k;
	int max = 0;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	max = std::max(max,a[i]);
    	mydeque.push_back(a[i]);
	}
	if(k>=n)
		cout<<max<<endl;
	else
	{
	while(!mydeque.empty() && count<k)
	{
		int m,n;
		m =  mydeque.front();
    	mydeque.pop_front();
    	if(!mydeque.empty())
    	{
    		n =  mydeque.front();
    		mydeque.pop_front();
		}
		if(mydeque.empty())
		{
			win = m>n?m:n;
			break;
		}		
		if(m>n)
		{
			count+=1;
			mydeque.push_back(n);
			mydeque.push_front(m);
			win=m;
		}
		else
		{
			count=1;
			mydeque.push_back(m);
			mydeque.push_front(n);
		}
		
	}


    cout<<win<<endl;
}

    return 0;
}

#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

bool compare(int x, int y)
{
    if(x>10)
    {
        while(x>10)
            x = x/10;
    }
    if(y>10)
    {
        while(y>10)
            y = y/10;
    }
    return x > y;
}

int main()
{
    cout<<"Program starts here"<<endl;
    int A[]={84, 8, 7};
    int len = 3;
    string result = "";
    for(int i = 0;i< len;i++)
    {
        cout<<A[i]<< " ";
    }

    for(int i = 0;i< len;i++)
    {
        stringstream ss;
        ss<<A[i];
        result+= ss.str();

    }
    cout << "\n"<<"The Number formed is : " <<result <<endl;
    cin>>result;
    return 0;
}

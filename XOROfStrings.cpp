#include<iostream>

using namespace std;

int main()
{
	string x = "POON";
	string y = "POOI";
	//string res = x^y;
	int r = (int)x^(int)y;
	cout<<"String XOR-> "<<res<<" int value-> "<<r<<endl;
	return 0;
}

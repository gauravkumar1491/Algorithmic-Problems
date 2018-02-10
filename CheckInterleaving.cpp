#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

bool IsInterleaving(char* s1,char* s2,char* s3)
{
	cout<<"s1->"<<s1<<endl;
	cout<<"s2->"<<s2<<endl;
	cout<<"s3->"<<s3<<endl;
	if(s1 && s1[0]==s3[0])
	{
		return IsInterleaving(s1+1,s2,s3+1);
	}
	
	else if(s2 && s2[0]==s3[0])
	{
		return IsInterleaving(s1,s2+1,s3+1);
	}
	
	if(!s1 &&!s2 && !s3)
		return true;
	else
		return false;
}

int main()
{
	char *s1 = "AB";
	char *s2 = "CD";
	char *s3 = "ACDB";
	char *s4 = "DABC";
	
	int m = strlen(s1);
	int n = strlen(s2);
	int k = strlen(s3);
	cout<<"Lengths:-"<<m<<" "<<n<<" "<<k<<endl;
	
	if(k!=(m+n))
		cout<<"No";
		
	bool status = IsInterleaving(s1,s2,s3);
	if(status)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}

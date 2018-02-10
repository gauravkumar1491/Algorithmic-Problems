#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> dictionary ={"i","like", "samsung"};
bool WordBreakRecursion(string word, int start, int end)
{
	if(start>end)
	{
		return true;
	}
	
	int n= end-start +1;
	
	for(int i=1;i<=n;i++)
	{
		string substr = word.substr(start, i);
		if(find(dictionary.begin(),dictionary.end(),substr)!=dictionary.end())
		{
			cout<<substr<<" ";
			return WordBreakRecursion(word, start + i, end);
		}
	}
	return false;
}

bool WordBreakDP(string word)
{
	int n= word.length();
	bool wb[n+1]{0};
	
	for(int i=1;i<=n;i++)
	{
		string substr = word.substr(0, i);
		if(find(dictionary.begin(),dictionary.end(),substr)!=dictionary.end())
		{
			cout<<substr<<" ";
			wb[i]=true;
		}
		if(wb[i])
		{
			for(int j=1;j<=n-i;j++)
			{
				string suffix = word.substr(i,j);
				if(find(dictionary.begin(),dictionary.end(),suffix)!=dictionary.end())
				{
					cout<<suffix<<" ";
					wb[i+j]=true;
				}
			}			
		}
	}
	return wb[n];
}

int main()
{
	string word = "ilikesamsungi";
	int n = word.length();
//	WordBreakRecursion(word,0,n-1)==1?cout<<"\nYES":cout<<"\nNO";
	WordBreakDP(word)==1?cout<<"\nYES":cout<<"\nNO";	
	return 0;	
}

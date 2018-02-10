#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int GetHash(string word)
{
  int res = 0;
  for(int i=0;i<word.length();i++)
  {
    res+= word[i];
  }
  return res;
  
}

void PrintAnagrams(vector<string> words)
{
  map<int,vector<string> > m;
  int n = words.size();
  
  for (int i=0;i<n;i++) {
    int hashCode = GetHash(words[i]);
    m[hashCode].push_back(words[i]);
  }
  auto it = m.begin();
  while(it!=m.end())
  {
    vector<string> anagrams = it->second;
    sort(anagrams.begin(),anagrams.end());
    
    for (const string& word : anagrams) {
    cout << word<<" ";
    }
  it++;
  }
}
// To execute C++, please define "int main()"
int main() {
  string words[5] = {""cat”,“dog”,“tac”,“god”,“act”};
  vector<string> input;
  for (int i=0;i<5;i++) {
   input.push_back(words[i]);
  }
  PrintAnagrams(input);
  
  return 0;
}


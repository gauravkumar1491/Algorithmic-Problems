#include<bits/stdc++.h>
#define For(i , j , k) for (int i = (j) , i##_end_ = (k) ; i <= i##_end_ ; ++ i)
#define Fordown(i , j , k) for (int i = (j) , i##_end_ = (k) ; i >= i##_end_ ; -- i)
#define Set(a , b) memset(a , b , sizeof(a))
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define in insert
#define F first
#define S second
#define INF (0x3f3f3f3f)
#define INF1 (2139062143)
#define Mod (1000000007)
#define get_string() getline(cin,s)		//for inputting string with spacebars in between
#define gcd(a,b) __gcd(a,b)
#define vi vector<ll>
#define vb vector<bool>
#define vit vi::iterator
#define PL pair<ll,ll>
#define PLL pair<ll,pair<ll,ll> >
#define PLLL pair<ll,pair<ll,pair<ll,ll> > >
#define all(c) c.begin(),c.end()
#define present(container,element) (container.find(element)!=container.end())	//for sets
#define cpresent(container,element) (find(all(container),element)!=container.end())		//for vectors
#define tr(c,i) for(__typeof((c).begin() i=(c).begin();i!=(c).end();i++)
#define infi INT_MAX
#define cases() ll t;cin>>t;while(t--)
#ifdef daredevil_gk
#define debug(...) fprintf(stderr , __VA_ARGS__)
#else
#define debug(...)
#endif 
using namespace std;
typedef long long LL;

inline void file() {
#ifdef daredevil_gk 
	freopen("a.in" , "r" , stdin); freopen("a.out" , "w" , stdout);
#endif
}

template<typename T> inline bool chkmax(T &a, T b) { return a < b ? a = b, 1 : 0; }
template<typename T> inline bool chkmin(T &a, T b) { return b < a ? a = b, 1 : 0; }

char c_; int _ , __;
inline int read() {
    for (_ = 0 , __ = 1 , c_ = getchar() ; !isdigit(c_) ; c_ = getchar()) if (c_ == '-')  __ = -1;
    for ( ; isdigit(c_) ; c_ = getchar()) _ = (_ << 1) + (_ << 3) + (c_ ^ 48);
    return _ * __;
}

LL n, Sum, cap, Max1, Max2;

inline void chkmaxx(LL x)
{
    if (x > Max1) Max2 = Max1, Max1 = x;
    else if (x > Max2) Max2 = x;
}
int countSubseqUtil(string text, string patt, int textInd, int pattInd)
{
	static int count = 0;
	int len = patt.length(); 
	if(textInd == text.length())
		return count;
	if(pattInd == len-1 && text[textInd]== patt[pattInd])
	{
		count++;
		return countSubseqUtil(text,patt,textInd,0);
	}
	else if(pattInd == len-1 && text[textInd]!= patt[pattInd])
		return countSubseqUtil(text,patt,textInd+1,0);
	else
	{
	
	int i=textInd;

		int j = pattInd;
		int n = patt.length();
		if(text[i]==patt[j])
			countSubseqUtil(text,patt,i+1,(j+1)%n) ;
		else
			countSubseqUtil(text,patt,i+1,0);


	return count;
}
}
int countSubseq(string text,string patt)
{
	if(text.length()==0 || patt.length()== 0)
		return 0;
	else
		return countSubseqUtil(text, patt,0,0);
}

int main()
{
	file();
    string text;
    string pat = "QAQ";
    cin>>text;
    int cnt = countSubseq(text,pat);
    cout<<cnt<<endl;
    return 0;
}

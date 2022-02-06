#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int longestSub(string s[])
{
	int count=1;
	int ans=0;
	long long n=s.size();
	for(int i=1; i<n; i++)
	{
		if(s[i]==s[i-1])
		{
			count++;
		}
	
		else{
			count=1;
		}
		ans=max(count,ans);
		return ans;
	}
}

int main()
{
	int n=7;
	string s[n]={'A,A,A,A,A,N,N,K'};
	cout<<longestSub(s);
}

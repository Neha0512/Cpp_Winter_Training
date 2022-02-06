#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, a[n],b[n];
	cin>>n>>t;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
		for(int i=0; i<n; i++)
	{
		cin>>b[i];
	}
		for(int i=0; i<n; i++)
	{
		cout<<max(a[i],b[i])*10+min(a[i],b[i])<<" ";
	}
	cout<<endl;
}


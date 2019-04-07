#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm> 
using namespace std;
const int maxn=100005;
int array[maxn],dp[maxn],n;
int main()
{  memset(dp,0,sizeof(dp));
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	dp[0]=array[0];
	for(int i=1;i<n;i++){
		dp[i]=max(array[i],dp[i-1]+array[i]);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,dp[i]);
	}
	if(ans>=0)printf("%d",ans);
	else printf("0");
	
	return 0;
}


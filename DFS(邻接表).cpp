#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const int maxn=100;
bool vis[maxn]={false};
int n,m,k;
vector<int>a[maxn];
void dfs(int u,int depth){
	vis[u]=true;
	printf("%d ",u );
	/*如果需要对u进行一些操作，可以在此进行*/
	for(int i=0;i<a[u].size();i++){
		int v=a[u][i];
		if(vis[v]==false){
			dfs(v,depth+1);
		}
	}
}

int main(){
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d%d",&k,&temp);
		 a[k].push_back(temp);
	}
	for(int i=0;i<m;i++){
		if(vis[i]==false){
			dfs(i,1);
		}
	}
	
	
	
	return 0;
} 

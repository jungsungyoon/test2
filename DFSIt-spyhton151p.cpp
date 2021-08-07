#include<iostream>
#include<vector>

using namespace std;
int graph[1000][1000];
int N,M;

//0이 지나갈수이는 미로였나
bool dfs(int i,int j){
	if(i<=-1 || i>=N || j<=-1 || j>=M)
		return false;
	if(graph[i][j]==0){
		graph[i][j]=1;
		dfs(i-1,j);//상
	//	cout<<"상 실행"<<'\n';
		dfs(i+1,j);//하
		dfs(i,j-1);//좌
		dfs(i,j+1);//우
		return true;
			
	}
	return false;
	
}
int main(){
	
	cin >> N >> M;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			scanf("%1d",&graph[i][j]);
	
	int result=0;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			if(dfs(i,j))
				result++;
	
	cout<<result;
	return 0;
}
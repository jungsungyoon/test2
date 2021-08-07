#include<iostream>
#include<vector>

using namespace std;
int computer[100][100]; //컴퓨터 갯수
int visit[100];//방문
int s,e=0;
int N,M=0;
int count=0;

	void dfs(int n)// 12  21 23  32  15 51 52 25 56 65 47 74
{
    
    visit[n] = 1;
		
    for (int i = 1; i <= N; i++)
    {
        if (computer[n][i] && !visit[i]){
			count++;
			dfs(i);
			//cout<<computer[n][i] && !visit[i]<<'\n';
		}
    }
}
int main(){
	cin >> N;//총 캄타
	cin >> M; //쌍 갯수 
	for(int i=0;i<M;i++){ //쌍갯수만큼 반복 
		cin >>s >> e;//넣은다음
		computer[s][e]=computer[e][s]=1; //쌍에대한 1로 변환
	}
	//cout<<computer[1][1]<<'\n';
	
	dfs(1); //1부터 시작
	cout<<count;
	return 0;
}
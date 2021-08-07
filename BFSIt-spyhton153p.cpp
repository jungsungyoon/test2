#include<iostream>
#include<vector>
#include <queue>
using namespace std;


int graph[200][200];
int N,M;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};



int bfs(int i,int j){
	queue<pair<int><int>> q;
	q.push({i,j});
	while(!q.empty()) {
        int x = q.front().first; //0 2
        int y = q.front().second;//0 0
        q.pop(); //없음
        // 현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i]; 
            int ny = y + dy[i];
            // 미로 찾기 공간을 벗어난 경우 무시
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            // 벽인 경우 무시
            if (graph[nx][ny] == 0) continue;
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if (graph[nx][ny] == 1) {
                graph[nx][ny] = graph[x][y] + 1;//graph2 0 =2
                q.push({nx, ny});
            } 
        } 
    }
    // 가장 오른쪽 아래까지의 최단 거리 반환
    return graph[n - 1][m - 1];
}
	
	
	
}
int main(){
	cin >> N>>M;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			scanf("%1d",&graph[i][j]);
	

	
	
	cout<<bfs(0,0)
	
	return 0;
}//내일 백준 DFS BFS 참고하며 풀어보기
//DFS https://www.acmicpc.net/problem/10026
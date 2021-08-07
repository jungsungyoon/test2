#include<iostream>
#include<vector>
#include <queue>
using namespace std;

bool visited[9]={false,};
vector<int> graph[9];

// BFS 함수 정의
void dfs(int x) {
    queue<int> q;
	q.push(x);
	// 현재 노드를 방문 처리
    visited[x]=true;
	while(!q.empty()){
		int z=q.front(); //1
		q.pop();
		cout<<z<<' ';
		for(int i=0;i<graph[z].size();i++){
			int y=graph[z][i];
			if(!visited[y]){
				q.push(y);
				visited[y]=true;
			}
				}
	}

}

int main(void) {
    // 노드 1에 연결된 노드 정보 저장 
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    // 노드 2에 연결된 노드 정보 저장 
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    // 노드 3에 연결된 노드 정보 저장 
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    // 노드 4에 연결된 노드 정보 저장 
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    // 노드 5에 연결된 노드 정보 저장 
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    // 노드 6에 연결된 노드 정보 저장 
    graph[6].push_back(7);
    
    // 노드 7에 연결된 노드 정보 저장 
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    // 노드 8에 연결된 노드 정보 저장 
    graph[8].push_back(1);
    graph[8].push_back(7);
   
    dfs(1);
}
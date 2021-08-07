#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
//vector<int> v;
int main(){
	int M,N;
	
	cin >> M>> N;
	int data[M][N];
	int temp=0;
	int result=0;
	//한줄씩 계싼
	for(int j=0;j<M;j++){
		int max_val=10001;
		for(int i=0;i<N;i++){
			cin >> temp;
			max_val=min(max_val,temp);
		}
		result=max(result,max_val);		
	}
	cout<<result;
	return 0;
}
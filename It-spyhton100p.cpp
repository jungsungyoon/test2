#include <iostream>
using namespace std;
int main(){
	int N,K;
	int count=0;
	cin >> N >> K;
	while(N>1){
		if(N % K==0){
			N=N/K;
			//cout << "나누기 실행" << '\n';
			count++;
		}else{
			N=N-1;
			//cout << "뺴기 실행" << '\n';
			count++;
		}
	}
	cout << count;
	
	return 0;
}
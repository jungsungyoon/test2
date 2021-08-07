#include <iostream>
using namespace std;
int main(){
	int N,K;
	cin >> N>>K;
	int result=0;
	int temp=0;
	while(true){
		temp=int(N/K)*K;  //1뺴기 과정 0아님 1이네
		result+=N-temp; //1
		N=temp;//24
		if(N<K) 
			break;
		result+=1; //2
		N=N/K; //5  1
	}
	result+=N-1;
	cout <<result;
	
	
	return 0;
}
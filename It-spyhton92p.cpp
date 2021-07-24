#include <iostream>
#include<algorithm>
using namespace std;
int main(){
	//이것이 코테다 with python 92p law of the greate number (가장 큰수 구하기 방법)
	int N,M,K;
	int temp=0;
	cin >> N >> M >> K;
	int data[N];
	for(int i=0;i<N;i++){
		cin >> temp;
		data[i]=temp;
		//if(i==N)
		//	break;
	}
	
	sort(data,data+N);
	int first,secound;
	first=data[N-1]; //가장 큰수
	secound=data[N-2]; //두번쨰 수
	int result=0; //초기값을 꼭 생활화하자 미친 이거떔에 하.. 그이후로 더 쉬운 방법 이해하기

	
	while(M>0){
		for(int i=0;i<K;i++){
			result+=first;
		//	cout << result<<'\n';
			M-=1;
		}
		if(M==0)
			break;
		result+=secound;
		M-=1;
		
	}
	cout<<result;
	return 0;
}
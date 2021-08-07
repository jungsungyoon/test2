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
	first=data[N-1]; //가장 큰수 6 
	secound=data[N-2]; //두번쨰 수 5
	int result=0; //초기값을 꼭 생활화하자 미친 이거떔에 하.. 그이후로 더 쉬운 방법 이해하기

	int count=int(M/(K+1))*K;  //6 6 6 5   6 6 6 5 수열은 K+1 M을 K+1로나누면 2번반복 거기서 K곱하면 가장큰수 횟수  고로 
	count+=M%(K+1); //안나눠질것을 대비하여 나머지가 큰수이므로 적용
	
	result+=count*first;
	result+=(M-count)*secound;
	
	cout<<result;
	return 0;
}
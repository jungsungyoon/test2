#include<iostream>
#include<array>
#include<algorithm>


using namespace std;
int N,M;
int compart(int a,int b){
	return a>b;
	}
int main(){
	cin >> N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>M;
		arr[i]=M;
	}
	sort(arr,arr+N,compart);
	 for(int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
	
	return 0;
}
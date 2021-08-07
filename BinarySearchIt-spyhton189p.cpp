#include<iostream>

using namespace std;
int N,K;

int Binary(int* arr,int target,int start,int end){
	if(start>end)
		return -1;
	int mid=int((start+end)/2);
	if(arr[mid]==target)
		return mid;
	else if(arr[mid]>target){
		return Binary(arr,target,start,mid-1);
	}else
		return Binary(arr,target,mid+1,end);
}
int main(){
	cin >> N >> K;
	int arr[N];
	for(int i=0;i<N;i++){
		int x;
		cin>>x;
		arr[i]=x;
	}
	 
	int result=Binary(arr,K,0,N-1);
	if(result==-1)
		cout<<"원소가 존재하지 않습니다."<<endl;
	else{
	cout<<result+1;
	}
	
	return 0;
}
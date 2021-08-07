#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> arr,targets;


int Binary(vector<int>& arr,int K,int start,int end){
	if(start>end)
		return -1;
	int mid=int((start+end)/2);
	if(arr[mid]==K)
		return mid;
	else if(arr[mid]>K)
		return Binary(arr,K,start,mid-1);
	else{
		return Binary(arr,K,mid+1,end);
	}
}
int main(){
	
	cin >> N;
	
	for(int i=0;i<N;i++){
		int x=0;
		cin>>x;
		arr.push_back(x);
	}
	cin >> M;
	
	for(int i=0;i<M;i++){
		int target=0;
		cin>>target;
		targets.push_back(target);
	}
	sort(arr.begin(),arr.end());
	 for (int i = 0; i < M; i++) {
        // 해당 부품이 존재하는지 확인
        int result = Binary(arr, targets[i], 0, N-1);
        if (result != -1) {
            cout << "yes" << ' ';
        }
        else {
            cout << "no" << ' ';
        }
    }
	
	return 0;
}

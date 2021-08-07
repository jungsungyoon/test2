#include<iostream>
#include<array>
#include<algorithm>
#include <numeric>

using namespace std;
 int arr1[100000];
 int arr2[100000];
int N,K;


int compart(int a,int b){
		return a>b;
	}
int main(){
	cin >> N>>K;
	for(int i=0;i<2;i++){
		for(int j=0;j<N;j++){
			if(Flag==0){
				cin>>temp;			
				arr1[j]=temp;
			}else if(Flag==1){
				cin>>temp;			
				arr2[j]=temp;
			}
		}
		Flag+=1;
	}
	sort(arr1,arr1+N);
	sort(arr2,arr2+N,compart);
	for(int z=0;z<K;z++){
		/*temp=arr1[z];
		arr1[z]=arr2[z];
		arr2[z]=temp;*/
		if(arr1[z]<arr2[z])
			swap(arr1[z], arr2[z]);
	}
 	int result = accumulate(arr1, arr1+N, 0);
	cout<<result;
	
	return 0;
}
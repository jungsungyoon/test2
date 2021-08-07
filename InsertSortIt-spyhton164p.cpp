#include<iostream>

using namespace std;
int array[11]={7,5,9,0,3,1,6,2,4,8};
int n=10;
int temp;
int main(){
	for(int i=0;i<n;i++){
		for(int j=i;j>-1;j--)
			if(array[j]<array[j-1]){
				temp=array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
				}else{
				break;
			}
	}
 for(int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }
	return 0;
}
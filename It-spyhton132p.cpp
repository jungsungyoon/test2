#include<iostream>

using namespace std;
int result=0;
int forfactory(int n){
	result=1;
	for(int i=1;i<n+1;i++)
		result*=i;
	return result;
}

int factory(int n){
	if(n<=1)
		return 1;
	return n*factory(n-1);
}

int main(){
	cout<<forfactory(5)<<'\n';
	cout<<factory(5)<<'\n';
	
	return 0;
}
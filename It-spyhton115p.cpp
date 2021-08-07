#include <bits/stdc++.h>

using namespace std;

string n;
//나이트 8가지
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main(){
	cin >> n;
	int row=n[1]-'0'; //이거 설마 문자로 인식해서뺸건가
	int coul=n[0]-'a'+1; //a 첫번쨰위치
	//cout<<n[1]<<' '<<n[0]<<'\n';
	//cout<<row<<' ' << coul<<'\n';
	int result=0;
	for(int i=0;i<8;i++){
	int nRow=row+dx[i];
	int nCol=coul+dy[i];
		
		if(nRow>=1 && nRow<=8 && nCol>=1 && nCol<=8)
			result++;
	}
		cout<<result;
		
	
	
	return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	stack<int> s;
	s.push(5);
	s.push(2);
	s.push(3);
	s.push(7);
	s.pop();
	s.push(1);
	s.push(4);
	s.pop();
	
	
	//c++은 하위 -> 상우 ㅣ 순으로 출력이 불가?
	while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
	
	

	return 0;
}
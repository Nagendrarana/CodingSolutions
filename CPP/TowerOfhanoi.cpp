#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void towerHanoi(int n,char start, char end,char aux){
	//base condition
	if(n==1){
		cout << "move disc 1 " << "from " << start << " to " << end <<endl;
		return;
	}
	towerHanoi(n-1,start,aux,end);
	cout << "move disc " << n << " from " << start << " to " << end <<endl;
	towerHanoi(n-1,aux,end,start);
}

int main(){
	//Tower of hanoi
	towerHanoi(2,'A', 'B','C');
	cout<< "hello";
	return 0;
}



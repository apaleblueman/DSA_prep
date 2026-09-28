#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPerfect(int n) {
	int N = sqrt(n);
	int num=0;
	for(int i=1;i<=N;i++){
		if(n%i==0){
			num+=i;
			num+=(n/i);
		}	
	}
	num =num-n;
	if(num==n) return true;
	return false;
    }
int main(){
	if(isPerfect(6)){
		cout<<"perfect";
	}
	return 0;
}


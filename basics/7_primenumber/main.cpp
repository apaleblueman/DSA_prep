#include<iostream>
#include<cmath>
using namespace std;

bool all_divisors(int num){
        int N = sqrt(num);
        for(int i=2;i<=N;i++){
                if(num % i ==0){
			return false;
                }
        }
	return true;
}

int main(){
	int num;
	cin>>num;
	if(all_divisors(num)){
		cout<<"Prime";
	}	
	else{
		cout<<"not prime";	
	}
	return 0;
}

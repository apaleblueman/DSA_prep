#include<iostream>
#include<cmath>
using namespace std;

/* bruteforce method
void all_divisors(int num){
	int divisor=1;
	while(divisor<=num)
	{ 
	   if(num%divisor == 0 && divisor != num){cout<<divisor<<",";}
	   divisor++;
	}
	cout<<num<<endl;
	return;
}
*/
//optimal method

void all_divisors(int num){
	int N = sqrt(num);
	for(int i=1;i<=N;i++){
		if(num%i==0){
			cout<<i<<" ";
			if((num/i)!=i){
				cout<<(num/i)<<" ";
			}else{return;}
		}
	}
}

int main(){
	int num;
	cout<<"enter a num:";
	cin>>num;
	all_divisors(num);
}

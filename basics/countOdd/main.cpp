#include<iostream>
#include<vector>
using namespace std;

int countOddDigit(int n) {
        int count=0;
        while(n>0){
            int digit = n%10;
	    cout<<digit<<endl;
            if(digit%2!=0){
                count++;
            }
	    cout<<count<<endl;
            n = n/10;
	    cout<<n<<endl;
        }       
        return count;
}
int main(){
	cout<<countOddDigit(15);
	return 0;
}


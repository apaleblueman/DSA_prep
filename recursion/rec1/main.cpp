#include<iostream>
using namespace std;
void print_name(int n){
		if(n<=0){return;}
		cout<<"henlo"<<n<<endl;
		print_name(--n);
}
int main(){
	print_name(10);
	return 0;
}

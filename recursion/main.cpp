#include<iostream>
using namespace std;
void print_name(int n){
		if(n<=0){return;}
		cout<<"henlo"<<n<<endl;
		print_name(--n);
}

void print_nums(int N, int i=1){
		if(i>N){return;}
		cout<<i<<endl;
		print_nums(N, ++i);
}
void print_nums_rev(int N){
		if(N==0){return;}
		cout<<N<<endl;
		print_nums_rev(--N);
}
int sum_firstn(int N){
	if(N<1){return N;}
	return N + sum_firstn(N-1);//here we cant use --N because it double modifies N, and due  to recursion N is already changing via a sequence

}
int facto(int n){
	if(n<1){return 1;}
	return n * facto(n-1);
}
int main(){
	print_name(10);
	print_nums(5);
	print_nums_rev(5);
	cout<<endl<<sum_firstn(5)<<endl;
	cout<<facto(5)<<endl;
	return 0;
}

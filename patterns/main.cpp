#include <iostream>
using namespace std;

void rectangle_filled(char c, int rows, int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void right_triangle(char c,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void right_triangle(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void right_triangle_n(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void inverted_triangle(char c, int n){
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void inverted_triangle(int n){
	for(int i=n;i>0;i--){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void xmas_tree(int n){
		for(int row=0;row<n;row++){
			for(int spc=0;spc<(n-1-row);spc++){
				cout<<" ";
			}
			for(int star=0;star<(2*row)+1;star++){
				cout<<"*";            
			}
			cout<<endl;
		}
}
void inverted_xmas_tree(int n){
	for(int row=n-1;row>=0;row--){
		for(int spc=0;spc<((n-row)-1);spc++){
			cout<<" ";
		}
		for(int star=0;star<((2*row)+1);star++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
}
int main(){
	rectangle_filled('*',5,7);
	right_triangle('*', 7);
	right_triangle(7);
	right_triangle_n(7);
	inverted_triangle('*',7);
	inverted_triangle(7);
	xmas_tree(5);
	inverted_xmas_tree(5);
	return 0;
}

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
			for(int star=0;star<=row;star++){
						
			}
			cout<<endl;
		}
}


int main(){
	rectangle_filled('*',5,7);
	right_triangle('*', 7);
	right_triangle(7);
	right_triangle_n(7);
	inverted_triangle('*',7);
	inverted_triangle(7);
	xmas_tree(3);
	return 0;
}

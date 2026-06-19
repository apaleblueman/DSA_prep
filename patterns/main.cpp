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
void half_diamond(int n){
	for(int row = 1;row<=((2*n)-1);row++){
		int row_flag = row;
		if(row>n){
			row_flag = n - (row-n);
		}
		for(int col=0;col<row_flag;col++){
			cout<<"*";
		}
		cout<<endl;
	}
}


void binary_triangle(int n){
	cout<<endl;
	for(int row=1;row<=n;row++){
		int head=1;
		if(row%2==0){head=0;}
		for(int col=1;col<=row;col++){
			
			cout<<head;
			head = 1 - head;
		}
	cout<<endl;
	}
}
void crown(int n){
	int numbers, total_columns, spaces;
	for(int row=0;row<n;row++){
		numbers = row+1;
		total_columns = n*2;
		for(int n1 = 1; n1<=numbers; n1++){
			cout<<n1;	
		}
		spaces = total_columns - (numbers*2);
		for(int sp=1; sp<=spaces;sp++){
			cout<<" ";
		}
		for(int n1 = numbers; n1 >=1; n1--){
			cout<<n1;	
		}
		cout<<endl;
	}
}

void inc_numtriangle(int n){
		int counter = 1;
		for(int row=1;row<=n;row++){
			for(int col=1;col<=row;col++){
				cout<<counter;
				counter++;
			}
			cout<<endl;
		}
}

void alphabet_triangle(int n){
	for(int row=0;row<n;row++){
		int A = 65;
		for(int col=0;col<=row;col++){
			cout<<(char)A;
			A++;
		}
		cout<<endl;
	}
}
void rev_alphabet_triangle(int n){
	for(int row=n;row>0;row--){
		int A = 65;
		for(int col=row;col>0;col--){
			cout<<(char)A;
			A++;
		}
		cout<<endl;
	}
}

void rowalphabet_triangle(int n){
	char a = 'A';
	for(int row=0;row<n;row++){
		for(int col=0;col<=row;col++){
			cout<<a;
		}
		a++;
		cout<<endl;
	}
	
}

void alph_pyramid(int n){
	for(int row=0;row<n;row++){
		char a = 'A';
		for(int spaces=0;spaces<((n-1)-row);spaces++){
			cout<<" ";
		}
		for(int col=0;col<((2*row)+1);col++){
			cout<<a;
			a++;	
		}
		cout<<endl;
	}
}

void reversed_alphas(int n){
	int start = 65 + n;
	for(int row=1;row<=n;row++){
		for(int col=start-row;col<start;col++){
			cout<<(char)col;
		}
		cout<<endl;
	}
}

void hollow_diamond(int n){
	int N = 2*n;
	for(int row=0;row<n;row++){
		for(int star=0;star<(n -row);star++){
			cout<<"*";
		}
		for(int spc=0;spc<(N-(N - (2*row)));spc++){
			cout<<" ";
		}
		for(int star=(n-row);star>0;star--){
			cout<<"*";
		}
		if(row!=n-1)
		{
		cout<<endl;}
	}
	for(int row=n;row>=0;row--){
		for(int star=0;star<(n -row);star++){
			cout<<"*";
		}
		for(int spc=0;spc<(N-(N-(2*row)));spc++){
			cout<<" ";
		}
		for(int star=(n-row);star>0;star--){
			cout<<"*";
		}
		cout<<endl;
	}
}
void hourglass(int n){
	int N = 2*n;
	for(int row=n;row>=0;row--){
		for(int star=0;star<(n -row);star++){
			cout<<"*";
		}
		for(int spc=0;spc<(N-(N-(2*row)));spc++){
			cout<<" ";
		}
		for(int star=(n-row);star>0;star--){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int row=0;row<n;row++){
		for(int star=0;star<(n -row);star++){
			cout<<"*";
		}
		for(int spc=0;spc<(N-(N - (2*row)));spc++){
			cout<<" ";
		}
		for(int star=(n-row);star>0;star--){
			cout<<"*";
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
	xmas_tree(5);
	inverted_xmas_tree(5);
	half_diamond(5);
	binary_triangle(5);
	cout<<endl;
	crown(4);
	inc_numtriangle(3);
	alphabet_triangle(5);
	rev_alphabet_triangle(5);
	rowalphabet_triangle(5);
	alph_pyramid(5);
	reversed_alphas(5);
	hollow_diamond(4);
	hourglass(5);
	return 0;
}

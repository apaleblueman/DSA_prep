#include<iostream>
using namespace std;
void square(int n, char c){
	for(int row=1;row<=n;row++){
		for(int col=1;col<=n;col++){
			cout<<c;
		}
		cout<<endl;
	}
}

void triangle(int n, char c){
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<c;
		}
		cout<<endl;
	}
}
void triangle(int n){
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<col;
		}
		cout<<endl;
	}
}

void triangle(int n, bool repeat){
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			cout<<row;
		}
		cout<<endl;
	}
}
void triangle(int n,char c, bool reverse){
	for(int row=n;row>=1;row--){
		for(int col=1;col<=row;col++){
			cout<<c;
		}
		cout<<endl;
}}
void triangle(bool reverse, int n){
	for(int row=n;row>=1;row--){
		for(int col=1;col<=row;col++){
			cout<<col;
		}
		cout<<endl;
	}
}

void pyramid(int n, char c){
	for(int row=0;row<=n;row++){
			for(int s=0;s<(n-row);s++){
				cout<<" ";
			}
			for(int col=0;col<((2*row)-1);col++){
			cout<<c;
			}	
			cout<<endl;
	}
}
void revpyramid(int n, char c){
	for(int row=n;row>0;row--){
		for(int s=0;s<(n-row);s++){
			cout<<" ";
		}
		for(int col=0;col<((2*row)-1);col++){
			cout<<c;
		}
		cout<<endl;
	}
}
void diamond(int n, char c){
	pyramid(n,c);
	revpyramid(n,c);
}
void verticalPyramid(int n, char c){
	int stars;
	for(int row=0;row<=((2*n)-1);row++){
		if(row<=n) stars=row;
		else if(row>n) stars=(2*n)-row;
			for(int col=0;col<stars;col++){
				cout<<c;
			}
			cout<<endl;
	}

}
void binarytriangle(int n){
	for(int row=1;row<=n;row++){
		if(row%2==0){
			for(int col=1;col<=row;col++){
				if(col%2==0){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			cout<<endl;
		}
		else if(row%2!=0){
			for(int col=1;col<=row;col++){
				if(col%2==0){
					cout<<0;
				}
				else{
					cout<<1;
				}
			}
			cout<<endl;
		}
	}
}
void drybinarytriangle(int n){
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            // Optimization: Use a single expression instead of nested if-else blocks
            // (row + col) % 2 == 0 is true for all '1' positions
            cout << ((row + col) % 2 == 0 ? "1" : "0");
        }
        cout << endl;
    }
}
void crown(int n){
	int N=2;
	for(int row=1;row<=n;row++){
		//cout<<(2*row)-2;
		for(int col=1;col<=row;col++){
			cout<<col;
		}
		for(int space=0;space<((2*n)-N);space++){
				if(space>9){
					cout<<"  ";
				}
				else cout<<" ";
		}
		N=N+2;
		for(int rcol=row;rcol>0;rcol--){
			cout<<rcol;
		}
		cout<<endl;
	}
}

void singleCrown(int n){
	int N=2;
	for(int row=1;row<=n;row++){
		//cout<<(2*row)-2;
		for(int col=1;col<=row;col++){
			cout<<col;
		}
		for(int space=0;space<((2*(n-row)));space++){
				 cout<<" ";
		}
		for(int rcol=row;rcol>0;rcol--){
			cout<<rcol;
		}
		cout<<endl;
	}
}
void num_triangle(int n){
	int num=1;
	for(int row=1;row<=n;row++){    
	for(int col=0;col<row;col++){
		cout<<num<<" ";
	      	      	num++;
	      }
	      cout<<endl;
	}
}
void alpha_triangle(int n){
	for(int row=0;row<=n;row++){    
		char alpha=65;
		for(int col=0;col<row;col++){
		cout<<char(alpha);
	      	alpha++;
	      }
	      cout<<endl;
	}
}

void rev_alpha(int n){
for(int row=n;row>0;row--){    
	char alpha=65;
	for(int col=0;col<row;col++){
	cout<<char(alpha);
	alpha++;
      }
      cout<<endl;
}
}
void rev_alpha_same(int n){
char alpha=65;
for(int row=1;row<=n;row++){    
	for(int col=0;col<row;col++){
	cout<<char(alpha)<<" ";
      }
      alpha++;
      cout<<endl;
}
}
/*void alpha_pyramid(int n){
char alpha=65;
for(int row=1;row<=(2*n)-1;row++){
	for(int col=0;col<(n-row);col++){
		cout<<" ";
	}
	for(int col=0;col<row;col++){
		cout<<char(alpha);	
		alpha++;
	}
	cout<<endl;
}
}*/
void alpha_pyramid(int n){
for(int row=1;row<=n;row++){
char alpha=65;
for(int col=0;col<=(n-row);col++){
    cout<<" ";
}
for(int col=0;col<row;col++){
    cout<<char(alpha);
    alpha++;
}
alpha=alpha-1;
for(int col=row;col>1;col--){
    alpha--;
    cout<<alpha;
}
cout<<endl;
}
}
void number18(int n){
int starting_letter=65+(n-1);
for(int i=0;i<n;i++){
	int next = starting_letter;
	for(int col=0;col<=i;col++){
		cout<<char(next);
		next++;
	}
	starting_letter--;
	cout<<endl;
}
}
void number19(int n){
for(int row=0;row<n;row++){
	for(int col=n;col>row;col--){
		cout<<"*";
	}
	for(int ws=0;ws<row*2;ws++){
		cout<<" ";
	}
	for(int col=n;col>row;col--){
		cout<<"*";
	}
	cout<<endl;
}
for(int row=0;row<n;row++){
	for(int col=0;col<=row;col++){
		cout<<"*";
	}
	for(int ws=0;ws<((2*n)-((row+1)*2));ws++){
		cout<<" ";
	}
	for(int col=0;col<=row;col++){
		cout<<"*";
	}
	cout<<endl;
}
}

/*+++++++++++++++++++++++++++++++++++++++++++*/
void number20(int n){
for(int row=0;row<n;row++){
	for(int col=0;col<=row;col++){
		cout<<"*";
	}
	for(int ws=0;ws<((2*n)-((row+1)*2));ws++){
		cout<<" ";
	}
	for(int col=0;col<=row;col++){
		cout<<"*";
	}
	cout<<endl;
}

for(int row=0;row<n;row++){
	for(int col=n;col>row;col--){
		cout<<"*";
	}
	for(int ws=0;ws<row*2;ws++){
		cout<<" ";
	}
	for(int col=n;col>row;col--){
		cout<<"*";
	}
	cout<<endl;
}
}
/*-------------------------------------------*/
int main(){
	square(5,'*');
	triangle(5,'*');
	triangle(5);
	triangle(5, true);
	triangle(5,'*', true);
	triangle(true,5);
	pyramid(20, '*');
	cout<<endl;
	revpyramid(20, '*');
	diamond(10,'%');
	verticalPyramid(5, '*');
	binarytriangle(5);
	drybinarytriangle(5);
	singleCrown(9);
	crown(10);
	num_triangle(3);
	alpha_triangle(5);
	rev_alpha(5);
	cout<<endl;
	rev_alpha_same(5);
	alpha_pyramid(5);
	number18(5);
	number19(5);
	number20(5);
}


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
}


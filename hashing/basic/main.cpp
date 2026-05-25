#include<iostream>
using namespace std;
#define MAX_SIZE 1000000
//globally hash array size can be upto 10^7 and inside main() it can be upto 10^6 for some reason(tbsl)
int main(){
	int size;
	cout<<"Size:";
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<"element "<<i<<"'s value:";
		cin>>arr[i];
	}
	int hash_arr[MAX_SIZE]={0};
	for(int i=0;i<size;i++){
		hash_arr[arr[i]] +=1;
	}
	int target;
	while(true){
		cout<<"Which element to search? ";
		cin>>target;
		cout<<target<<" appears "<<hash_arr[target]<<" times."<<endl;
	}
	return 0;

}

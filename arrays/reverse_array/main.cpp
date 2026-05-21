#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"enter size: ";
	cin>>size;
	int arr[size];
	cout<<"enter elements: ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int index=size-1;
	cout<<"Reversed:";
	while(index>=0){
		cout<<arr[index]<<" ";
		index--;
	}
}

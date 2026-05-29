#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

//map<key, value> map_name;
//unordered_map<key, value> map_name;

int main(){
	int n;
	cout<<"size: ";
	cin>>n;
	int arr[n];
	//precompute hash array
	map<int , int > mrmap;
	for(int i=0;i<n;i++){
		cout<<"enter element "<<i<<": ";
		cin>>arr[i];
		mrmap[arr[i]]++;
	}
	cout<<"hashing done!"<<endl;
	//fetching via hash function
	while(true){
		int target;
		cout<<"Search for: ";
		cin>>target;
		cout<<target<<" appears "<<mrmap[target]<<" times"<<endl;
	}
	return 0;

}

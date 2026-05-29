#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	int size;
	cout<<"enter your array size:";
	cin>>size;
	int arr[size];
	int max_element , max=0;
	
	unordered_map <int , int> hash_arr;
	for(int i=0;i<size;i++){
		cout<<"Enter element:";
		cin>>arr[i];
		hash_arr[arr[i]]++;
		cout<<"elemnt hashed!:"<<endl;
	}
	for(auto i=hash_arr.begin();i!=hash_arr.end();i++){
		if(i->second>max){
			max = i->second;
			max_element = i->first;
		}	
	}
	
	cout<<max_element<<" is maximum occuring number with "<<max<<" appearances"<<endl;
	
	return 0;
}


#include<iostream>
#include<vector>

using namespace std;

void insSort(vector<int> &arr,int key){
	//base case
	if(key==arr.size()){return;}
	//statements
	int temp = arr[key];
	int i = key-1;
	while(i>=0){
		if(temp<arr[i]){
			arr[i+1] = arr[i];
			i--;	
		}
		else{break;}
	}
	arr[i+1] = temp;
	//recursive call
	insSort(arr,key+1);
}

int main(){
	vector<int> arr = {5,3,2,6,7,1};
	for(auto i:arr){cout<<i<<" ";}
	cout<<endl;
	insSort(arr,1);
	for(auto i:arr){cout<<i<<" ";}
	

}

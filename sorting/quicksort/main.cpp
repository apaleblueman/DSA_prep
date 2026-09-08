#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findPivot(vector<int> &array, int start, int end){
	int p=end;
	int i=start-1;
//cout<<"P="<<p<<endl;
	for(int j=start;j<=end-1;j++){
//		cout<<"inside loop"<<endl;
		if(array[j]<array[p]){
//			cout<<"inside if"<<endl;
			i++;
			swap(array[j],array[i]);
		}
	}
	//i++;
	swap(array[i+1], array[p]);
	return i;
}
void quickSort(vector<int> &array, int start, int end){
	if(end<=start) return;
	int pivot = findPivot(array, start, end);
	quickSort(array, start, pivot-1);
	quickSort(array, pivot+1, end);
}

int main(){
	vector<int> array = {5,3,8,4,7};
	quickSort(array,0,array.size()-1);
	for(auto e: array){
		cout<<e<<" ";	
	}
	return 0;
}

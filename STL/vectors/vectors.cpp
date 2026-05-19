#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
	//declaring vector
	vector<int> v;
	//two ways to add elements, emplace back works for pairs without need of {}
	v.push_back(1);
	v.emplace_back(2);
	//vector pair
	vector<pair<int,int>> vec_pairs;
	//container- vector<datatype> name(size, instance)
	vector<int> v1(5,100);// [100,100,100,100,100]
	vector<int> v2(5);//[0,0,0,0,0]
	vector<int> v3(v1); // same as v1
	
	//accessing elements
	//method1- array like indexes or use .at
	cout<<v1[0]<<endl;
	cout<<v2.at(1)<<endl;
	cout<<v1.back()<<endl;//last element
	//using iterator- vector<datatype.::iterator name = vector_name.begin(); it points to memory
	vector<int>::iterator i= v1.begin();
	//post increment
	i++;
	//defrence pointed memory
	cout<<*(i)<<endl;
	//types of iterators
	//vector<int>::iterator iend = v1.end(); //points to memory next to last element , so use i-- decrement here
	//vector<int>::iterator rend = v1.rend(); //points to memory just before first element , so use i++ decrement here
	//vector<int>::iterator rbeg = v1.rbegin(); //points to memory of last element , use i++ to move in reverse towards real first element
	
	//using loops to print vector
	for(vector<int>::iterator it=v1.begin(); it != v1.end();it++){
		cout<< *(it);
	}
	cout<<endl;
	//auto : atomatically take iterator datatype
	for(auto it = v2.begin();it!=v2.end();it++){
		cout<< *(it);
	}
	cout<<endl;
	//reshuffle/erase addresses
	//one element
	v2.erase(v2.begin()+1);
	//range of elements - [start, end], where end not included
	v2.erase(v2.begin()+2, v2.begin()+4);

	//insertion
	vector<int> nums(5,22);
	nums.insert(nums.begin(), 5,21);//add 5 21s at first position
	vector<int>::iterator it2 = nums.begin();
	cout<<endl;
	for(auto it2=nums.begin();it2!=nums.end();it2++){
		cout<<*(it2)<<" ";
	}
	//inserting vector into another vector
	vector<int> copy = {1,2,3};
	nums.insert(nums.begin(), copy.begin(),copy.end());

	cout<<endl;
	for(auto it2=nums.begin();it2!=nums.end();it2++){
		cout<<*(it2)<<" ";
	}
	cout<<endl;
	//size
	cout<<nums.size();
	//pop last element
	nums.pop_back();
	//swap
	copy.swap(nums);
	copy.clear();
	cout<<endl<<copy.empty();
}


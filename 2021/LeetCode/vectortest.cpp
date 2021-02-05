#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> list;
	int num = 29;
	bool found = false;
	
	for(int i = 1; i< 10000; i+=5*i-1){
		list.push_back(i);
	}
	
	for(auto i = list.begin(); i!=list.end();++i){
		cout<<*i<<endl;
	}
	
	for(auto i = list.begin(); i!=list.end();++i){
		if(*i==num){
			found = true;
			break;
		}
	}
		
	if(found){
		cout<<"Found"<<endl;
	}
	else
		cout<<"Not Found"<<endl;
}

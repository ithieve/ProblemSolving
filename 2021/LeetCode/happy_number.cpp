#include <iostream>
#include <vector>

using namespace std;

bool happy(int n){
	int sum = 0;
	vector<int> vec;
	bool found=false;
	
	while(!found){
		vec.push_back(sum);
		while(n){
			int hold = n%10;
			sum += (hold*hold);
			n /= 10;
		}
		if (sum == 1){
			cout<<"true"<<endl;
			return true;
		}
		else{
			n=sum;
			found=false;
			for(auto i = vec.begin(); i!= vec.end(); ++i){
				if (sum == *i){
					found = true;
					cout<<"same thing found, breaking"<<endl;
					break;
				}
			}
			if(found){
				cout<<"False"<<endl;
				return true;
			}
		}
		
	}
	
	
	
}

int main(){
	int n= 19;
	cout<<"Happy: "<<happy(n)<<endl;
}

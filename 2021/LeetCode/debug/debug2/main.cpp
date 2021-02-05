#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits){
	auto pointer=digits.end() -1;
	cout<<*pointer<<endl;
	if(*pointer < 9){
		cout<<"i am 1"<<endl;
		++*pointer;
		
	}
	else{
		
		for(pointer=digits.end()-1; pointer!= digits.begin();--pointer){
			if(*pointer==9)
			{
				cout<<"i am 2"<<endl;
				*pointer = 0;
			}
			else{
				cout<<"i am 3"<<endl;
				++*pointer;
				return digits;
			}
			
		}
		if(pointer == digits.begin()){
			if(*pointer==9){
				cout<<"i am 4"<<endl;
				*digits.begin()=1;
				digits.push_back(0);
			}
			else{
				cout<<"i am 5"<<endl;
				++*digits.begin();
			}
		}
	}
	return digits;
}

void printv(vector<int> vec){
	for(auto i=vec.begin(); i!= vec.end(); ++i){
		cout<<*i<<" "<<endl;
	}
}


/*
9

10 / make 1 push 0
----
19

20/ make 0 go next +1

---
119

120 /make 0 go next +1

---
99

 0 / make 0 go next if 9 again make 0 go next if p == .begin and 9 
 		make begin = 1 and push 0

--
199 / make 0 go next if 9 again make 0 go next the +1 if <9


---
*/
int main(int argc, char**argv){
	vector<int> digit;
	digit.push_back(9);
	digit.push_back(8);
	digit.push_back(9);
	printv(plusOne(digit));
}

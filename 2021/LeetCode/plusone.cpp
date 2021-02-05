#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits){
	auto pointer=digits.end();
	if(*digits.end() < 9){
		++*digits.end();
	}
	else{
		
		for(pointer=digits.end(); pointer!= digits.begin();--pointer){
			if(*pointer==9)
			{
				*pointer = 0;
			}
			else{
				++*pointer;
			}
			
		}
		if(pointer == digits.begin()){
			if(*pointer==9){
				*digits.begin()=1;
				digits.push_back(0);
			}
			else{
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

120 /make go next +1

---
99

 0 / make 0 go next if 9 again make 0 go next if p == .begin and 9 
 		make begin = 1 and push 0

--
199 / make 0 go next if 9 again make 0 go next the +1 if <9


---
*/
int main(){
	vector<int> digit;
	digit.push_back(1);
	digit.push_back(2);
	digit.push_back(3);
	printv(plusOne(digit));
	
	
	
	
}

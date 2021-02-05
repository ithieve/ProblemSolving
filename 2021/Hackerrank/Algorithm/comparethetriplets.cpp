#include <iostream>

using namespace std;

int main(){
	int alice[3];
	int bob[3];
	
	cin>>alice[0]>>alice[1]>>alice[2];
	cin>>bob[0]>>bob[1]>>bob[2];
	int score[2] = {0,0};
	
	for(int i =0; i<3; ++i){
		if 	(alice[i]>bob[i]) ++score[0];
		if	(alice[i]<bob[i])  ++score[1];
	}
	
	for(int i=0; i<2; ++i) cout<<score[i]<<" ";
	cout<<endl;
	
}

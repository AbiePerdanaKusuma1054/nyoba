#include <iostream>

using namespace std;
int main(){
	for(int i=50;i>=0;i--){
		int j=i%3;
		if(j==0)
			cout<<i<<" ";	
	}
}

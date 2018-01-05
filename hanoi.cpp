#include <iostream>

using namespace std;
void hanoi(int n,char a, char b, char c){
	if(n>0){
		hanoi(n-1,a,b,c);
			cout<<a<<" na " <<b<<endl;
		hanoi(n-1,c,b,a);
	}
}
int main(int argc, char** argv) {
	hanoi(3,'A','B','C');
	return 0;
}

#include <iostream>

using namespace std;
int f(int n ){
	if (n==0) return 5;
	else return f(n-1)+3;

}
int main(int argc, char** argv) {
	
	cout<<f(1);
	return 0;
}

#include <iostream>

using namespace std;
int potega(int p, int w) {
	if (w==0) return 1;
	else return p*potega(p,w-1);
}
int main(int argc, char** argv) {
	int p,w;
	
	cout<<potega(2,4);
	return 0;
}

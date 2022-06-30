#include <iostream>
using namespace std;

inline int cube(int n) 
{ 
	return n*n*n; 
} 

int main() 
{ 
	int c; 
	c = cube(10); 
	cout<<c; 
	return 0;
}

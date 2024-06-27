#include <cmath> 
#include <iostream> 
using namespace std; 

bool isBuzz(int num) 
{ 
	
	return (num % 10 == 7 || num % 7 == 0); 
} 

int main(void) 
{ 
	int i = 67, j = 19; 
	if (isBuzz(i)) 
		cout << "Buzz Number\n"; 
	else
		cout << "Not a Buzz Number\n"; 
	if (isBuzz(j)) 
		cout << "Buzz Number\n"; 
	else
		cout << "Not a Buzz Number\n"; 
} 

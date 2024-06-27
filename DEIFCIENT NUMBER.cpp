#include <bits/stdc++.h> 
using namespace std; 

int divisorsSum(int n) 
{ 
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++) { 
		if (n % i == 0) { 
			
			if (n / i == i) { 
				sum = sum + i; 
			} 
			else
			{ 
				sum = sum + i; 
				sum = sum + (n / i); 
			} 
		} 
	} 
	return sum; 
} 

bool isDeficient(int n) 
{ 
	return (divisorsSum(n) < (2 * n)); 
} 

int main() 
{ 
	isDeficient(12) ? cout << "YES\n" : cout << "NO\n"; 
	isDeficient(15) ? cout << "YES\n" : cout << "NO\n"; 
	return 0; 
} 

#include <bits/stdc++.h>
using namespace std;

bool isAbundantNumber(int n)
{
	int sum = 0;

	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}

	if (sum > n) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	if (isAbundantNumber(12)) {
		cout << "YES" << endl;
		;
	}
	else {
		cout << "NO" << endl;
		;
	}
}


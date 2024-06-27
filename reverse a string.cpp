#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string word = "scaler";
	reverse(word.begin(), word.end());
	cout << word;
	return 0;
}

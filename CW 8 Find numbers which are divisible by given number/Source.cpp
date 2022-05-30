#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> divisible_by(const vector<int>& numbers,const int& divisor){
	vector<int>result;
	copy_if(numbers.begin(), numbers.end(), back_inserter(result), [divisor](auto it) { return it % divisor == 0; });
	return result;
}

int main() {
	vector<int> numbers = { 1, 2, 3, 4, 5, 6 };
	int div = 2;
	divisible_by(numbers, div);
	return 0;
}
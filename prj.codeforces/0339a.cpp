#include<iostream>
#include<vector>
#include<algorithm>
int main() {
	std::string s = "";
	std::cin >> s;
	std::vector<int> vec;
	for (int i = 0; i < s.size(); i+=2) {
		vec.push_back((int)s[i]-48);
	}

	std::sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size()-1; i ++) {
		std::cout << vec[i]<<"+";
	}
	std::cout << vec[vec.size() - 1];
}

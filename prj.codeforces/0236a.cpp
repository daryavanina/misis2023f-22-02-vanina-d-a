#include<iostream>
#include<vector>
#include<algorithm>
int main() {
	std::string s = "";
	std::cin >> s;
	std::vector<char> vec;
	for (int i = 0; i < s.size(); i++) {
		if (std::find(vec.begin(), vec.end(), s[i]) == vec.end()) {
			vec.push_back(s[i]);
		}
	}
	
	std::cout << (vec.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}
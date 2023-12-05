#include<iostream>
int main() {
	std::string s1 = "";
	std::string s2 = "";
	std::cin >> s1 >> s2;

	int size = s1.size();
	int ans = -2;
	for (int i = 0; i < size; i++) {
		if (((int)s1[i]-(int)s2[i])%32==0) {
			ans = 0;
		}
		else {
			if ((int)s1[i]%32 - (int)s2[i] % 32 > 0) {
				ans = 1;
				break;
			}
			else {
				ans = -1;
				break;
			}
		}
	}
	std::cout << ans;
}

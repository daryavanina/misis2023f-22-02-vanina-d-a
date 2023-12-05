#include<iostream>
int main() {
	int n = 0;
	std::cin >> n;
	std::string s = "";
	std::cin >> s;
	int winD = 0;
	int winA = 0;
	for (int i = 0; i < n; i++) {
		(s[i] == 'D') ? winD++ : winA++;
		if (winD > (n + 1) / 2 || winA > (n + 1) / 2) {
			break;
		}
	}
	if (winD == winA) {
		std::cout << "Friendship";
	}
	else {
		std::cout << (winD > winA ? "Danik" : "Anton");
	}
}

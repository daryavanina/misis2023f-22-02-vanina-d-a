#include<iostream>
#include<vector>
int main() {
	int n = 0;
	std::cin >> n;
	char val;
	char predval;
	int ans = 0;
	std::cin >> predval;
	for (int i = 1; i < n; i++) {
		std::cin >> val;
		if (predval == val) {
			ans++;
		}
			predval = val;
	}
	std::cout << ans;

}
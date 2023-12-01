#include<iostream>
#include<vector>
int main() {
	int n = 0, k = 0;
	std::cin >> n >> k;
	int val = 0;
	int ans = 0;
	std::vector<int> vec;
	for (int i = 0; i < n; i++) {
		std::cin >> val;
		vec.push_back(val);
	}
	for (int i = 0; i < n; i++) {
		if (vec[i] >= vec[k - 1] && vec[i] > 0) {
			ans++;
		}
	}
	std::cout << ans;
}
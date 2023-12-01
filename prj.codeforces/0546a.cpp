#include<iostream>
int main() {
	int k = 0;
	int n = 0;
	int w = 0;
	std::cin >> k >> n >> w;
	int ans = 0;
	ans = k * (1 + w) * w / 2 - n;
	std::cout << (ans > 0 ? ans : 0);
}
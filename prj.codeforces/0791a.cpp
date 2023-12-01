#include<iostream>
int main() {
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	int ans = 0;
	while (b >= a) {
		a *= 3; 
		b *= 2;
		ans++;
	}
	std::cout << ans;
}
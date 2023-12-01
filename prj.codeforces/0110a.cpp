#include<iostream>
int main() {
	long long int n = 0;
	std::cin >> n;
	int cnt = 0;
	while (n > 0) {
		if (n % 10 == 4 || n % 10 == 7) {
			cnt++;
			//std::cout << n % 10 << " " << cnt <<" ";
		}
		n /= 10;
		//std::cout << n << std::endl;
	}
	//std::cout << cnt << " ";
	int ans = 0;
	bool flag = 1;
	if (cnt == 0) {
		std::cout << "NO";
	}
	else {
		while (cnt > 0) {
			if (cnt % 10 != 4 && cnt % 10 != 7) {
				std::cout << "NO";
				flag = 0;
				break;
			}
			cnt /= 10;
		}
		if (flag) {
			std::cout << "YES";
		}
	}
}
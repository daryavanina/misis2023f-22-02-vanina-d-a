#include<iostream>
#include<string>
int main() {
	std::string s = "";
	std::cin >> s;
	int cnt_low = 0;
	bool flag = 0;//������ ���������
	for (int i = 0; i < s.size(); i++) {
		if (std::islower(s[i])) {
			cnt_low++;
		}
		if (cnt_low >= (s.size()+1) / 2) {
			flag = 1;//������ ��������� 
		}
	}
	if (!flag) {
		for (int i = 0; i < s.size(); i++) {
			s[i] = std::toupper(s[i]);
		}
	}
	else {
		for (int i = 0; i < s.size(); i++) {
			s[i] = std::tolower(s[i]);
		}
	}
	std::cout << s;
}
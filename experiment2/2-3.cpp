#include<iostream>
using namespace std;

int digui(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		if (n % 2 == 0) {
			return digui(n - 1) + 2;
		}
		else {
			return digui(n - 1) + digui(n - 2) - 1;
		}
	}
}

int main() {
	int n;
	while (1) {
		cout << "Please enter a sequence size:";
		cin >> n;
		if (n == 0) {
			cout << "" << endl;
			continue;
		}
		for (int i = 1; i <= n; i++) {//�״�㣬���ܴ�0��ʼ����������ѭ��
			cout << digui(i) << " ";
		}
		cout << "" << endl;
	}
	return 0;
}
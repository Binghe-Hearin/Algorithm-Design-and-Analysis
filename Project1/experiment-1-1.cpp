#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
struct student {
	int high;
	string sex;
};//结构体

bool compare(const student& a, const student& b) {
	return (a.high > b.high);
}//判断high大小
int main() {
	int n;
	cout << "Please enter the number of students:";
	cin >> n;
	vector<student> stu(n);
	for (int i = 0; i < n; i++) {
		int sex = rand() % 2;
		if (sex) {
			stu[i].sex = "female";
			int high = 150 + rand() % 21;
			stu[i].high = high;
		}
		else {
			stu[i].sex = "male";
			int high = 160 + rand() % 21;
			stu[i].high = high;
		}
	}
	for (int i = 0; i < n; ++i) {
		cout << "( " << stu[i].high << "， " << stu[i].sex << " )" << endl;
	}
	//排序
	sort(stu.begin(), stu.end(), compare);
	cout << "After sorting:" << endl;
	for (int i = 0; i < n; ++i) {
		cout << "( " << stu[i].high << "， " << stu[i].sex << " )" << endl;
	}
	return 0;
}
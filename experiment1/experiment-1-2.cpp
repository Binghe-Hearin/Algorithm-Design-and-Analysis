#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include <vector>
#include <iomanip>
using namespace std;
//ȫ�ֱ�����¼ʱ��
double total_time = 0.0;
void average_time_sort(int n) {
    //����vector
    vector<int> vec(n);  // �������n��Ԫ�ص�����
    for (int i = 0; i < n; ++i) {  // Ϊ���鸳ֵ
        vec[i] = rand() % n + 1;
    }
    clock_t start_time = clock();
    sort(vec.begin(), vec.end());  // �������������
    clock_t elapsed_time = clock() - start_time;  // ����ʱ��
    total_time += static_cast<double>(elapsed_time) / CLOCKS_PER_SEC;
}// nΪ�����С
int main() {
    srand(time(0));
    int n, k;
    cin >> n;
    cin >> k;
    for (int i = 0; i < k; i++) {
        average_time_sort(n);
    }
    double ave = total_time / k;
    cout << "ƽ��ʱ��Ϊ��" << fixed << setprecision(6) << ave << endl;
    return 0;
}
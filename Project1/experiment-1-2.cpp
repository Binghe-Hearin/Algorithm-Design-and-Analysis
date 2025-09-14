#include<iostream>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include <vector>
#include <iomanip>
using namespace std;
//全局变量记录时间
double total_time = 0.0;
void average_time_sort(int n) {
    //创建vector
    vector<int> vec(n);  // 申请包含n个元素的数组
    for (int i = 0; i < n; ++i) {  // 为数组赋值
        vec[i] = rand() % n + 1;
    }
    clock_t start_time = clock();
    sort(vec.begin(), vec.end());  // 对数组进行排序
    clock_t elapsed_time = clock() - start_time;  // 计算时间
    total_time += static_cast<double>(elapsed_time) / CLOCKS_PER_SEC;
}// n为数组大小
int main() {
    srand(time(0));
    int n, k;
    cin >> n;
    cin >> k;
    for (int i = 0; i < k; i++) {
        average_time_sort(n);
    }
    double ave = total_time / k;
    cout << "平均时间为：" << fixed << setprecision(6) << ave << endl;
    return 0;
}
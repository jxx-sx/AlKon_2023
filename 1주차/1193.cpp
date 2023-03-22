#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum_of_num = 0; // 분모, 분자의 합
    for (int i = 1;; i++) {
        if (n > i)
            n -= i;
        else {
            sum_of_num = i + 1;
            break;
        }
    }

    if (sum_of_num & 1) // 합이 홀수인 경우 1/n에서 시작
        cout << n << '/' << sum_of_num - n;
    else // 합이 짝수인 경우 n/1에서 시작
        cout << sum_of_num - n << '/' << n;
}
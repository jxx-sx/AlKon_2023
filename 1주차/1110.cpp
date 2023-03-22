#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt = 0, n, origin_n, arr[2];
    cin >> n;
    origin_n = n;
    do {
        cnt++;                                    // 사이클 횟수
        arr[0] = n / 10;                          // 10의 자리
        arr[1] = n % 10;                          // 1의 자리
        n = arr[1] * 10 + (arr[0] + arr[1]) % 10; // 새로운 숫자 만들기
    } while (origin_n != n);

    cout << cnt;
}
#include <iostream>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long b[3];
    long long sum = 0;
    for(int i = 0; i < m; i++) {
        sum += a[i];
    }
    b[0] = sum;
    long long head = 0, tail = m - 1;
    long long left = head, right = tail;
    b[1] = a[head];
    b[2] = sum;
    for(head = 1; head <= (n - m); head++) {
        tail++;
        b[1] = a[head];
        b[2] = b[2] - a[head] + a[tail];
        if(b[2] < b[0]) {
            b[0] = b[2];
            left = head;
            right = tail;
        }
        b[1] = a[head];
    }
    if(b[0] < k * m) {
        cout << (left + 1) << " " << (right + 1) << endl;
    } else {
        cout << "0 0" << endl;
    }
    return 0;
}

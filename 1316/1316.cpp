#include<iostream>
#include<cmath>
#include<algorithm>
#include <iomanip>
using namespace std;

int main() {
    int a[10005] = { 0 };
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        double ans;
        if (n % 2)
            ans = a[n / 2];
        else
            ans = (a[n / 2] + a[n / 2 - 1]) * 1.0 / 2;
        cout <<fixed<< setprecision(2) << ans <<endl;
    }
    return 0;
}

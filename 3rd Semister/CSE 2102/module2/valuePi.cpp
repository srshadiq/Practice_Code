#include<bits/stdc++.h>
using namespace std;

void calculatePi(int n) {
    int r[n+7];
    int b, d;
    int c = 0;
    for (int i = 0; i < n; i++) {
        r[i] = 2000;
    }
    for (int k = n; k > 0; k -= 14) {
        d = 0;
         int i = k;

        while (1) {
            d += r[i] * 10000;
            b = 2 * i - 1;
            r[i] = d % b;
            d /= b;
            i--;

            if (i == 0) break;

            d *= i;
        }
        if(k==n){
            printf("%.3f", (float)(c + d / 10000)/1000);
        }
        else{
            printf("%.4d", (c + d / 10000));
        }
        c = d % 10000;
    }
}

int main() {
    int n=10000;
    calculatePi(n);
    return 0;
}

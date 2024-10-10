#include<bits/stdc++.h>
using namespace std;
bool powercheck(int n) {
if (n <= 0) return false;
while (n > 1) {
if (n % 2 != 0) return false;
n /= 2;
}

 return true;
 }

 int main() {
 int Lb,Ub,n1,n2,x,y;
 cin >> Lb >> Ub;
 if(Lb>=Ub) {
 cout << "Invalid Input" << endl;
 return 0;
 }
 if(powercheck(Lb) and powercheck(Ub)) {
 n1 = log2(Lb); n2 = log2(Ub);
 x = (Lb/2) * n1;
 y = (Ub/2) * n2;
 cout << y - x + 1 << endl;
 }
 else cout << "Invalid Input" << endl;
 }

#include <stdio.h>
#include<math.h>
void func(int *x){
    *x=5;
}

int main() {
    int x=10;
    func(&x);
    printf("%d",x);

    return 0;
}
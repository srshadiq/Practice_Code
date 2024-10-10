#include <iostream>
using namespace std;

int GETMIN(int A[],int N,int K)
{
    int MIN = A[K];
    int LOC = K;
    for (int J = K + 1; J < N; ++J) {
        if (MIN > A[J]) {
            MIN = A[J];
            LOC = J;
        }
    }
    return LOC;
}
int main() {
    int N = 10;
    int A[]={2,5,6,8,2,1,9,7,5,3};
    int loc,min;
    for (int k = 0; k < 10; k++)
    {
        loc=GETMIN(A,N,k);
        int temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }
    for (int i = 0; i < N; i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

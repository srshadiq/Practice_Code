#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> setA = {1, 2,3}; 
    vector<char> setB = {'A', 'B','C'};

    cout << "Cartesian Product:" << endl;
    for (auto i : setA) {
        for (auto j : setB) {
            cout << "(" << i << ", " << j<< ") ";
        }
    }

    return 0;
}

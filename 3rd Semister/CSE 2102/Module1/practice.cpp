#include <iostream>
#include <string>

using namespace std;

string bitwise_and(const string& str1, const string& str2) {
    string result = "";
    for (size_t i = 0; i < min(str1.length(), str2.length()); ++i) {
        result += static_cast<char>(str1[i] & str2[i]);
    }
    return result;
}

string bitwise_or(const string& str1, const string& str2) {
    string result = "";
    for (size_t i = 0; i < min(str1.length(), str2.length()); ++i) {
        result += static_cast<char>(str1[i] | str2[i]);
    }
    return result;
}

string bitwise_xor(const string& str1, const string& str2) {
    string result = "";
    for (size_t i = 0; i < min(str1.length(), str2.length()); ++i) {
        result += static_cast<char>(str1[i] ^ str2[i]);
    }
    return result;
}

int main() {
    string string1 ;
    string string2 ;
    cin>>string1>>string2;

    string result_and = bitwise_and(string1, string2);
    string result_or = bitwise_or(string1, string2);
    string result_xor = bitwise_xor(string1, string2);

    cout << "Bitwise AND: " << result_and << endl;
    cout << "Bitwise OR: " << result_or << endl;
    cout << "Bitwise XOR: " << result_xor << endl;

    return 0;
}

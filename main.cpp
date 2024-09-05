#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool isUpperOrLowerA(string str) {
    if (str[0] == 'A' or str[0] == 'a') {
        return true;
    }
    return false;
}

// Get count elements in vector "is_nervous" equals true
void PrintWorryCount(const vector<bool> &is_nervous) {
    cout << count(is_nervous.begin(), is_nervous.end(), 1) << endl;
}

// Get count string in vector "str" which starting with uppercase or lowercase "a"
int getCountStrWithUpperOrLowerCase(vector<string> str) {
    return count_if(str.begin(), str.end(), isUpperOrLowerA);
}

int main() {
    PrintWorryCount({true, true, false, true});
    cout << getCountStrWithUpperOrLowerCase({"qwdas", "Asdsd"});
    return 0;
}

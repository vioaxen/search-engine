#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Get count elements in <vector> is_nervous equals true
void PrintWorryCount(const vector<bool>& is_nervous) {
    cout << count(is_nervous.begin(), is_nervous.end(), 1) << endl;
}

int main() {
    PrintWorryCount({true, true, false, true});
    return 0;
}
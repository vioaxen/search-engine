#include <iostream>
#include <vector>

using namespace std;

// Get count elements in <vector> is_nervous equals true
void PrintWorryCount(const vector<bool>& is_nervous) {

    int worry_count = 0;
    for (bool status : is_nervous) {
        if (status) {
            ++worry_count;
        }
    }
    cout << worry_count << endl;
}

int main() {
    PrintWorryCount({true, true, false, true});
    return 0;
}
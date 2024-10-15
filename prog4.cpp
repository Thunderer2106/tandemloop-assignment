#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, num;
    vector<int> v;
    map<int, int> count;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    for (int i = 1; i <= 9; i++) {
        count[i] = 0;
    }
    for (int x : v) {
        for (int i = 1; i <= 9; i++) {
            if (x % i == 0) {
                count[i]++;
            }
        }
    }
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        if (i > 1) cout << ", ";
        cout << i << ": " << count[i];
    }
    cout << "}" << endl;
    return 0;
}

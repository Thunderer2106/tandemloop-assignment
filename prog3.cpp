#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int limit = (a % 2 == 0) ? a - 1 : a; 

    for (int i = 1; i <= limit; i += 2) {
        if (i > 1) {
            cout << ", ";
        }
        cout << i;
    }

    cout << endl;
    return 0;
}

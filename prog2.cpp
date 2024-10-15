#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1, count = 0; count < a; i += 2, count++) {
        if (count > 0) {
            cout << ", ";
        }
        cout << i;
    }

    cout << endl;
    return 0;
}

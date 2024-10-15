#include <iostream>
#include <string>

using namespace std;

class Calc {
public:
    Calc(double x, double y) : x(x), y(y) {}
    double operate(const string& op) {
        if (op == "add") {
            return x + y;
        } else if (op == "subtract") {
            return x - y;
        } else if (op == "multiply") {
            return x * y;
        } else if (op == "divide") {
            if (y != 0) {
                return x / y;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        } else {
            cout << "Error: Invalid operation!" << endl;
            return 0;
        }
    }

private:
    double x, y;
};

int main() {
    double a, b;
    string op;
    cin >> a >> b >> op;
    Calc c(a, b);
    double res = c.operate(op);
    cout << res << endl;
    return 0;
}

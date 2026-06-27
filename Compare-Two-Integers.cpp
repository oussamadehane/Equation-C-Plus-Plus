#include <iostream>
using namespace std;

void ReadTwoNumbers(int &n1, int &n2) {
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
}

bool CheckEquality(int n1, int n2) {
    return (n1 == n2);
}

void PrintResult(int n1, int n2) {
    if (CheckEquality(n1, n2))
        cout << n1 << " is equal to " << n2 << endl;
    else
        cout << n1 << " is not equal to " << n2 << endl;
}

int main() {
    int n1, n2;
    ReadTwoNumbers(n1, n2);
    PrintResult(n1, n2);
    return 0;
}

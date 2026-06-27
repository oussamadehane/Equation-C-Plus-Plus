#include <iostream>
using namespace std;

int ReadNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

bool IsEven(int n) {
    return (n % 2 == 0);
}

void PrintCheckResult(int n) {
    if (IsEven(n))
        cout << n << " is Even." << endl;
    else
        cout << n << " is Odd." << endl;
}

int main() {
    int n = ReadNumber();
    PrintCheckResult(n);
    return 0;
}

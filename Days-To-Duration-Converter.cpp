#include <iostream>
using namespace std;

int ReadTotalDays() {
    int Days;
    cout << "Please Enter Number Of Days: ";
    cin >> Days;
    return Days;
}

void ConvertAndPrintDuration(int TotalDays) {
    int Years = TotalDays / 365;

    int RemainderDays = TotalDays % 365;

    int Months = RemainderDays / 30;

    int Days = RemainderDays % 30;

    cout << "\nExpected Output: "
        << Years << " Year(s) "
        << Months << " Month(s) "
        << Days << " Day(s)" << endl;
}

int main() {
    int TotalDays = ReadTotalDays();
    ConvertAndPrintDuration(TotalDays);

    return 0;
}

#include <iostream>
using namespace std;

int ReadPages() {
    int pages;
    cout << "Enter the number of pages to be faxed: ";
    cin >> pages;
    return pages;
}

double CalculateFaxCost(int pages) {
    double serviceCharge = 3.00;
    double cost = serviceCharge;

    if (pages <= 10) {
        cost += (pages * 0.20);
    } else {
        // أول 10 صفحات بـ 0.20
        cost += (10 * 0.20);
        // الصفحات الإضافية بـ 0.10
        cost += ((pages - 10) * 0.10);
    }
    return cost;
}

void PrintTotalCost(double cost) {
    cout << "The total amount due is: $" << cost << endl;
}

int main() {
    int pages = ReadPages();
    double totalCost = CalculateFaxCost(pages);
    PrintTotalCost(totalCost);
    return 0;
}

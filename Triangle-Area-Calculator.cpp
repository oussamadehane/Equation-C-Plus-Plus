#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleSides(double& a, double& b, double& c) {
    cout << "Enter sides a, b, and c: ";
    cin >> a >> b >> c;
}

double CalculateS(double a, double b, double c) {
    return (a + b + c) / 2.0;
}

double CalculateArea(double a, double b, double c, double s) {
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void PrintArea(double area) {
    cout << "Triangle Area is: " << area << endl;
}

int main() {
    double a, b, c, s, area;

    ReadTriangleSides(a, b, c);
    s = CalculateS(a, b, c);
    area = CalculateArea(a, b, c, s);
    PrintArea(area);

    return 0;
}

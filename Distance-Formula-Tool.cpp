#include <iostream>
#include <cmath> 
using namespace std;

void ReadTwoPoints(double& x1, double& y1, double& x2, double& y2)
{
    cout << "Enter X1, Y1: ";
    cin >> x1 >> y1;
    cout << "Enter X2, Y2: ";
    cin >> x2 >> y2;
}

double CalculateDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void PrintResult(double distance)
{
    cout << "\nThe distance between the two points is: " << distance << endl;
}

int main()
{
    double x1, y1, x2, y2;
    
    ReadTwoPoints(x1, y1, x2, y2);
    double distance = CalculateDistance(x1, y1, x2, y2);
    PrintResult(distance);
    
    return 0;
}

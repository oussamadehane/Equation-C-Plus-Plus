#include <iostream>
using namespace std;

void ReadMassAndDensity(double& Mass, double& Density)
{
    cout << "Enter Mass: ";
    cin >> Mass;
    cout << "Enter Density: ";
    cin >> Density;
}

double CalculateVolume(double Mass, double Density)
{
    if (Density == 0) return 0;
    return Mass / Density;
}

void PrintAllData(double Mass, double Density, double Volume)
{
    cout << "\n--- Calculation Results ---" << endl;
    cout << "Mass:    " << Mass << endl;
    cout << "Density: " << Density << endl;
    cout << "Volume:  " << Volume << endl;
}

int main()
{
    double Mass, Density;
    ReadMassAndDensity(Mass, Density);
    double volume = CalculateVolume(Mass, Density);
    PrintAllData(Mass, Density, volume);

    return 0;
}

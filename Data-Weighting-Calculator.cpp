#include <iostream>
using namespace std;

void ReadScoreAndWeights(double &Sc1, double &Wei1, double &Sc2, double &Wei2, double &Sc3, double &Wei3, double &Sc4, double &Wei4)
{
    cout << "Enter Score 1 & Weight 1: "; cin >> Sc1 >> Wei1;
    cout << "Enter Score 2 & Weight 2: "; cin >> Sc2 >> Wei2;
    cout << "Enter Score 3 & Weight 3: "; cin >> Sc3 >> Wei3;
    cout << "Enter Score 4 & Weight 4: "; cin >> Sc4 >> Wei4;
}

double CalculateWeightedAverage(double Sc1, double Wei1, double Sc2, double Wei2, double Sc3, double Wei3, double Sc4, double Wei4)
{
    double totalWeight = Wei1 + Wei2 + Wei3 + Wei4;
    return ((Sc1 * Wei1) + (Sc2 * Wei2) + (Sc3 * Wei3) + (Sc4 * Wei4)) / totalWeight;
}

void PrintResult(double Average)
{
    cout << "\n--- Calculation Results ---" << endl;
    cout << "Weighted Average: " << Average << endl;
}

int main()
{
    double Sc1, Wei1, Sc2, Wei2, Sc3, Wei3, Sc4, Wei4;
    ReadScoreAndWeights(Sc1, Wei1, Sc2, Wei2, Sc3, Wei3, Sc4, Wei4);
    double Average = CalculateWeightedAverage(Sc1, Wei1, Sc2, Wei2, Sc3, Wei3, Sc4, Wei4);
    PrintResult(Average);

    return 0;
}

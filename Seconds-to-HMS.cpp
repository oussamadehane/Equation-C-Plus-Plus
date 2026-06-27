#include <iostream>
using namespace std;

int ReadSeconds()
{
    int seconds;
    cout << "Enter The Total Seconds: ";
    cin >> seconds;
    return seconds;
}

void PrintTimeDetails(int totalSeconds)
{
    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    cout << "\n--- Time Breakdown ---" << endl;
    cout << hours << " Hours : " << minutes << " Minutes : " << seconds << " Seconds" << endl;
}

int main()
{
    int totalSeconds = ReadSeconds();
    PrintTimeDetails(totalSeconds);
    return 0;
}

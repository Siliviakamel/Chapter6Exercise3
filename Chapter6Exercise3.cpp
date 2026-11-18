#include <iostream>
#include <iomanip>
using namespace std;

double fallingDistance(int t)
{
    const double g = 9.8;
    return 0.5 * g * t * t;
}

int main()
{
    cout << fixed << setprecision(1);
    cout << "Time (s)     Distance (m)\n";
    cout << "-------------------------\n";

    for (int time = 1; time <= 10; time++)
    {
        cout << setw(5) << time
            << setw(15) << fallingDistance(time) << endl;
    }

    return 0;
}
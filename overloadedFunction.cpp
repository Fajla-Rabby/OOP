#include <iostream>

using namespace std;

int AddXY(int x, int y)
{
    return x + y;
}

float AddXY(float x, float y)
{
    return x + y;
}

double AddXY(double x, double y)
{
    return x + y;
}

int main()
{
    cout << AddXY(10, 20) << endl;
    cout << AddXY(10.5, 20.5) << endl;
    cout << AddXY(10.5f, 20.5f) << endl;
}

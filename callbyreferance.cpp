#include <iostream>

using namespace std;

void SwapValue (int &x, int &y)
{
    int temp;
    temp = x; //store value of x to temp
    x = y; // assign y to x
    y = temp; // assign temp to y
}

int main()
{
    int p, q;
    p = 7;
    q = 5;
    SwapValue(p, q);
    cout<<" P = " << p << ", Q = " << q << endl;
}
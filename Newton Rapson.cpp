#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x*x*x - x*x + 2;
}
double diff_func(double x)
{
    return 3*x*x - 2*x;
}
void newton_rapson(double x)
{
    double h = func(x) / diff_func(x);
    while(abs(h) >= 0.001)
    {
        h = func(x)/diff_func(x);
        x = x -h;
    }
    cout << "The value of root: "<<x<<endl;
}
int main()
{
    double x;
    cout <<"Initial values: ";
    cin >> x;
    newton_rapson(x);
    return 0;
}

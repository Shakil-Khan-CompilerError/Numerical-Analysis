#include<iostream>
using namespace std;

double fx(double x)
{
    return 1/(1+x*x);
}
int main ()
{
    double lower,upper,step,integration;
    cin>>lower>>upper>>step;
    double h=(upper-lower)/step;
    double y0 = fx(lower);
    double y1 = fx(upper);
    integration = (y0+y1)/2;
    for (int i=1; i<=step-1; i++)
    {
        int x= lower+i*h;
        integration = integration + fx(x);
    }
    integration =integration*h;
    cout<<integration;
}

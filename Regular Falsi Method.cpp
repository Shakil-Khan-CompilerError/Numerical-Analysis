#include<bits/stdc++.h>
#define f(x) 3*(x) - cos(x) - 1

using namespace std;
int main()
{
    float x0, x1, x, f0, f1, f, e;
    int step = 1;
    cout << setprecision(6)<<fixed;
up:
    cout <<"Enter first step: ";
    cin >> x0;
    cout <<"Enter second step: ";
    cin >> x1;
    cout <<"Enter Tolerable error: ";
    cin >> e;
    f0 = f(x0);
    f1 = f(x1);
    if(f0 * f1 >0.0)
    {
        cout<<"Incorrect inital guess."<<endl;
        goto up;
    }
    cout<<"False position Methode: "<<endl;
    do
    {
        x = x0 -(x0-x1)*f0/(f0 - f1);
        f = f(x);
        cout<<"Iteration-"<<step<<" : \t x = "<<setw(10)<< x <<"and f(x) = "<<setw(10)<<f(x)<<endl;
        if(f0 * f < 0)
        {
            x1 = x;
            f1 = f;
        }
        else
        {
            x0 = x;
            f0 = f;
        }
    }
    while (fabs(f) > e);
    cout <<endl << "Root is: "<<x<<endl;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int return_the_greatest(int a, int b, int c , int d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    }
    else if(b > a && b > c && b > d)
    {
        return b;
    }
    else if(c > a && c > b && c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main() {
    
    int a,b,c,d;
    cin>> a >> b >> c >> d;

    cout<< return_the_greatest(a,b,c,d);

    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void PrintSize(string a, string b)
{
    cout<< a.size() << " " << b.size() << endl;
}

void MakeConcatenation(string a, string b)
{
    cout<< a +  b << endl;
}

int main() {
   
    string a,b;
    cin>> a >> b;

    PrintSize(a,b);

    MakeConcatenation(a,b);

   swap(a[0], b[0]);

    cout<< a << " " << b;
}

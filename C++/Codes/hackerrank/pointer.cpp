#include <iostream>

using namespace std;

void update(int *a, int *b)
{
    int a_main = *a;
    *a += *b;
    *b = abs(a_main- *b);
}

int main()
{

    int a,b;
    cin >> a >> b;

    update(&a, &b);

    cout<< a << endl;
    cout<< b << endl;
   

    return 0;
}
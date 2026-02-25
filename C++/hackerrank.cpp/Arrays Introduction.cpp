#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

int N;
cin>> N;
int inputs[N];  
if(N>=1 && N <=1000)
{
      for(int i = 0; i < N; i++)
      {
        cin>> inputs[i];
      }

      for(int i = N - 1; i >= 0; i--)
      { 
        cout<< inputs[i] << " ";
      
      }
}   


    return 0;
}

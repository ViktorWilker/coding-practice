#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {

    int a,b;
    string words[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin>> a >> b;

    for(int i = a; i <= b; i++)
    {
        if(i >= 1 && i <=9)
        {
           cout<< words[i-1] << "\n";
        }
        else if(i > 9 && i % 2 == 0)
        {
            cout<< "even" << endl;
        }
        else{
            cout<< "odd" << endl;
        }
        
    }
    

    return 0;
}
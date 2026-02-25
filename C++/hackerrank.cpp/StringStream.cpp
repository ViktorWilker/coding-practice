#include "iostream"
#include "string"
#include "sstream"
#include "vector"

using namespace std;

int main()
{
    string input;
    vector<int> numbers;
    int num;
    char comma;

    getline(cin, input);

    stringstream sso(input);

    while (sso >> num >> comma)
    {
        numbers.push_back(num);
        
    }

    if(sso.fail())
    {
        numbers.push_back(num);
    }

    for(int n : numbers)
    {
        cout<< n << endl;

    }
    return 0;
}
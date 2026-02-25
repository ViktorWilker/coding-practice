#include "iostream"

using namespace std;

int main()
{

    int number;
    string words[9] = {"one", "two", "three", "four", "five", "six", "seven", "eigth", "nine"};

    cin>>number;

    if(number>=1 && number<=9)
    {
        cout<< words[number - 1];
    }
    else
    {
        cout<< "Greater than 9";
    }


    return 0;
}
#include "iostream"
#include "cctype"

using namespace std;

int main()
{
  string TextTest = "meu numero de celular e 9, 5, 1, 5, 18260";

    for(char i : TextTest)
    {
        if(isdigit(i))
        {
            string num(1, i);
            stoi(num);
            cout<< "número: "<< num << endl;
        }
        else
        {
            cout<< "letra" << endl;
        }
    }

    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "string"
using namespace std;

struct StudentInfo
{
    int Age;
    string FirstName;
    string LastName;
    int Standard;
};

auto InsertInfos(auto InfosType)
{
    cin>> InfosType;

    return InfosType;
}

int main() {
    
    StudentInfo S_StudentInfo;

    int age = InsertInfos(S_StudentInfo.Age);
    string FirstName = InsertInfos(S_StudentInfo.FirstName);
    string LastName = InsertInfos(S_StudentInfo.LastName);
    int standard = InsertInfos(S_StudentInfo.Standard);

    cout<< age << "," << FirstName << "," << LastName << "," << standard;

    return 0;
}

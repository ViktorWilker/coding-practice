#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> vectorOfVectors(int quantityOfVectors);

int main()
{

    int n,q;
    cin>> n >> q;
    int coord[2];
    vector<vector<int>> listOfVectors = vectorOfVectors(n);

   for (int query = 0; query < q; query++) {
    cin >> coord[0] >> coord[1];
    if (coord[0] >= 0 && coord[0] < listOfVectors.size() && coord[1] >= 0 && coord[1] < listOfVectors[coord[0]].size()) 
    {
        cout << listOfVectors[coord[0]][coord[1]] << '\n';
    } 
}

    
    return 0;
}

vector<vector<int>> vectorOfVectors(int quantityOfVectors)
{
    vector<vector<int>> listOfvectorsFunction;

    for(int i = 0; i < quantityOfVectors; i++)
    {
        int size;
        cin>> size;
        vector<int> innerVectors(size);

        for(int j = 0; j < size; j++)
        {
            cin>> innerVectors[j];
        }

        listOfvectorsFunction.push_back(innerVectors);
    }

    return listOfvectorsFunction;
}
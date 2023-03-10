#include <iostream>
#include <vector>
using namespace std;

/*
 - Vectors are used to store elements of similar data types, unlike arrays the sizeof vectors can change dynamically

*/
int main()
{

    // cout << "Vector 1 = ";

    // for(int i = 0; i < vector1.size(); i++){
    //     cout << vector1[i] << " ";
    // }

    // vector<int> vector2 {1,2,3,4,5};
    // vector<int> vector2 {10,10,10,10,10};
    // vector<int> vector3(5,10);

    // for(int i = 0; i < vector3.size(); i++){
    //     cout << vector3[i] << " ";
    // }

    // Basic operation on vectors
    /*
        Add elements
        Access elements
        Change elements
        Remove elements
    */

    //--------------------------------------------------------------

    // Add
    //  vector<int> vector1 = {1, 2, 3, 4, 5};

    // cout << "Vector 1 = ";

    // for (int i = 0; i < vector1.size(); i++)
    // {
    //     cout << vector1[i] << " ";
    // }

    // vector1.push_back(6);
    // vector1.push_back(7);

    // cout << "New Vector 1 = ";

    // for (int i = 0; i < vector1.size(); i++)
    // {
    //     cout << vector1[i] << " ";
    // }

    //--------------------------------------------------------------
    // Access

    vector<int> vector1 = {1, 2, 3, 4, 5};

    cout << "Vector 1 = ";

    // cout << "Element at 0 index : " << vector1.at(0);
    // cout << vector1[6];
    // cout << "Element at 4 index : " << vector1.at(4);

    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }

    vector1.at(1) = 9;
    
    cout << "Updated Vector 1 = ";

        for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
}
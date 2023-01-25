/*
Iterators
Vector iterators are used to point to the memory address of a vector element. (Similar to pointes)

Syntax of creating an iterator
vector<T>::iterator iteratorName

iterator for int vector
vector<int>::iterator iteratorName

iterator for double vector
vector<double>::iterator iteratorName

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vector1 = {22,1,2,3, 13, 20};

    vector<int>::iterator iteratorInt;
    iteratorInt = vector1.begin();

    cout << "Vector1 [0] : " << *iteratorInt << endl;

    //print the 3rd element of vector   
    iteratorInt = vector1.begin() + 2;
    cout << "Vector1 [2] : " << *iteratorInt << endl;

    //print the last element of vector
    iteratorInt = vector1.end() - 1;
    cout << "Vector1 [last] : " << *iteratorInt << endl;
}
#include <iostream>
using namespace std;

int main(){

    // int a = 5;
    // int *p = &a;

    // cout << "Address of p is : " << p << endl;
    // cout <<  "Address of P+1 is " << p+1 <<endl;
    // //cout << &a << endl;
    // cout << "Value at p : " << *p << endl; //Derefrenceing

    // int b = 10;
    // *p = b ;// the address in p will point towards b ?
    // cout << "Address of p is : " << p << endl;
    // cout << "Value at p : " << *p << endl; //Derefrenceing

//---------------------------------------------------------------------------------


    int x = 5;
    int *p = &x;

    *p = 6;

    int **q = &p;
    int ***r = &q;

    cout << "Value at memory location where p is pointing at : " <<*p << endl;
    cout << &x <<endl;
    cout << &p <<endl;
    cout << q;

}
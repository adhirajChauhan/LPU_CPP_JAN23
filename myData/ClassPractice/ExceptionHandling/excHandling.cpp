/*
Exception handling

 Exception is a problem arises during execution of program

 try{

 }
 catch(ExceptionName e1){

 }
*/

#include <iostream>
using namespace std;

double division(int a, int b){
    if(b == 0){
        throw -1;
    }
    if(b == 1){
        throw -2;
    }
    return (a/b);
}

int main(){
    int x = 50;
    int y = 1;
    int z = 0;

    try{
        z = division(x, y);
        cout << z << endl;

    }catch(int e){
        cout << "Error code : " << e;
    }
}
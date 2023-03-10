#include <iostream>
using namespace std;

/*
Encapsulation

- It is defined as binding together the data and functions
e.g Company - tech, sales, acc department
college - mech, cse, ece branch


* feaatures

- We cannot access any function from the class directly, we need an object to access that function
- it also increases the security of data
- it helps to control the modication of data members of that particular class
*/

class Encapsulation{

    private:
    //Data hidden from outside the class
    int x;

    public:
    void set(int a){
        x = a;
    }

    int get(){
        return x;
    }
};

int main(){
    Encapsulation obj;
    obj.set(10);
    cout << obj.get();
}
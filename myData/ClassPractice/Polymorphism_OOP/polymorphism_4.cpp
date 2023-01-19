#include <iostream>
using namespace std;
/*
Runtime polymorphism

- This type of polymorphism is achieved by Function overriding.
- Late binding and dynamic polymorphism,

-The function call is resolved at runtime in dynamic polymorphism

* Function overriding
- Function overriding occurs when a derieved class has a defination for one of the member function of base class. The base functoin is said to be overridden

Virtual Function 
- A virtual function is a member function that is declared in the base class using the keyword "virtual" and is redefined (overridden) in the derieved class

*/

class Base{
    public:
    virtual void display(){
        cout << "Called Base class function" << endl;

    }

};

class Child : public Base{
    public:
    void display(){
        cout << "Called Child class function" << endl;
    }
};

int main(){

    //Creating a reference of class base
    Base *base;

    Child child;

    base = &child;

    base->Base::display(); 
    
}

/*
- A virtual function helps to ensure that we call the correct function via reference or pointer
- These are dynamic in nature
-They are defined by inserting "virtual" inside the base class 
- They are declared in the base class and overidden in the child class
- It is called during runtime
*/
#include <iostream>
#include<math.h>
using namespace std;

/*
Abstraction
means displaying only essential information and hiding the details

e.g calculator, sort() function, car acceleration

*/

// int main(){
//     int n = 10;
//     int power = 3;

//     int result = pow(n,power);
//     cout << "Power is : " << result << endl;
// }

/*
Access modifiers
We can use access modifiers to enforce restriction on class members.


*/
class implementAbstraction{
    private:

    int a=5, b=10;

    public:
    void setValue(int x, int y){
        a = x;
        b = y;
    }

    void display(){
        cout << " A : " << a << endl;
        cout << " B : " << b << endl;
    }

};

int main(){
    implementAbstraction obj;
    obj.display();

    obj.setValue(10,20);
    obj.display();

}


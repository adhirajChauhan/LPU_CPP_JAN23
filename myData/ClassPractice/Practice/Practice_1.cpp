//Write a program in CPP to check wheather a given number is prime or not

// Write a class "Student" that has three PRIVATE variables 
// "name" "age" "gender"
//The class should have a constructor taht initializes these variables
// Also it should have a PUBLIC function calles "displayInfo" that print out the student's name, age and gender


//Write a class "Rectangle" that has two PRIVATE variable
//length and width
//The class should have a constructor that initialize variables
//ALso make public methods [getArea] and [getPerimeter] that returns area and perimeter of rectangle respectively



#include <iostream>
using namespace std;

class Student{
    string name;
    int age;
    string gender;

    public:

    Student(string name, int age, string gender){
        this->name = name;
        this->age = age;
        this-> gender = gender;
    }

    void displayInfo(){
        cout<< name << endl;
        cout<< age << endl;
        cout<< gender << endl;

    }
};

int main(){

    Student s1("Raj",22, "Male");
    Student s2("Simran", 21,"Female");

    s1.displayInfo();
    s2.displayInfo();

}
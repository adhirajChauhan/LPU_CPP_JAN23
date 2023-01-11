#include<iostream>
using namespace std;

//Creating/Declare a function
void myFucn(int randomNumber, string randomString)
{
    //Defining the function
    cout << "Hello World " << randomNumber << " " << randomString << endl;
}

int main()
{
    //Call the function
    myFucn(3, "NewArgument");

}


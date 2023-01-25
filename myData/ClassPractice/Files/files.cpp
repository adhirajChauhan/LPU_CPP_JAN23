#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
    fstreambase
    ifsream -> derieved from fstreambase
    ofstream -> same
*/

int main(){
    // ofstream out;
    // string outString = "New line added to example file";
    // out.open("example.txt");
    // out << outString << endl;

    // ifstream in("example.txt");
    // string inString;
    // in >> inString;


    ofstream out("example.txt");
    string name;
    cout << "Enter your name : " ;
    cin >> name;

    out << "My name is : " << name << endl;

    out.close();

    //Reading
    ifstream in("example.txt");
    string content;

    //in >> content;
    getline(in, content);

    cout << content;

}
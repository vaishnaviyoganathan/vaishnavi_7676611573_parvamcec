#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
    ofstream file("Files Day8.txt");
    file<<"This is City Engineering College\n";
    file<<"i am modifying the data in the file";
    file.close();
}
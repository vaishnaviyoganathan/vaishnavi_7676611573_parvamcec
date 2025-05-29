#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
    ofstream file("Day8.txt");
    file<<"This is just the beginning??";
    file.close();
}
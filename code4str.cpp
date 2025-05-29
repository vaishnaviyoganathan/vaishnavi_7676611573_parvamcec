#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{ 
    ifstream file("Day8.txt");
    string str;
    while(getline(file,str))
        cout<<str<<endl;
    file.close();
}
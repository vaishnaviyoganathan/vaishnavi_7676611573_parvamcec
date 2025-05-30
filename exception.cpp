#include<iostream>
using namespace std;
int main()
{
    try{
        throw 15;
    }
    catch(int e)
    {
        cout<<"it is an integer"<<e<<endl;
    }
     try{
        throw 'A';
     }
     catch(char e)
    {
        cout<<"it is an character"<<e<<endl;
    }
    try{
        throw 1.5f;
    }
     catch(float e)
    {
        cout<<"it is an float"<<e<<endl;
    }
    try{
        throw 1.6;
    }
     catch(double e)
    {
        cout<<"it is an double"<<e<<endl;
    }
    cout<<"program continues........"<<endl;
    return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("evenodd.cpp");
    file<<"#include<iostream>\n";
    file<<"using namespace std;\n";
    file<<"int main()\n";
    file<<"{\n";
    file<<"int n;\n";
    file<<"cout<<\"enter a number\";\n";
    file<<"cin>>n;\n";
    file<<"if(n%2==0)\n";
    file<<"{\n";
    file<<"cout<<\"entered a number is even\";\n";
    file<<"}\n";
    file<<"else";
    file<<"{\n";
    file<<"cout<<\"entered a number is odd\";\n";
    file<<"}\n";
    file<<"return 0;\n";
    file<<"}\n";
    file.close();
}

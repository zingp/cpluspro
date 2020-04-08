#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int readFile(string file) 
{
    string line;
    ifstream in(file);
    if (in)
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "no such file: " << file << endl;
    }
    in.close();
    
    return 0;
}

int main()
{
    string file = "./readWriteFileCS.md";
    readFile(file);
    return 0;
}
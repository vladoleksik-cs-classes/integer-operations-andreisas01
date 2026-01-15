#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    int a = 0, b = 0;
    fin >> a >> b;
    fout << a + b + 42;
    
    return 0;
}

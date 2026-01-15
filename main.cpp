#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    int a, b;
    fin >> a >> b;
    fout << a + b;
    
    return 0;
}

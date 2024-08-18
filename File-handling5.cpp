#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("zoom5.txt");
    fout<<"hello india\n";
      fout<<"hello india\n";
        fout<<"hello india\ncf";

        fout.close();
        
        ifstream fin;
        fin.open("zoom5.txt");
        
        string line;


        while (getline(fin,line))
        {
            cout<<line<<endl;
        }
        
        fin.close();

}
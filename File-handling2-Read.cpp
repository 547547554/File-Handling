#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    //file ko open karo

    fin.open("zoom2.txt");
    //fir read karo

    char c;
    c = fin.get();  //<---get ka use yaha hum space ko bhi read karne ke liye kia hai without .get read nhi karega
    while (!fin.eof())
    {
        cout<<c;
        c = fin.get();
    }

    fin.close();
    

}
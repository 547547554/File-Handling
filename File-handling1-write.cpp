#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //File ko open karna 
    ofstream fout;
    fout.open("zoom1.txt"); //<--file nhi to bhi create kar dega or fir open kar dega 

   //yah kuch data ko write kar sakta hu
   fout<<"Hello India \n";

   fout.close(); //<--resource release kar paauon
}

//<--Go to zoom file and see the output 



#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char str;
    ofstream outf("FILE.txt"); 
    
    cout << "HELLO USER, THIS IS A NOTEPAD PROTOTYPE. WRITE WHAT YOU LIKE AND TERMINATE IT WITH CTRL+Z" << endl;
    
    do
    {
        cin.get(str); 
        outf<<str; 
    } while (!cin.eof());
    
    outf.close();
    
   
}

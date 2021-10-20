#include <fstream>  
#include <iostream> 
#include <string>
using namespace std;  

int main( )  
{     
	ifstream in("file1.txt");                       //open two ins and one out
	ifstream in2("file2.txt");
    while ((!in.eof()) && (!in2.eof())) 
    {                                       //continuing till the end of both
		string line,line2;
		getline(in,line);                   //get lines
		getline(in2,line2);
        if(line==line2)
        {                                   //checking if the strings are equal
           cout<<"The two files have the same content(word to word).";
        }  
        else
        {
           cout<<"The two files do not have the same content." ;
        }
    }
                            
    in.close(); 
	in2.close();                    //close files
          
    return 0;                        //open your out file 
}

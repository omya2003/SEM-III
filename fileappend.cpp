#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    char fname1[20], fname2[20];
    fstream file;
   // Input stream class to operate on files.
    cout<<"Enter source file : ";
    gets(fname1);
    ifstream ifile(fname1, ios::in);
   // Output stream class to operate on files.
    cout<<"Enter target file : ";
    gets(fname2);
    ofstream ofile(fname2 , ios::out | ios::app);
  
    // check if file exists
    if (!ifile.is_open()) {
  
        cout << "file not found";
    }
    else {
    //adding more lines to the file if needed
        ofile << ifile.rdbuf();
    }
    string word;
  
    // opening file
    file.open("file2.txt");
  
    // extracting words form the file
    while (file >> word) {
  
        // displaying content of destination file
        cout <<"\nFile appended successfully\n";
    }
  
    return 0;
}

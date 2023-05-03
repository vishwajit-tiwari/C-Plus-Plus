/**
 * @file usrInputToFile.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This is program for writing user input data into File.
 * @version 0.1
 * @date 05-05-2023
 * @copyright Copyright (c) 2023
*/

/**
 * @note Syntax: void open(const char * file_name, ios::open_mode);
 * fstream new_file;
 * new_file.open("new_file", ios::out | ios::app);
*/

#include<iostream>      // for input/out
#include<fstream>       // for file handling

using namespace std;

int main(int argc, char const * argv[])
{
    cout<<"Inside: "<<__FUNCTION__<<"() function"<<endl;

    fstream usr_file;

    usr_file.open("usr_file", ios::out);
    
    if(!usr_file) {
        cout<<"file creation fialed"<<endl;
    }
    else
    {
        char input[50];

        cout<<"new file created : sucess"<<endl;
        
        cout<<"Enter the data to file: ";
        cin.getline(input,sizeof(input));           // for multi line input
        // cin>>input;                              // for single line input
        
        usr_file<<input;                            // to write data into file
        
        cout<<"Data is written to file : success : please check the file"<<endl;
        
        usr_file.close();
    }

    return 0;
}

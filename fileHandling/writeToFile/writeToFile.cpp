/**
 * @file writeToFile.cpp
 * @author vishwajit-tiwari (https://linkedin.com/in/vishwajit-tiwari)
 * @brief This is program for writing data into File.
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

    fstream new_file;

    new_file.open("new_file", ios::out);
    
    if(!new_file) {
        cout<<"file creation fialed"<<endl;
    }
    else
    {
        cout<<"new file created"<<endl;
        new_file<<"Hello C++";              // to write data into file
        new_file.close();
    }

    return 0;
}

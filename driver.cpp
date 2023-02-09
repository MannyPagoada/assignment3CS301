//
// Created by manuelpagoada on 2/8/23.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nameOfInputFile,nameOfOutPutFile, nameOfTestRun;

    //prompt user for the name of the input file to use
    cout << "Please enter the Name of the Input File: ";
    cin >> nameOfInputFile;

    //prompt user for the name of the output file to use
    cout << "Please enter the Name of the Output File: ";
    cin >> nameOfOutPutFile;

    //prompt user for the name of the test run
    cout << "Please enter the Name of the Test Run: ";
    cin >> nameOfTestRun;
    


    //open the input file, reading line by line, and execute the instructions

    //declare variables
    ifstream inputFile;

    //Associate the file variable with the source file
    inputFile.open(nameOfInputFile);

    //display the result to the console and write the result to the output file



    /*  to check the file is open
     *
     *      if(inputFile.is_open()){}
     *
     *
     * */



    //close variables before ending program
    inputFile.close();

    return 0;
}
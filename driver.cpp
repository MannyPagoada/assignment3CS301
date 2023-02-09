//
// Created by manuelpagoada on 2/8/23.
//

#include <iostream>
#include <fstream>
#include <string>
#include "unsortedList.h"
using namespace std;


int main(){
    string nameOfInputFile,nameOfOutPutFile, nameOfTestRun, command;

    //prompt user for the name of the input file to use
    cout << "Please enter the Name of the Input File: ";
    cin >> nameOfInputFile;

    //prompt user for the name of the output file to use
    cout << "Please enter the Name of the Output File: ";
    cin >> nameOfOutPutFile;

    //prompt user for the name of the test run
    cout << "Please enter the Name of the Test Run: ";


    //open the input file, reading line by line, and execute the instructions

    //declare variables
    ifstream inputFile;
    //Associate the file variable with the source file
    inputFile.open(nameOfInputFile);

    //display the result to the console and write the result to the output file


    //check if input file is open
    if (!inputFile)
    {
        cout << "file not found" << endl;
        exit(2);
    }

    inputFile >> command;
    //numCommands=0;

    //when program is not in quite mode
    while (command != "Quit"){



    }
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
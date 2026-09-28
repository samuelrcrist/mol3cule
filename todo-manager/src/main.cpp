#include "header/entry.h"
#include <vector>
#include <string>

void main() {
    listObjcet entry;
    // initialize storage vector
    vector strList;
    // accept input
    int selection;
    string::string input;
    string::string boolIn; 
    
    std::cout<< "Welcome to the To-Do List! \n";
    std::cout<< "What would you like to do? \n";
    std::cout<< "1. New Entry \n";
    std::cin >> selection;

    if (selection == 1) {
        std::cout<< "Enter a description \n";
        cin >> input;
        strList.pushBack(new entry(input, 0);
    }

    for (i : strList) {
        stdd::cout<< strList[i] << std::endl;
    }
}
        


    
    



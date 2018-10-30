/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Michael Troisi
 *
 * Created on September 12, 2018, 1:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>



using namespace std;
string reverse(string input);

/*
 * 
 */
int main(int argc, char** argv) {
    string input;
    cout << "Enter the words you want backwards: ";
    getline(cin, input);
    
   cout << "Here are your words reversed: " << reverse(input);
    
    return 0;
    
}
/**
 * takes in a string parameter from user and print sentence backwards.
 * @param input user input from cin
 * @return input reversed input 
 */

string reverse(string input) {
 	if(input.find(" ") != string::npos) {
        return (input.substr(input.find_last_of(" ") + 1) + " " + reverse(input.substr(0, input.find_last_of(" "))));
    }
    else {
        return input;
    }
}


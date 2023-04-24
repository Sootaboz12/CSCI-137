/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 6 B

Lab 6 B: Tests the ascii code.
*/

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift)
{
    char a;
    
    if ((96 < int(c) && int(c) < 123)) {

       if(int(c) + rshift < 123) { 
          a = int(c) + rshift; 
          return char(a);
        }
        else if(int(c) + rshift > 122){ 
            a = (int(c)) + rshift; 
            a = a - 122; 
            return char(96 + a); 
        }
    }
    
    if ((64 < int(c) && int(c) < 91)) {

        if (int(c) + rshift < 91) {
            a = (int(c)) + rshift;
            return (char)a;
        }
        else if (int(c) + rshift > 90) {
            a = int(c) + rshift;
            a = a - 90;
            return char(64 + a);
        }
    }
    return c;
}

string encryptCaesar(string plaintext, int rshift)
{
    string encrypted = "";
    for (int i = 0; i < plaintext.length(); i++) {
         if(isalpha(plaintext[i])){
            encrypted = encrypted += shiftChar(plaintext[i], rshift);
        }
        else{
            encrypted = encrypted += plaintext[i];
        }
    }
    return encrypted;
}
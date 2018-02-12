//-------------------------------------------------------------------
// Implementation File:
#include "Encoder.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
//-------------------------------------------------------------------
//

// constructor
Encoder::Encoder(const string& encryption_key)
{
    // perform the check to see which key is passed in to make this program symetrical
    if (encryption_key == "doxrhvauspntbcmqlfgwijezky")
    {
        string decryption_key = "gmnawrseuvyqokbjpdilhftczx";
        //sets the local variables to the appropriate values needed in this program
        encrypt_key = encryption_key;
        decrypt_key = decryption_key;
        // the switchMode is set here so that the program can know which switch statement to use
        switchMode = "encrypt";
    }
    else
    {
        string decryption_key = "doxrhvauspntbcmqlfgwijezky";
        //this case is invoked if the object is being used as a decryptor
        encrypt_key = encryption_key;
        decrypt_key = decryption_key;
        switchMode = "decrypt";
    }
    
    
}



// Method that performs encoding of the entire string
// utilizes the encodeChar method to perform the heavy lifting for it
// this function will primarily center on using a for loop most likely
string Encoder::encode(const string& plainText)
{
    //initalize the message to the passed in string that the user desires that this program encrpts for them
    messageText = plainText;
    // next step is to parse apart this messageText string and encrpyt it char by char
    char result = encodeChar('d');
    cout << "this is what is stored in result: " << result << endl;
   return "yams";
}



// Does the heavylifting for this program
// encodes the input character based on the given key,
// and bypasses encoding non alphabetic chars
// and properly encodes capital letters
char Encoder::encodeChar(char c)
{
    char temp = c;  // going to pass in a d first
    // program should return a g when it is fully up and running
    // is working like i want it to so far,
    // it sucesfully passed in the ascii value for the passed in char, now to build the switch structure
    int index = temp;
    cout << "The thing stored in index variable is: " << index << endl;
    
    
    // might want to consider breaking this up into multiple different functions
    // like have one function that executes it's code if the letter is lower case or uppercase
    //
    bool isCapital = false; // use to figure our whether to execute lower or uppercase statements
    
    if (switchMode == "encrypt")
    {
        // program is in encryption mode so, need to use this switch statement to perfrom encryption
        if(isCapital == false)
        {
            switch (index)
            {
                    // this switch structure revolves around parsing through lower case letter input
                    // the case statements are the ascii representation of lowercase letters
                case 97:    // the letter 'a'
                {
                    temp = 's';
                    break;
                }
                case 98:    // the letter 'b'
                {
                    temp = 'o';
                    break;
                }
                case 99:    // the letter 'c'
                {
                    temp = 'k';
                    break;
                }
                case 100:   // the letter 'd'
                {
                    temp = 'g';
                    break;
                }
                case 101:   // the letter 'e'
                {
                    temp = 't';
                    break;
                }
                case 102:   // the letter 'f'
                {
                    temp = 'd';
                    break;
                }
                case 103:   // the letter 'g'
                {
                    temp = 'i';
                    break;
                }
                case 104:   // the letter 'h'
                {
                    temp = 'w';
                    break;
                }
                case 105:   // the letter 'i'
                {
                    temp = 'h';
                    break;
                }
                case 106:   // the letter 'j'
                {
                    temp = 'f';
                    break;
                }
                case 107:   // the letter 'k'
                {
                    temp = 'z';
                    break;
                }
                case 108:   // the letter 'l'
                {
                    temp = 'p';
                    break;
                }
                case 109:   // the letter 'm'
                {
                    temp = 'b';
                    break;
                }
                case 110:   // the letter 'n'
                {
                    temp = 'y';
                    break;
                }
                case 111:   // the letter 'o'
                {
                    temp = 'm';
                    break;
                }
                case 112:   // the letter 'p'
                {
                    temp = 'v';
                    break;
                }
                case 113:   // the letter 'q'
                {
                    temp = 'j';
                    break;
                }
                case 114:   // the letter 'r'
                {
                    temp = 'a';
                    break;
                }
                case 115:   // the letter 's'
                {
                    temp = 'u';
                    break;
                }
                case 116:   // the letter 't'
                {
                    temp = 'q';
                    break;
                }
                case 117:   // the letter 'u'
                {
                    temp = 'e';
                    break;
                }
                case 118:   // the letter 'v'
                {
                    temp = 'r';
                    break;
                }
                case 119:   // the letter 'w'
                {
                    temp = 'l';
                    break;
                }
                case 120:   // the letter 'x'
                {
                    temp = 'n';
                    break;
                }
                case 121:   // the letter 'y'
                {
                    temp = 'x';
                    break;
                }
                case 122:   // the letter 'z'
                {
                    temp = 'c';
                    break;
                }
            }

        }
        else
        {
            // switch through the upper case variants
            // implement the modifications
            switch (index)
            {
                    // the case statements are the ascii representation of lowercase letters
                case 97:    // the letter 'a'
                {
                    temp = 's';
                    break;
                }
                case 98:    // the letter 'b'
                {
                    temp = 'o';
                    break;
                }
                case 99:    // the letter 'c'
                {
                    temp = 'k';
                    break;
                }
                case 100:   // the letter 'd'
                {
                    temp = 'g';
                    break;
                }
                case 101:   // the letter 'e'
                {
                    temp = 't';
                    break;
                }
                case 102:   // the letter 'f'
                {
                    temp = 'd';
                    break;
                }
                case 103:   // the letter 'g'
                {
                    temp = 'i';
                    break;
                }
                case 104:   // the letter 'h'
                {
                    temp = 'w';
                    break;
                }
                case 105:   // the letter 'i'
                {
                    temp = 'h';
                    break;
                }
                case 106:   // the letter 'j'
                {
                    temp = 'f';
                    break;
                }
                case 107:   // the letter 'k'
                {
                    temp = 'z';
                    break;
                }
                case 108:   // the letter 'l'
                {
                    temp = 'p';
                    break;
                }
                case 109:   // the letter 'm'
                {
                    temp = 'b';
                    break;
                }
                case 110:   // the letter 'n'
                {
                    temp = 'y';
                    break;
                }
                case 111:   // the letter 'o'
                {
                    temp = 'm';
                    break;
                }
                case 112:   // the letter 'p'
                {
                    temp = 'v';
                    break;
                }
                case 113:   // the letter 'q'
                {
                    temp = 'j';
                    break;
                }
                case 114:   // the letter 'r'
                {
                    temp = 'a';
                    break;
                }
                case 115:   // the letter 's'
                {
                    temp = 'u';
                    break;
                }
                case 116:   // the letter 't'
                {
                    temp = 'q';
                    break;
                }
                case 117:   // the letter 'u'
                {
                    temp = 'e';
                    break;
                }
                case 118:   // the letter 'v'
                {
                    temp = 'r';
                    break;
                }
                case 119:   // the letter 'w'
                {
                    temp = 'l';
                    break;
                }
                case 120:   // the letter 'x'
                {
                    temp = 'n';
                    break;
                }
                case 121:   // the letter 'y'
                {
                    temp = 'x';
                    break;
                }
                case 122:   // the letter 'z'
                {
                    temp = 'c';
                    break;
                }
            }
        }
    }
    else
    {
       // program is in decryption mode, so need to use this switch statement to perform encryption
       // perform these switch operations in reverse
        
        
        
        
        
        
    }
    
    
    // return the correctly swapped character
    return temp;
}












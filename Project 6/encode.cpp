//
//  encode.cpp
//  Encryption Project
//
//  Created by Mark S Arias on 7/24/17.
//  Copyright © 2017 Mark  Arias. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


// prototypes
char encodeChar(char c);                            // take in a single character, and return the encrypted version
char decodeChar(char c);                             // takes in char, returns the decrypted version
string encode(const string& plainText);             // take in a string word, and return the encrypted version to the caller
string decode(const string& encryptedText);          // take in a encrypted string, and return to the user the original version
string padEncode(const string& encryptedText);      // pads the entered encrypted string and returns a string with added garbage letters
string removePadding(const string& paddedCodedMessage); // removes the padding added to the encrypted messages
string randomString(int len);                       // generate random padding characters, will probably implement this as a private method
                                                    // of the padEncode subclass

int main()
{
    cout << "Encryption Test Program:" << endl;
    cout << endl;
    
    // testing out encryption of a single character
    char result;
    // calling my encode char function with the char a to test out the expected result
    result = encodeChar('A');
    cout << "The result of encrypting the letter A is the letter: " << result << endl;
    
    // testing out encryption of a whole string
    const string plain_text = "Hello Class! ***&&&^ mike";         // the original message
    string codedMessage;                                        // store the result here
    codedMessage = encode(plain_text);
    cout << "The result of encrypting the whole string: " << plain_text << " is : " << codedMessage << endl;
    
    // testing out decryption of a whole string
    string decodedMessage;
    decodedMessage = decode(codedMessage);
    cout << "the result of decrypting the whole string:" << decodedMessage << endl;
    
    // uses the prevously created coded message to create a padded version now
    cout << "Testing the padded Encoder: " << endl;
    cout << endl;
    string paddedCodedMessage;
    paddedCodedMessage = padEncode(codedMessage);
    cout << "The result of padding the encrypted message is: " << paddedCodedMessage << endl;
    
    // testing decryption of a padded message
    string unpaddedMessage;
    unpaddedMessage = removePadding(paddedCodedMessage);
    cout << "The result of unpadding the encrypted message is: " << unpaddedMessage << endl;
    
    return 0;
}

   
         
         
// function defintions
char encodeChar(char c)
{
    char temp = c;              // store passed in letter value
    int index = temp;           // Assign the numeric value of the char(ascii value) to the index var
    // to use in the following switch
    
    switch (index)
    {
            // this switch used for encryption
            // this switch structure revolves around parsing through lower case letter input
            // the case statements are the ascii representation of lowercase letters, and uppercase letters
            // this improved version can account for lower and uppercase variations
        case 97:    // the letter 'a'
        case 65:    // the letter 'A'
        {
            if (index == 97)
            {
                temp = 's';
                break;
            }
            else
            {
                temp = 'S';
                break;
            }
        }
        case 98:    // the letter 'b'
        case 66:    // the letter 'B'
        {
            if (index == 98)
            {
                temp = 'o';
                break;
            }
            else
            {
                temp = 'O';
                break;
            }
        }
        case 99:    // the letter 'c'
        case 67:    // the letter 'C'
        {
            if (index == 99)
            {
                temp = 'k';
                break;
            }
            else
            {
                temp = 'K';
                break;
            }
        }
        case 100:   // the letter 'd'
        case 68:    // the letter 'D'
        {
            if (index == 100)
            {
                temp = 'g';
                break;
            }
            else
            {
                temp = 'G';
                break;
            }
        }
        case 101:   // the letter 'e'
        case 69:    // the letter 'E'
        {
            if (index == 101)
            {
                temp = 't';
                break;
            }
            else
            {
                temp = 'T';
                break;
            }
        }
        case 102:   // the letter 'f'
        case 70:    // the letter 'F'
        {
            if (index == 102)
            {
                temp = 'd';
                break;
            }
            else
            {
                temp = 'D';
                break;
            }
        }
        case 103:   // the letter 'g'
        case 71:    // the letter 'G'
        {
            if (index == 103)
            {
                temp = 'i';
                break;
            }
            else
            {
                temp = 'I';
                break;
            }
        }
        case 104:   // the letter 'h'
        case 72:    // the letter 'H'
        {
            if (index == 104)
            {
                temp = 'w';
                break;
            }
            else
            {
                temp = 'W';
                break;
            }
        }
        case 105:   // the letter 'i'
        case 73:    // the letter 'I'
        {
            if (index == 105)
            {
                temp = 'h';
                break;
            }
            else
            {
                temp = 'H';
                break;
            }
        }
        case 106:   // the letter 'j'
        case 74:    // the letter 'J'
        {
            if (index == 106)
            {
                temp = 'f';
                break;
            }
            else
            {
                temp = 'F';
                break;
            }
        }
        case 107:   // the letter 'k'
        case 75:    // the letter 'K'
        {
            if (index == 107)
            {
                temp = 'z';
                break;
            }
            else
            {
                temp = 'Z';
                break;
            }
        }
        case 108:   // the letter 'l'
        case 76:    // the letter 'L'
        {
            if (index == 108)
            {
                temp = 'p';
                break;
            }
            else
            {
                temp = 'P';
                break;
            }
        }
        case 109:   // the letter 'm'
        case 77:    // the letter 'M'
        {
            if (index == 109)
            {
                temp = 'b';
                break;
            }
            else
            {
                temp = 'B';
                break;
            }
        }
        case 110:   // the letter 'n'
        case 78:    // the letter 'N'
        {
            if (index == 110)
            {
                temp = 'y';
                break;
            }
            else
            {
                temp = 'Y';
                break;
            }
        }
        case 111:   // the letter 'o'
        case 79:    // the letter 'O'
        {
            if (index == 111)
            {
                temp = 'm';
                break;
            }
            else
            {
                temp = 'M';
                break;
            }
        }
        case 112:   // the letter 'p'
        case 80:    // the letter 'P'
        {
            if (index == 112)
            {
                temp = 'v';
                break;
            }
            else
            {
                temp = 'V';
                break;
            }
        }
        case 113:   // the letter 'q'
        case 81:    // the letter 'Q'
        {
            if (index == 113)
            {
                temp = 'j';
                break;
            }
            else
            {
                temp = 'J';
                break;
            }
        }
        case 114:   // the letter 'r'
        case 82:    // the letter 'R'
        {
            if (index == 114)
            {
                temp = 'a';
                break;
            }
            else
            {
                temp = 'A';
                break;
            }
        }
        case 115:   // the letter 's'
        case 83:    // the letter 'S'
        {
            if (index == 115)
            {
                temp = 'u';
                break;
            }
            else
            {
                temp = 'U';
                break;
            }
        }
        case 116:   // the letter 't'
        case 84:    // the letter 'T'
        {
            if (index == 116)
            {
                temp = 'q';
                break;
            }
            else
            {
                temp = 'Q';
                break;
            }
        }
        case 117:   // the letter 'u'
        case 85:    // the letter 'U'
        {
            if (index == 117)
            {
                temp = 'e';
                break;
            }
            else
            {
                temp = 'E';
                break;
            }
        }
        case 118:   // the letter 'v'
        case 86:    // the letter 'V'
        {
            if (index == 118)
            {
                temp = 'r';
                break;
            }
            else
            {
                temp = 'R';
                break;
            }
        }
        case 119:   // the letter 'w'
        case 87:    // the letter 'W'
        {
            if (index == 119)
            {
                temp = 'l';
                break;
            }
            else
            {
                temp = 'L';
                break;
            }
        }
        case 120:   // the letter 'x'
        case 88:    // the letter 'X'
        {
            if (index == 120)
            {
                temp = 'n';
                break;
            }
            else
            {
                temp = 'N';
                break;
            }
        }
        case 121:   // the letter 'y'
        case 89:    // the letter 'Y'
        {
            if (index == 121)
            {
                temp = 'x';
                break;
            }
            else
            {
                temp = 'X';
                break;
            }
        }
        case 122:   // the letter 'z'
        case 90:    // the letter 'Z'
        {
            if (index == 122)
            {
                temp = 'c';
                break;
            }
            else
            {
                temp = 'C';
                break;
            }
        }
    }
    // end of switch statement ///////////////////////////
    
    return temp;                // shoot back to caller the matching lowercase letter
    
}


// this function is used to decode an encrypted char, reverting it back to it's original letter
char decodeChar(char c)
{
    char temp = c;              // store passed in letter value
    int index = temp;           // Assign the numeric value of the char(ascii value) to the index var
    // to use in the following switch
    
    switch (index)
    {
            // this switch used for encryption
            // this switch structure revolves around parsing through lower case letter input
            // the case statements are the ascii representation of lowercase letters, and uppercase letters
            // this improved version can account for lower and uppercase variations
        case 97:    // the letter 'a'
        case 65:    // the letter 'A'
        {
            if (index == 97)
            {
                temp = 'r';
                break;
            }
            else
            {
                temp = 'R';
                break;
            }
        }
        case 98:    // the letter 'b'
        case 66:    // the letter 'B'
        {
            if (index == 98)
            {
                temp = 'm';
                break;
            }
            else
            {
                temp = 'M';
                break;
            }
        }
        case 99:    // the letter 'c'
        case 67:    // the letter 'C'
        {
            if (index == 99)
            {
                temp = 'z';
                break;
            }
            else
            {
                temp = 'Z';
                break;
            }
        }
        case 100:   // the letter 'd'
        case 68:    // the letter 'D'
        {
            if (index == 100)
            {
                temp = 'f';
                break;
            }
            else
            {
                temp = 'F';
                break;
            }
        }
        case 101:   // the letter 'e'
        case 69:    // the letter 'E'
        {
            if (index == 101)
            {
                temp = 'u';
                break;
            }
            else
            {
                temp = 'U';
                break;
            }
        }
        case 102:   // the letter 'f'
        case 70:    // the letter 'F'
        {
            if (index == 102)
            {
                temp = 'j';
                break;
            }
            else
            {
                temp = 'J';
                break;
            }
        }
        case 103:   // the letter 'g'
        case 71:    // the letter 'G'
        {
            if (index == 103)
            {
                temp = 'd';
                break;
            }
            else
            {
                temp = 'D';
                break;
            }
        }
        case 104:   // the letter 'h'
        case 72:    // the letter 'H'
        {
            if (index == 104)
            {
                temp = 'i';
                break;
            }
            else
            {
                temp = 'I';
                break;
            }
        }
        case 105:   // the letter 'i'
        case 73:    // the letter 'I'
        {
            if (index == 105)
            {
                temp = 'g';
                break;
            }
            else
            {
                temp = 'G';
                break;
            }
        }
        case 106:   // the letter 'j'
        case 74:    // the letter 'J'
        {
            if (index == 106)
            {
                temp = 'q';
                break;
            }
            else
            {
                temp = 'Q';
                break;
            }
        }
        case 107:   // the letter 'k'
        case 75:    // the letter 'K'
        {
            if (index == 107)
            {
                temp = 'c';
                break;
            }
            else
            {
                temp = 'C';
                break;
            }
        }
        case 108:   // the letter 'l'
        case 76:    // the letter 'L'
        {
            if (index == 108)
            {
                temp = 'w';
                break;
            }
            else
            {
                temp = 'W';
                break;
            }
        }
        case 109:   // the letter 'm'
        case 77:    // the letter 'M'
        {
            if (index == 109)
            {
                temp = 'o';
                break;
            }
            else
            {
                temp = 'O';
                break;
            }
        }
        case 110:   // the letter 'n'
        case 78:    // the letter 'N'
        {
            if (index == 110)
            {
                temp = 'x';
                break;
            }
            else
            {
                temp = 'X';
                break;
            }
        }
        case 111:   // the letter 'o'
        case 79:    // the letter 'O'
        {
            if (index == 111)
            {
                temp = 'b';
                break;
            }
            else
            {
                temp = 'B';
                break;
            }
        }
        case 112:   // the letter 'p'
        case 80:    // the letter 'P'
        {
            if (index == 112)
            {
                temp = 'l';
                break;
            }
            else
            {
                temp = 'L';
                break;
            }
        }
        case 113:   // the letter 'q'
        case 81:    // the letter 'Q'
        {
            if (index == 113)
            {
                temp = 't';
                break;
            }
            else
            {
                temp = 'T';
                break;
            }
        }
        case 114:   // the letter 'r'
        case 82:    // the letter 'R'
        {
            if (index == 114)
            {
                temp = 'v';
                break;
            }
            else
            {
                temp = 'V';
                break;
            }
        }
        case 115:   // the letter 's'
        case 83:    // the letter 'S'
        {
            if (index == 115)
            {
                temp = 'a';
                break;
            }
            else
            {
                temp = 'A';
                break;
            }
        }
        case 116:   // the letter 't'
        case 84:    // the letter 'T'
        {
            if (index == 116)
            {
                temp = 'e';
                break;
            }
            else
            {
                temp = 'E';
                break;
            }
        }
        case 117:   // the letter 'u'
        case 85:    // the letter 'U'
        {
            if (index == 117)
            {
                temp = 's';
                break;
            }
            else
            {
                temp = 'S';
                break;
            }
        }
        case 118:   // the letter 'v'
        case 86:    // the letter 'V'
        {
            if (index == 118)
            {
                temp = 'p';
                break;
            }
            else
            {
                temp = 'P';
                break;
            }
        }
        case 119:   // the letter 'w'
        case 87:    // the letter 'W'
        {
            if (index == 119)
            {
                temp = 'h';
                break;
            }
            else
            {
                temp = 'H';
                break;
            }
        }
        case 120:   // the letter 'x'
        case 88:    // the letter 'X'
        {
            if (index == 120)
            {
                temp = 'y';
                break;
            }
            else
            {
                temp = 'Y';
                break;
            }
        }
        case 121:   // the letter 'y'
        case 89:    // the letter 'Y'
        {
            if (index == 121)
            {
                temp = 'n';
                break;
            }
            else
            {
                temp = 'N';
                break;
            }
        }
        case 122:   // the letter 'z'
        case 90:    // the letter 'Z'
        {
            if (index == 122)
            {
                temp = 'k';
                break;
            }
            else
            {
                temp = 'K';
                break;
            }
        }
    }
    // end of switch statement ///////////////////////////
    
    return temp;                // shoot back to caller the matching lowercase letter
    
}




// take in a string word(plainText) and return to the user the encrypted version(encryptedText)
string encode(const string& plainText)
{
    string messageText;                                 // pass in and store the original string here
    messageText = plainText;
    string encryptedText = "";                          // store the encrypted text here, and return this back to the caller
    
    for (int i = 0; i < messageText.length(); i++)
    {
        encryptedText += encodeChar(messageText[i]);
        //cout << encryptedText[i];
    }
    
    //cout << encryptedText;
    return encryptedText;
}


// take in a string word(plainText) and return to the user the encrypted version(encryptedText)
// take in a encrypted string word(encryptedText) and return to the user the original string word(plainText)
string decode(const string& encryptedText)
{
    string messageText;                                 // pass in and store the original string here
    messageText = encryptedText;
    string plainText = "";                          // store the decrypted text here, and return this back to the caller
    
    for (int i = 0; i < messageText.length(); i++)
    {
        plainText += decodeChar(messageText[i]);
        //cout << encryptedText[i];
    }
    
    //cout << encryptedText;
    return plainText;
}


// take in a encrypted string, and return a string that is padded with three random characters
string padEncode(const string& encryptedText)
{
    string messageText;     // local variable
    messageText = encryptedText;    // store the passed in string here
    string paddedEncryptedText = "";    // store the padded string here.
    
    
    
    // implement algorithm to padd a string message
    // first implement the ability to pad a message with three of the same character, and then afterword implement the
    // rand character generator
    for (int i = 0; i < messageText.length(); i++)
    {
        //srand(time(0));
        
        string paddingString = randomString(3);     // generates dynamic random padding values
        
        paddedEncryptedText +=  messageText[i];
        paddedEncryptedText += paddingString;
        
        paddingString = "";
    }
    
    return paddedEncryptedText;
}


// take in encrypted padded message, and return an unpadded message
string removePadding(const string& paddedCodedMessage)
{
    string temp = paddedCodedMessage;   // pass in and store the padded message locally
    for (int i = 0; i < temp.length(); i++)
    {
        temp.erase(i+1, 3); // this erase function works by taking in an arg on the left specifying where to start removing
                            // and an arg on the right specifying how many char's to remove
    }
    
    return temp;
}




// function to generate a random string to padd the encrypted message with
string randomString(int len)
{
    //srand(time(0));   wierdly enough, eliminating this from my code, made my program more random. hmmmm
    string junkString = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string resultString;
    int position;
    while(resultString.size() != len)   // while the resulting string has not been fully populated to the specifid amount
    {
        position = ((rand() % (junkString.size() - 1)));    // return a random position value
        resultString += junkString.substr(position,1);  // add to result string a substring of junk string at the specific position
    }
    return resultString;
}


// made some really fantastic progress on this project today. pretty much all of it is now done.
// all that I have left to implement is creating decoders for the basic encoder, and a decoder for the padded encoder.
// so basically, i just have to now undo what i just did, and that will make the program nearly done
// also need to polish it a bit, and allow the program to acount for uppercase letters

// finally, I just need to take these functions that I have built, and encapsulate them in a class and superclass
// as requested in the project specs, and then im golden.




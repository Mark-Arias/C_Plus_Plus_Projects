// Interface File
//-------------------------------------------------------------------
// SAFEGUARDS AND INCLUDES
#ifndef Encoder_hpp
#define Encoder_hpp


//-------------------------------------------------------------------
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Encoder
{
public:
    
    /*
     * Create an encoder object with the given encoding key
     */
    //This is the defualt constructor
    // The initial argument is the passed by reference string that contains the the intial encryption key for this file
    Encoder(const string& encryption_key);
    
    /*
     * Get the encrypted text for the given plain text
     */
    string encode(const string& plainText);
    
protected:
    /*
     *  Encode the given char
     */
    char encodeChar(char c);
    
private:
    
    // your code here
    // variables local to the program stored here
    string encrypt_key;
    string decrypt_key;
    string messageText;
    string switchMode;
    char character;
    
};











//-------------------------------------------------------------------
#endif /* Encoder_hpp */

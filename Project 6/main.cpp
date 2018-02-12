
#include "Encoder.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // do not need this function right now. This is probably in the program for use with the padding function to generate random stuff to
    // pad the messages with
    //srand(time_t(0));
    
    const string PLAIN_TEXT = "C++ is fun!";
    
    // construct an encoder and the corresponding decoder
    Encoder encoder("doxrhvauspntbcmqlfgwijezky");
    //Encoder decoder("gmnawrseuvyqokbjpdilhftczx");
    string cipher_text = encoder.encode(PLAIN_TEXT);
    cout<<"Encoded: "<<cipher_text<<endl;
    //cout<<"Decoded: "<<decoder.encode(cipher_text)<<endl;
    
    // construct a padded encoder with 3 character padding and the corresponding decoder
   // PaddingEncoder padEncoder("doxrhvauspntbcmqlfgwijezky", 3);
    //PaddingEncoder padDecoder("gmnawrseuvyqokbjpdilhftczx", 3);
   // cipher_text = padEncoder.encode(PLAIN_TEXT);
   //cout<<"Pad Encoded: "<<cipher_text<<endl;
    //cout<<"Pad Decoded: "<<padDecoder.decode(cipher_text)<<endl;
    
    
    return 0;
}

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std; 
int main() {
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
    string key{"XZNLWEBGJKQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"}; 
    
    // enter the secret message
    cout << "Enter your secret message: ";
    string secretMessage {};
    getline(cin, secretMessage); 

    cout << "Encrypting message... " << endl;    
    string encryptedMessage{}; 
    for (char& c : secretMessage)
    {
        // if the character is not an empty space, and Key string contains this charatcter, 
        // create an encrpted message by using the same index and get the character from the key.
        size_t indexInAlphabet = alphabet.find(c); 
        if(indexInAlphabet != string::npos)
        {
            encryptedMessage+=key.at(indexInAlphabet);
        }
        else
        {
            encryptedMessage+=c;
        }
    }
    cout << "Encrypted message: " <<encryptedMessage << endl;
    
    cout << "Decrypting message... " << endl;
    cout << "Decrypted message: " <<secretMessage << endl;
    return 0; 
}
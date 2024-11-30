/*
 *  CIS-7 Final Project: Vigenere Cipher Decryption
 *  Saim Ahmed, Syed Moiz, Emma Wuysang
 */

#include <iostream>
using namespace std;

//write encryption function (refer to Ei = (Pi + Ki) mod 26
void vigEncrypt(string plaintext, string key){

    string encryptedText;
    int plainNum = 0;
    int keyNum   = 0;
    char vigChar;
    for (int i = 0 ; i < plaintext.size() ; i++) {

        plainNum = isupper(plaintext[i]) ? plaintext[i] - 'A' : plaintext[i] - 'a';                             //  i % key.size() is used to avoid out of bounds within the for-loop
        keyNum = isupper(key[i % key.size()]) ? key[i % key.size()] - 'A' : key[i % key.size()] - 'a';          //  ternary operators to determine whether ASCII -> int conversion
        vigChar = isupper(plaintext[i]) ? ((plainNum + keyNum) % 26) + 'A' : ((plainNum + keyNum) % 26) + 'a';  //  accommodates for upper or lower case.
        encryptedText.push_back(vigChar);
    }
    cout << encryptedText;

}
//write decryption function (refer to Di = (Ei - Ki + 26) mod 26


using namespace std;

int main() {

    //Possible limitations: How long can the plaintext be? Are spaces accounted for by ASCII value? No numbers?
    //request user input for PLAINTEXT and KEY
    //throw into vigEncrypt
    //display encrypted message
    //throw encrypted message into vigDecrypt
    
    return 0;
}

/*
 *  CIS-7 Final Project: Vigenere Cipher Decryption
 *  Saim Ahmed, Syed Moiz, Emma Wuysang
 */

#include <iostream>
using namespace std;

//write encryption function (refer to Ei = (Pi + Ki) mod 26
string vigEncrypt(string plaintext, string key){

    string encryptedText;
    int plainNum = 0;
    int keyNum   = 0;
    int keydex = 0;
    char encChar;

    for (int i = 0 ; i < plaintext.size() ; i++) {
        if (!isalpha(plaintext[i])) {                                                                                          //
            encryptedText.push_back(plaintext[i]);                                                                             //   conditional checks if current character is NOT an alphabetical character
            continue;                                                                                                          //   preserves it within the message if it isn't (accommodations for spaces and numbers).
        }
        plainNum = isupper(plaintext[i]) ? plaintext[i] - 'A' : plaintext[i] - 'a';                                            //  keydex % key.size() is used to avoid out of bounds within the for-loop
        keyNum = isupper(key[keydex % key.size()]) ? key[keydex % key.size()] - 'A' : key[keydex % key.size()] - 'a';          //  ternary operators to determine whether ASCII -> int conversion
        encChar = isupper(plaintext[i]) ? ((plainNum + keyNum) % 26) + 'A' : ((plainNum + keyNum) % 26) + 'a';                 //  accommodates for upper or lower case.
        encryptedText.push_back(encChar);
        keydex++;                                                                                                              //separate index for the key value ensures there are no mismatches for each char
    }
    return encryptedText;
}

//write decryption function (refer to Di = (Ei - Ki + 26) mod 26
string vigDecrypt(string ciphertext, string key){

    string decryptedText;
    int ciphernum = 0;
    int keyNum = 0;
    int keydex = 0;
    char decChar;

    for (int i = 0; i < ciphertext.size(); i++) {
        if (!isalpha(ciphertext[i])) {                                                                                          //
            decryptedText.push_back(ciphertext[i]);                                                                             //  conditional checks if current character is NOT an alphabetical character
            continue;                                                                                                           //  preserves it within the message if it isn't (accommodations for spaces and numbers).
        }
        ciphernum = isupper(ciphertext[i]) ? ciphertext[i] - 'A': ciphertext[i] - 'a';                                          //  keydex % key.size() is used to avoid out of bounds within the for-loop
        keyNum = isupper(key[keydex % key.size()]) ? key[keydex % key.size()] - 'A': key[keydex % key.size()] - 'a';            //  ternary operators to determine whether ASCII -> int conversion
        decChar = isupper(ciphertext[i]) ? ((ciphernum - keyNum + 26) % 26) + 'A': ((ciphernum - keyNum + 26) % 26) +'a';       //  accommodates for upper or lower case.
        decryptedText.push_back(decChar);
        keydex++;                                                                                                               //separate index for the key value ensures there are no mismatches for each char
    }
    return decryptedText;
}

void vigMenu() {
    cout << " __      ___                              _____ _ _                     \n"
            " \\ \\    / (_)                            / ____(_) |                    \n"
            "  \\ \\  / / _  __ _ _ __   ___ _ __ ___  | |     _| |__  _ __   ___ _ __ \n"
            "   \\ \\/ / | |/ _` | '_ \\ / _ \\ '__/ _ \\ | |    | | '_ \\| '_ \\ / _ \\ '__|\n"
            "    \\  /  | | (_| | | | |  __/ | |  __/ | |____| | | | | |_) |  __/ |   \n"
            "     \\/   |_|\\__, |_| |_|\\___|_|  \\___|  \\_____|_|_| |_| .__/ \\___|_|   \n"
            "              __/ |                                    | |              \n"
            "             |___/                                     |_|              " << endl;
}


int main() {
    string plaintext, key;

    do {
        vigMenu();
        cout << "Enter PLAINTEXT or PRESS ENTER TO QUIT PROGRAM: ";
        getline(cin, plaintext);
        if (plaintext.empty()) {
            break;
        }
        cout << "Enter ENCRYPTION KEYWORD: ";
        getline(cin, key);

        string encryptedMessage = vigEncrypt(plaintext, key);
        string decryptedMessage = vigDecrypt(encryptedMessage, key);
        cout << "The given plaintext: " << plaintext << "encrypted with keyword: " << key << " yields: " << encryptedMessage << endl;
        cout << "The decrypted ciphertext using keyword: " << key << " yields: " << decryptedMessage << endl;
    } while (!plaintext.empty());                                                                                                   //performs actions AS LONG as plaintext isn't empty.

    return 0;
}

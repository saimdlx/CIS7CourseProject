# CIS7CourseProject: Vigenere Cipher Encryption/Decryption Algorithm
### Project Pseudocode & Documentation 📝: Emma Wuysang, Syed Moiz
### Algorithm Development & Implementation 🖥:  Saim Ahmed, Syed Moiz
### Source Control & Management 🚀: Saim Ahmed, Emma Wuysang

# Program Information ℹ️: 
![vignereexample](https://github.com/user-attachments/assets/bcdb44b1-af4b-4d53-8b8f-f952157dfe3f)
- Simple and flexible implementation of the **Vigenere Cipher** encryption using *C++* and *cryptography methods*.
- Program is functional through IDE for C++ files and executables.

# Under The Hood 🏎️: 

- Program uses modular arithmetic cases to encrypt and decrypt plaintexts given cipherkeys.
- Encryption is done via formula:
```
Ei = (Pi + Ki) mod 26
```
- Decryption is done via formula:
```
Di = (Ei - Ki + 26) mod 26
```
- Formulas implemented through code (seen in lines 10-52) are used to successfully encrypt string variables, convert their ASCII values to integer values, and perform encryption and decryption shuffling.

# Limitations and special cases 🪲:
- Initial limitations prohibited use of spaces and non-alphabetical values to be used within the program. This program was solved with the ```isAlpha()``` function, which preserved non-alphabetical values in both the encrypted and decrypted returns.
- Existing anomalies could include the length of the plaintext, as well as the keyword. In this current iteration, the cipher key is limited to **ONE WORD**.

# Program Documentation & Additional Information 🏭: 
[REDIRECT TO PROJECT DOCUMENTATION.](https://github.com/saimdlx/CIS7CourseProject/blob/50bfe0782bc9fbb7f64c85291c323016f424deb8/CIS7Course%20Project%20DOCUMENTATION.docx.pdf)

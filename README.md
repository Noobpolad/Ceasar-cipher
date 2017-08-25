The Caesar Cipher technique is one of the earliest and simplest method of encryption.
The method is named after Julius Caesar who used it to communicate with his officials.
It’s simply a type of substitution cipher, i.e., each letter of a given text is replaced by a letter some fixed number of positions down the alphabet. For example with a shift of 1, A would be replaced by B, B would become C, and so on.
To cipher a given text we need an integer value, known as shift which indicates the number of position each letter of the text has been moved down.
Examples :
Text : ABCDEFGHIJKLMNOPQRSTUVWXYZ
Shift: 23
Cipher: XYZABCDEFGHIJKLMNOPQRSTUVW
Text : ATTACK AT ONCE
Shift: 4
Cipher: EXXEGO EX SRGI
Write a function "ceasarEncrypt" to receive a piece of plain text and an integer shift, and return the encrypted text, and a function "ceasarDecrypt" to receive a piece of encrypted text and an integer shift, and return the original text.
More on Caesar Cipher: https://en.wikipedia.org/wiki/Caesar_cipher 

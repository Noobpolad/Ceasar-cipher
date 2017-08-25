#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void ceasarDecrypt();
void ceasarEncrypt();

int main()
{

int commad;

do{

    cout << "Put the command:" << endl;
    cout << "1)For encrypting." << endl;
    cout << "2)For decrypting." << endl << endl;

    cout << "Your command:";
    cin >> commad;
    cout << endl;

    if(commad == 1){

        ceasarEncrypt();

    }
    else if(commad == 2){

        ceasarDecrypt();

    }
    else{

        cout << "Wrong command." << endl << endl;

    }

}while(commad > 2 || commad < 1);

    return 0;
}

void ceasarEncrypt(){

string userInput;

do{

    int shift;
    char space(32);

    cin.sync();
    cout << "Put the text(No capital letters):";
    getline(cin,userInput);

    if(userInput != "ceasar is dead"){
        cout << endl << "Put the shift:";
        cin >> shift;
        cout << endl << endl;
    }

    char cipher[userInput.length()];

    for(int a = 0;a < userInput.length();a++){

        for(int b = 97;b < 123;b++){

            char ch(b);
            char textLetter = userInput.at(a);

            if(textLetter == ch && b + shift < 123 && textLetter != space){

                char chipheredLetter(b + shift);
                cipher[a] = chipheredLetter;

            }
            else if(textLetter == ch && b + shift >= 123 && textLetter != space){

                cipher[a] = ch;

            }
            else if(textLetter == space){

                cipher[a] = space;

            }

        }

    }

    if(userInput != "ceasar is dead"){

        cout << "Your encrypted result:";

        for(int c = 0;c < userInput.length();c++){

            cout << cipher[c];

        }
    }

    cout << endl << endl;

}while(userInput != "ceasar is dead");

}

void ceasarDecrypt(){

string userInput;

do{

    int shift;
    char space(32);

    cin.sync();
    cout << "Put the cipher(No capital letters):";
    getline(cin,userInput);

    if(userInput != "ceasar is dead"){
        cout << endl << "Put the shift:";
        cin >> shift;
        cout << endl << endl;
    }

    char decrypt[userInput.length()];

    for(int a = 0;a < userInput.length();a++){

        for(int b = 97;b < 123;b++){

            char ch(b);
            char userCipher = userInput.at(a);

            if(userCipher == ch && b - shift >= 97 && userCipher != space){

                char decryptLetter(b - shift);
                decrypt[a] = decryptLetter;

            }
            else if(userCipher == ch && b - shift < 97 && userCipher != space){

                decrypt[a] = ch;

            }
            else if(userCipher == space){

                decrypt[a] = space;

            }

        }

    }

    if(userInput != "ceasar is dead"){

        cout << "Your decrypted result:";

        for(int c = 0;c < userInput.length();c++){

            cout << decrypt[c];

        }
    }

    cout << endl << endl;

}while(userInput != "ceasar is dead");

}

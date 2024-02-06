#include<iostream>
#include<string>
using namespace std;

string ReadText()
{ string Text; 
   cout << "Please enter Text?\n";
   getline(cin, Text); 
     
   
   return Text;

}

string EncryptText(string text, short EncryptionKey) {

	for (int i = 0; i <= text.length(); i++) {

		text[i] = char((int)text[i] + EncryptionKey);
	}
	return text;
}

string DecryptText(string text, short EncryptionKey) {

	for (int i = 0; i <= text.length(); i++) {

		text[i] = char((int)text[i] - EncryptionKey);
	}
	return text;
}

int main()
{
	//write a program to read a text and encrypt it, decrypt it 

	short EncryptionKey = 12;

	string TextAfterEncryption, TextAfterDecryption;

	string text = ReadText();

	TextAfterEncryption = EncryptText(text, EncryptionKey);

	TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << "\nText Before Encryption : ";
	cout << text << endl;

	cout << "\nText after Encryption : ";
    cout << TextAfterEncryption << endl;


	cout << "\nText after Decryption : ";
	cout << TextAfterDecryption << endl;
}
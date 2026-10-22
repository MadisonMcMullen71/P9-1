#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int countVowel(string str);
int countCharacter(string str);

int main(void) {
	string str = "Hello, world!";
	getline(cin, str);
	cout << "vowels: " << countVowel(str) << endl;
	cout << "character count" << countCharacter(str) << endl;
}

int countCharacter(string str) {
	int character_count = 0;
	for (int c = 0; c < str.length(); c++) {
		character_count++;
	};
	return character_count;
};



int countVowel(string str) {
	int vowel = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'e' || str[i] == 'E' || str[i] == 'u' || str[i] == 'U') {
			vowel++;
		};
	};
	return vowel;

}
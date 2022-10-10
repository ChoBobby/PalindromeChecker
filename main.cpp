#include<iostream>
#include<string>

using namespace std;

int main() {
	char start = 'R';

	while (start == 'R') {
		cout << endl;
		cout << "------------------------" << endl;
		cout << "   Palindrome Checker   |" << endl;
		cout << "------------------------" << endl;

		string user;
		cout << "Enter your word (No spaces): ";
		cin >> user;

		string word;
		for (int i = 0; i < user.size(); ++i) {
			word += toupper(user.at(i));
		}

		int j = 0;
		int l;
		bool palindrome = false;

		while (j < word.size()) {
			j = word.at(j);
			l = word.at(word.size() - 1);
			if (j == l) {
				palindrome = true;
			}
			++j;
			--l;
		}

		cout << endl;
		cout << "------------------------" << endl;
		cout << "         Results        |" << endl;
		cout << "------------------------" << endl;

		if (palindrome) {
			cout << user << " IS a palindrome." << endl << endl;
		}
		else {
			cout << user << " is NOT a palindrome." << endl << endl;
		}

		cout << "Enter 'R' to check another word." << endl;
		cin >> start;
		start = toupper(start);
	}

	return 0;
}
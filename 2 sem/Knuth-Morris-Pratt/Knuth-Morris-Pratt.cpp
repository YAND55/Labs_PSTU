#include <iostream>
#include <string>

using namespace std;





struct Shift {
	char letter;
	int shift = 0;
};

string createPrefix(string s, int len) {
	string prefix = "";
	for (int i = 0; i < len; i++) {
		prefix += s[i];
	}
	return prefix;
}
string createSuffix(string s, int len, int start) {
	string suffix = "";

	for (int st = start, i = 0; i < len; st--, i++) {
		suffix = s[st] + suffix;
	}
	return suffix;
}


int KnutSearch(string str, string substr) {
	int size = substr.size();
	string prefix;
	string suffix;

	Shift* tsh = new Shift[size];
	int idx;

	for (int i = 0; i < size; i++) {
		idx = 0;
		for (int j = 1; j < i+1; j++) {
			prefix = createPrefix(substr, j);
			suffix = createSuffix(substr, j, i);

			if (prefix == suffix) {
				idx = j;
				break;
			}
		}
		tsh[i].shift  = idx;
		tsh[i].letter = substr[i];
	}
	

	bool f;
	for (int i = 0; i < size; i++) {
		f = 1;
		

		for (int j = 0; j < size; j++) {
			

			if (substr[j] != str[j+idx]) {
				f = 0;
				if (j > 0) idx += abs(tsh[j-1].shift - j);
				else idx++;
				
				break;
			}
		}
		if (f) {
			delete[] tsh;
			return idx;
		}
	}

	delete[] tsh;
	return -1;
}



int main() {
	setlocale(LC_ALL, "ru");
	
	string str = "abcabceabcabcd";
	string substr = "abcabcd";

	cout << " " << KnutSearch(str, substr);
}
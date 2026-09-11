#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int words = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            words++;
        }
    }

    cout << "Total words: " << words;

    return 0;
}
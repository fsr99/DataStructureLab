#include <iostream>
using namespace std;


string encode(string s, int j) {
    for (int i = j; i < s.length(); i++) {
        if (s[i] != ' ') {
            s[i]+=3;
        }
    }
    return s;
}

// Function to decode an encoded string
string decode(string encd, int j) {
    for (int i = j; i < encd.length(); i++) {
        if (encd[i] != ' ') {
            encd[i]+=3;
        }
    }
    return encd;
}

int main() {
    string s;
    int j;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Enter an integer j: ";
    cin >> j;

    string encd = encode(s, j);
    cout << "Encoded String: " << encd << endl;

    string decd = decode(encd, j);
    cout << "Decoded String: " << decd << endl;

    return 0;
}

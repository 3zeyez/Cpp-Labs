// password generator
// solution proposed by ABBASSI Ahmed Aziz

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    alphabet += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    alphabet += "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    string pwd = "";
    int size = alphabet.length();
    srand(time(0));
    for (int i = 0; i <= 16; i++) {
        int x = rand() % size;
        pwd += alphabet[x];
    }
    cout << "Password : " << pwd;
    return 0;
}

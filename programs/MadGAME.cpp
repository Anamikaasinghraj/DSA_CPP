// building a MAD libs game
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    string color, pluralNoun, celebrity;
    cout <<"Enter a color: ";
    getline (cin, color);
    cout <<"Enter a pluralNoun: ";
    getline (cin, pluralNoun);
    cout <<"Enter a celebrity: ";
    getline (cin, celebrity);
    cout <<"Roses are" << color << endl;
    cout << pluralNoun << "are" << color << endl;
    cout << "I love" << celebrity <<endl;
    return 0;
}
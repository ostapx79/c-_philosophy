//: C02:GetWoerds.cpp
// Разбиение файла по словам, разделенным пропусками
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    using namespace std;
    vector<string> words;
    ifstream in("GetWords.cpp");
    string word;
    while (in >> word) {
        words.push_back(word);
    }
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }
    return 0;
}

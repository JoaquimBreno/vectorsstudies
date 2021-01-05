#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void exibirVector(vector<string> wrd){
    for(int i=0; i < wrd.size(); ++i)
        cout << wrd[i];
}

string criarDWord(string word) {
    string dword = "";
    vector<string> wrd;
    for(int i = 0; i < word.length(); ++i)
        wrd.push_back(word.substr(i, 1));
    reverse(word.begin(), word.end());
    for(int i = 0; i < word.size(); ++i)
        dword += word[i]; 
    return dword;
}
int main(){
    string aword;
    cout << "Digite uma palavrinha: ";
    cin >> aword;
    string daword = criarDWord(aword);
    if (daword == aword)
        cout << aword << " é um palíndromo."
            << endl;
    else
        cout << aword << " não é um palíndromo."
            << endl;
    return 0;
}
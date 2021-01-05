#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

void exibirVector(vector<string> wrd){
    for(int i=0; i < wrd.size(); ++i)
        cout << wrd[i];
}

string Maiuscula(string convertStr)
{
    std::transform(convertStr.begin(), convertStr.end(), convertStr.begin(), ::toupper);

    return convertStr;
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
    string finalword;
    cout << "Digite uma palavrinha: ";
    getline( cin, aword);
    string daword = criarDWord(aword);
    finalword = aword;
    aword = Maiuscula(aword);
    daword = Maiuscula(daword);
    if (daword == aword)
        cout << finalword << " é um palíndromo."
            << endl;
    else
        cout << finalword << " não é um palíndromo."
            << endl;
    return 0;
}
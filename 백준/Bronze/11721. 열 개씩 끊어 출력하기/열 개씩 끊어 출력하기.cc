#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    getline(cin, word);

    for (int i = 0; i < word.length(); i += 10)
    {
        cout << word.substr(i, 10) << '\n';
    }

    return 0;
}
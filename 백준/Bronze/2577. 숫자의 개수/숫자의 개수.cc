#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int result = a * b * c;
    string str_result = to_string(result);

    int count[10] = { 0 };

    for (char digit : str_result) 
    {
        count[digit - '0']++;
    }

    for (int i = 0; i < 10; i++) 
    {
        cout << count[i] << endl;
    }

    return 0;
}

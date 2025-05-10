#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Char:";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        /* code */
        cout << "Lower Case\n";
    }else
    {
        /* code */
        cout << "Upper Case\n";
    }
    
    
    return 0;
}

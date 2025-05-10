#include <iostream>
using namespace std;
int main()
{
    //Square pattern 
    // int n = 4;

    
    // for (int i = 1; i <= n; i++){// Outer Loop
    //     for (int j = 1; j <= n; j++){// Inner Loop

    //         cout  << "* ";
    //     }
    //     cout << endl;
    // }

    // Chareacter pattern
    // int n = 4;
    // for (int  i = 0; i < n; i++)
    // {// Outer loop
    // char ch = 'A';
    //     /* code */
    //     for (int  j = 0; j < n; j++)
    //     {
    //         /* code */
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }


    int n = 3;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cout<< num<<" ";
            num++;
        }
        cout << endl;
        
    }
    
 
    return 0;
}

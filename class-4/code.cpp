#include <iostream>
using namespace std;
int main()
{
    // patterns

    // Square Pattern
    // int n = 6;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;

    // }

    // Square Pattern
    // int n = 3;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // cout << "after pattern : "<< num << endl;// 10

    // int n = 3;
    // for (int i = 0; i <= n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; i <= n; j++)
    //     {
    //         cout << ch << " ";
    //         // ch++;
    //         ch = ch + 1;
    //     }
    //     cout << endl;

    // }

    //    int n = 4;
    //    for (int i = 0; i < n; i++)
    //    {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout<< "*";
    //     }
    //     cout << endl;
    //    }

    //    int n = 3;
    //    for (int i = 0; i < n; i++)
    //    {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout <<" "<< (i+1);
    //     }
    //     cout << endl;
    //    }

    // int  n = 4;
    // for (int  i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //         cout << j <<" ";
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j  = i+1; j > 0; j--)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;

    // }

    //    int n = 4;
    //    int num = 1;
    //    for (int i = 0; i < n; i++)
    //    {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     //nums
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << (i+1);
    //     }
    //     cout << endl;
    //    }

    // pyramid pattern

    /*int n = 8;
    for (int i = 0; i < n; i++)
    {
     // Spaces
     for (int j = 0; j < n-i-1; j++)
     {
         cout <<" ";
     }
     for (int j = 1; j <= i+1; j++)
     {
         cout << j;
     }
     for (int j = i; j > 0; j--)
     {
         cout << j;
     }

     cout << endl;
    }*/

    // Hollow Diamond Pattern
    int n = 4;

    // top
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            // Spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // Bottom

    for (int i = 0; i < n - 1; i++)
    {
        // space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {
            // space
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

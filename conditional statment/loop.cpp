#include <iostream>
using namespace std;
int main()
{
    // int n = 50;
    // int count = 1; 
    // while (count <= n)
    // {
    //     /* code */
    //     cout << count << " \n";
    //     count++;

    // }
    

    // int n = 50;
    // int i = 1;
    // while (i <= n)
    // {
    //     /* code */
    //     cout << i << " ";
    //     i++;
    // }
    // cout << endl;



    // for loop
    // int n = 3;
    // int j = 3;
    int n, j, s,t, sum = 0;
    cout << "Enter to number : ";
    cin >> n >> j>> s >> t;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << i<< " ";
    }
    cout << endl;

    for (int i = 1; i <= j; i++)
    {
        /* code */
        cout << i << " ";
    }
    cout << endl;

    // int s = 10;
    // int sum = 0;

    for (int  i = 1; i <= s; i++)
    {
        /* code */
        sum += i;
        if (i == 5)
        {
            /* code */
            break ;
        }
        
    }
    cout << "Sum = " << sum << endl;

    while (t <= 1)
    {
        /* code */
        cout<< t <<" ";
        sum += t;
    }
    cout << "Sum = "<< sum << endl;
    
    
    return 0;
}

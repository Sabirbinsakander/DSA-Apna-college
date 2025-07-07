#include <iostream>
using namespace std;
int main()
{
    // int n = -5;
    // if (n >= 0)
    // {
    //     /* code */
    //     cout << "n is positive\n";
    // }else{
    //     cout << "n is negative\n";
    // }

    // int age;
    // cout << "Enter age : ";
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "You can Vote\n";
    // }else
    // {
    //     cout << "You can't vote \n";
    // }

    // Even Or Odd
    //  int n;
    //  cout << "enter number : ";
    //  cin >> n;
    //  if ( n % 2 == 0)
    //  {
    //     cout << "Even\n";
    //  }else
    //  {
    //     cout << "Odd\n";
    //  }

    // conditional statement
    //  int marks;
    //  cout << "Enter marks : ";
    //  cin >> marks;
    //  if (marks >= 90){
    //     cout << "A\n";
    //  }

    //  else if(marks >= 80 && marks< 90){
    //     cout << "B\n";
    //  }
    //  else{
    //     cout << "C\n";
    //  }
    // find character lower case or uppercase

    // char ch;
    // cout << "Enter char : ";
    // cin >> ch;

    // if (ch >= 'a'&& ch <= 'z')
    // {
    //     cout << "Lower case\n";
    // }else
    // {
    //     cout << "Upper case\n";
    // }

    // int n;
    // cout << "Enter a number : ";
    // cin >> n;
    // cout << (n >= 0 ?"positive" : "negative")<< endl;

    // int count;
    // cout << "Enter a Number : ";
    // cin >> count;
    // while(count <= 10){
    //     cout << count << " ";
    //     count ++;

    // }
    // cout << endl;

    // While Loop
    // int n = 50;  statement of initialization
    // int count = 1;
    // while (count <= n) condition
    // {
    //     cout << count << " ";
    //     count++; updation
    // }

    // cout << endl;

    // for loop
    //  int n = 50;
    //  int sum = 0;
    //  for (int i = 1; i <= n; i++)
    //  {
    //     sum += i;
    //  }
    //  cout << "Sum = " << sum << endl;

    // int n = 50;
    // int sum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    //     if (i == 5)
    //     {
    //         break;
    //     }

    // }
    // cout << "Sum is = " << sum << endl;

    // int j = 50;
    // for (int i = 1; i <= j; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << i << " ";
    //     }

    // }
    // cout << endl;

    // int odd = 50;
    //  int oddSum = 0;
    //  for (int i = 1; i <= odd; i++){
    //      if(i%2 != 0){
    //          oddSum += i;
    //      }
    //  }
    //  cout << "odd Sum = " << oddSum << endl;

    // int n = 10;
    // int i = 1;
    // do {
    //     cout << i << " ";
    //     i++;
    // }while (i <= n);
    // {
    //     cout << endl;
    // }

    // Question
    // int n = 9;
    // bool isPrime = true;

    // for (int i = 2; i <= n - 1; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == true)
    // {
    //         cout << "prime no\n";
    // }else{
    //         cout << "Non Prime no\n";
    //     }

    // Nested Loop
    // loop inside loop
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int x = 10;

        for (int j = 1; j <= x; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

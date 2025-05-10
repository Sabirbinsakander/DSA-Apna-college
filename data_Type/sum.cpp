#include <iostream>
using namespace std;
int main()
{
    // Arithmetic operator
    int a = 5, b = 4;
    cout<<"sum = " << a+b <<endl;
    cout<<"difference = " << a-b <<endl;
    cout<<"Product = " << a*b <<endl;
    cout<<"division = " << a/b <<endl;
    cout<<"Modulus = " << a%b <<endl;

    // Typecasting data type 
    cout << "Typecasting Data Type : "<< (5/ (double)2)<< endl;


    int ans = (5/(double)2);
    cout << ans << endl;


    // Relational operator

    cout << "Relational Operator "<< (3 < 5) << endl;

    cout << "Relational Operator "<< (6 > 7) << endl;
    cout << "Relational Operator "<< (6 <= 6 ) << endl;
    cout << "Relational Operator "<< (6 == 6 ) << endl;
    cout << "Relational Operator "<< (6 != 6 ) << endl;

    // Logical Operator 


    cout << !(3 > 1) << endl;
    cout << (3 > 4) << endl;
    cout << (3 < 4) << endl;

    cout << ((3 > 1) && (3 > 2)) << endl;


    int A, B;
    cout << "Enter a : ";
    cin >> A;
    cout << "Enter b : ";
    cin >> B;
    int sum =(A+B);
    cout<< "Sum = "<< sum << endl;
    // Unary Operator

    int s = 10;
    int j = s++;
    cout <<"j = "<< j<<endl;
    cout << "s = "<< s<< endl;
    

    return 0;
}

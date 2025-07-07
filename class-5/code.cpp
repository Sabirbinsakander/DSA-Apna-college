// functions


#include <iostream>
using namespace std;

// void printHello(){
//     cout<< "Hello\n";
// }
// int main()
// {   
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     printHello();
    
//     return 0;
// }

// Sum of 2 Number

//int sum(int a, int b)
//     {
//         int s = a + b;
//         return s;
//     }

// int main() {
//     cout << sum(10, 5) << endl;
// }


// int minOfTwo(int a, int b){
//     if (a < b)      
//     {
//         return a;
//     }else
//     {
//         return b;
//     }
// }

// void sumN (int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main(){
    // cout << "min = " << minOfTwo(5, 3) <<endl;
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
// }

// calculate factorial N

// int factorialN(int n){
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
//     cout << factorialN(4) << endl;
//     cout << factorialN(5) << endl;
//     return 0;
// }



// function in memory


// void fun (){
//     int x = 25;
//     cout << "x = " << x << endl;
// }
// int main() {

//     return 0;
// }

// Pass by Value

// void changeX(int x){
//     x = 2*x;
//     cout << "x = " << x << endl;
// }

// int main() {
//     int x = 5;
//     changeX(x);
//     cout << "x = " << x <<endl;
//     return 0;
// }


// Qs: Calculate sum of digits of a number

// int sumOfDigits(int num) {
//     int digSum = 0;
//     while (num > 0)
//     {
//         int lastDig = num % 10;
//         num /= 10;


//         digSum += lastDig;
//     }
//     return digSum;
    
// }
// int main () {
//     cout << "sum = " << sumOfDigits(2356) << endl;
//     return 0;
// }


// Qs Calculate nCr binomial coefficient for n & r

int factorial (int n){
    int fact = 1;
    for (int i = 0; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
    
}

int nCr (int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr= factorial(n-r);

    return fact_n/ (fact_r * fact_nmr);
}
int main (){
    int n = 8, r = 2;
    cout << nCr(n, r) << endl;
    return 0;
}
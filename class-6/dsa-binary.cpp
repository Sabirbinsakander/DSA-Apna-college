#include <iostream>
using namespace std;
// Binary Number System

 // Decimal to Binary

// int decToBinary (int decNum){
//     int ans = 0, pow = 1;
//     while (decNum > 0)
//     {
//         /* code */
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;

//     }
//     return ans;

    
// }

// int main()
// {
//     int decNum = 50;
//     cout << decToBinary(decNum) << endl;
//     return 0;
// }

// Binary to Decimal
int binToDecimal(int binNum){
    int ans = 0, pow = 1; 

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;

    }
    return ans;
}


    int main(){
        cout << binToDecimal(1010) << endl;
        return 0;
    }
    


    // Qs : Convert -8 to Binary & Reverse

    



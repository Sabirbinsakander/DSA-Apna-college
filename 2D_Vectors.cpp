#include <iostream>
#include <vector>

using namespace std;
int diagonalSum(int mat[][3], int n){
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += mat[i][i];
            if (i != n-i-1)
            {
                sum += mat[i][n-i-1];

            }
            
        }
        return sum;
    }
    
int main()
{
    vector<vector<int>>mat= {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    cout << mat[0][0]<<endl;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout<<mat [i][j]<<endl;
        }
        
    }
    return 0;
}

#include <iostream>
using namespace std;



int main()

{

#ifndef ONLINE_JUDDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // for imput the matrix.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for output the matrix.
    cout << "Matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // // for searching the element in the matrix.
    // int k = 20;
    // bool flag = true;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (arr[i][j] == k)
    //         {
    //             flag = true;
    //             cout << "found At : " << i << " " << j << endl;
    //         }
    //     }
    // }
    // if (flag)
    // {
    //     cout << "Elemnt is Present ." << endl;
    // }
    // else
    // {
    //     cout << "Element Not present ." << endl;
    // }

    // for spyliar matrix.
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

    while (row_start <= row_end and column_start <= column_end)
    {
        // for row start
        for (int col = column_start; col < column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // for column end
        for (int row = row_start; row < row_end; row++)
        {
            cout << arr[row][column_end];
        }
        column_end--;

        // for row end
        for (int col = column_end; col >= column_start; col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;



        // for column start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[column_start][row];
        }
        column_start++;

        
        
        
        
    }
    
    // for matrix Transpose

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < m; j++)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }

    // cout << "Transpose of the given Matrix is : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for the Matrix Multiplication

    // int n1, n2, n3;
    // cin >> n1 >> n2 >> n3;
    // int a[n1][n2];
    // int b[n2][n3];
    // int ans[n1][n3];

    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }

    // for (int i = 0; i < n2; i++)
    // {
    //     for (int j = 0; j < n3; j++)
    //     {
    //         cin >> b[i][j];
    //     }
    // }

    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n3; j++)
    //     {
    //         ans[i][j] = 0;
    //     }
    // }
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n3; j++)
    //     {
    //         for (int k = 0; k < n2; k++)
    //         {
    //             ans[i][j] += a[i][k] * b[k][j];
    //         }
    //     }
    // }
    // cout << "Display Matric Multiplcation is given below : " << endl;
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n3; j++)
    //     {
    //         cout << ans[i][j];
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // for the search in the matrix by optimised way in sorted matrix.

    // int n, m;
    // cin >> n >> m;
    // int arr[n][m];
    // // for imput the matrix.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // // for output the matrix.
    // cout << "Matrix is : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // for searching element in the matrix
    // int x;
    // cin >> x;
    // bool flag = false;
    // cout << "Search element : " << x << endl;
    // int r = 0, col = n - 1;
    // while (r < m and col >= 0)
    // {
    //     if (arr[r][col] == x)

    //     {

    //         flag = true;
    //     }
    //     arr[r][col] > x ? col-- : r++;
    // }

    // if (flag)
    // {
    //     cout << "Element is present.\n";
    // }

    // else
    // {

    //     cout << "Not present in the given matrix.\n";
    // }

    return 0;
}

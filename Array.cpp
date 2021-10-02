#include <iostream>
#include <climits>
using namespace std;

// Finding min or max in a array .

void Input(int arr[], int n)
{
    cout << "enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Output(int arr[], int n)
{
    cout << "Printing the element of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

void maxORmin(int arr[], int n)
{

    int maxNo = INT_MIN; ///// IT GIVES MINIMUM NUMBER PRESENT IN THE WHOLE PROGRAM
    int minNo = INT_MAX; ///// IT GIVES MAXIMUM NUMBER PRESENT IN THE WHOLE PROGRAM
    int maxI, minI;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        // maxI = maxNo[i];
        minNo = min(minNo, arr[i]);
        // minI = 
    }

    cout << "Max. number : " << maxNo << " " << maxI << endl;
    cout << "Min. number : " << minNo << " " << maxI << endl;

    // <<<<<<< ------------------------- OR------------------------>>>>>>>>>>>>>>>>>>>>

    // int maxNO, minNO;
    // maxNO = arr[0];
    // minNO = arr[1];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > maxNO)
    //     {
    //         maxNO = arr[i];
    //         maxI = i;
    //     }
    //     if (arr[i] < minNO)
    //     {
    //         minNO = arr[i];
    //         minI = i;
    //     }
    // }

    // cout << "Max. number : " << maxNO << " " << maxI << endl;
    // cout << "Min. number : " << minNO << " " << minI << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    Input(arr, n);
    Output(arr, n);
    maxORmin(arr, n);
    return 0;
}

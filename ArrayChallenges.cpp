#include <iostream>
using namespace std;

void maxTill_i(int arr[], int n)
{
    int mx = -199999;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }

    return;
}
void sumofsubArray(int arr[], int n)
{

    int current = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            current += arr[j];
            cout << current << endl;
        }
    }

    return;
}

//  Longest Arithmetic subArray Google kickstart .

void LongestArithmeticSubarray()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int curr = 2;
    int pd = arr[1] - arr[0];

    int ans = 2;
    int j = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }

        ans = max(ans, curr);

        j++;
    }

    cout << "Longest Arithematic Sub Array : " << ans << endl;
}

// Record Breaking day . Google kickstart

void RecordBreakingDay()
{

    int n;
    cin >> n;
    int arr[n];
    arr[n] = -1; // which is not negative that means no. of visitors greater than 0
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(ans, arr[i]);
    }

    cout << "Number of Record Breaking day is : " << ans << endl;
}

int main()

{
    // cout << "Enter the size of the array : " << endl;
    // int n;
    // cin >> n;
    // int arr[n];
    // cout << "Enter the element of the array : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Print maximum element till the last elemnent means ith element :  " << endl;
    // maxTill_i(arr, n);
    // cout << "Sum of all Sub Array : " << endl;
    // sumofsubArray(arr, n);
    // LongestArithmeticSubarray();
    RecordBreakingDay();
    return 0;
}

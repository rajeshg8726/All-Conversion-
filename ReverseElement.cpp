#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int st, int end)
{

    while (st <= end)
    {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
}

int main()
{

    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    reverse(a, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

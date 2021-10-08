// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// #include "bits/stdc++.h"
#include <iostream>
#include <climits>
using namespace std;

// this algorithms reduce the time complexity of the programm
// this is works on sorted array only if array is not sort then first sort then apply kadan



















int Kadane_Algo(int a[], int n)
{

    // KADANE'S ALGO.

    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum = currsum + a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }

    // cout << maxsum << endl;
    return maxsum;
}
void pair_sum(int a[], int n, int k)
{
    // this is for pair sum problem solution .
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            break;
        }
        else if (a[low] + a[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
}

// BRUTE FORCE APPROCH
void maximumsumSubArray(int a[], int n)
{
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            maxSum = max(maxSum, sum);
        }
    }

    cout << "Maximum sum of the subArray is " << maxSum << " " << endl;
}

void PrintAllSubarray(int a[], int n)
{
    cout << "Display all contigous sub array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << " " << a[k];
            }
            cout << endl;
        }
    }
}
// In the below approach we use three loop which is not good because it is O(n^3),
int maxsubarraySum(int a[], int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + a[k];
            }
            // cout << endl;
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    return 0;
}

// Masimum subarray sum by kadane's algorithms it reduces the time complexity of the algorithms

void maxSubarraysum(int a[], int n)
{

    cout << "Print max sum number : " << endl;
    // KADANE'S ALGO.

    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum = currsum + a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }

    cout << maxsum << endl;
}

void Pairsum(int a[], int n)
{
    // This is the pair sum problem.
    int k = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }
}

// Maximum Circular sub Array sum

void Circularsubarray_sum(int a[], int n)
{

cout << "Maximum circular sub array sum is : " ;
    int nonwrapsum, wrapsum;

    nonwrapsum = Kadane_Algo(a, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }

    wrapsum = totalsum + Kadane_Algo(a ,n);

    cout << max(wrapsum, nonwrapsum) << endl;
}

int main()

{
    int n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    int a[n];
    cout << "Elemnent of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Kadan_Algo(a, n, k);
    // PrintAllSubarray(a, n);
    //  maxsubarraySum(a , n);
    // maxsubarraySum(a, n);
Circularsubarray_sum(a , n);

    return 0;
}

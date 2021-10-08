#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Modify(int *x, int *y)
{
  int sum , diff;
  sum = (*x) + (*y);
  cout<<sum<<endl;

  diff = (*x) - (*y);
  cout<<abs(diff);  //// abs for converting -ve to +ve value
}

int main()
{
    // int a = 5;
    // int * aptr;
    // aptr = &a;

    // cout<< &a<<endl;
    // cout<<aptr<<endl;
    // *aptr = 57;
    // cout<< *aptr<<endl;
    // aptr++;
    // cout<<*aptr;

    // int arr[] = {10, 20, 30, 40, 50};
    // cout<<*arr<<endl;

    // int *ptr = arr;
    // for (int i = 0; i < 5; i++)
    // {

    //     cout << *(arr + i) << endl;
    //     //    arr++; it is not valid.

    //     // cout<<*ptr<<endl;
    //     // ptr++;
    // }
    int *ptr;
    ptr = new int[4]; // it allocater memorey to heap for array of size 4;
    int a = 2;
    int b = 5;
    // swap(a , b); it is not changes because it's pass by value which is changed in this function of its local variables .
    swap(&a, &b); // this is pass by reference so it change becusea pointer can accessable or modified at any place .
    cout << a << " " << b << endl;
    return 0;
}

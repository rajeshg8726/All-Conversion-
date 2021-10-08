#include<iostream>
using namespace std;

int main()
{

int i = 1 ;
    //1    //3 
// i = i++ + ++i;
// cout <<i << endl ;

    //1   //0   //2   //2    //2
i = i-- + i++ + ++i - i-- + ++i;
//2
cout <<i << endl ;
cout << " Address of i : " << &i << endl;
    return 0;
}
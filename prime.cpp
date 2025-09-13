#include <iostream>
#include <stdlib.h>
using namespace std;

int main()

{
    int a;
    int i = 2;
    bool isPrime = true;

    cout << "Enter the no. to check for prime : " << endl;
    cin >> a;

    // if(a<=1){
    //     isPrime = false;
    //     cout<<"the no. given is neither prie nor consecutive"<<endl;
    // }
    // else{

    //     for(int i=2; i++; i<=a/2)
    //     {
    //         int b = a%i;

    //         if(b == 0)
    //         {
    //             isPrime = false;
    //             cout<<"the no. entered is not prime"<<endl;
    //             break;
    //         }
    //     }

    // }
    if (a == 0 || a == 1)
    {
        // cout << "the no. given is neither prime nor composit" << endl;
        isPrime = false;
    }
    else
    {

        for(int i = 2; i<a; i++ )
        {
            if (a%i == 0)
            {
                // cout << "the no. is not prime" << endl;
                isPrime = false;
                break;
            }

        }
    }

    if(isPrime = false){
        cout<<"The no. is not prime"<<endl;
    
    }
    else{
        cout<<"the no. is Prime"<<endl;
    }
}

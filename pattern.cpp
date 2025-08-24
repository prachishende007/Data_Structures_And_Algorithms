#include <iostream>
using namespace std;

// void pattern(int n){
    
//     for(int i=1 ; i<=n; i++){
        
//         for(int j = 0; j<=n-i; j++){

//             cout<<" ";

//         }

        
//         for(int j = 0; j<2*i-1; j++){

//             cout<<"*";

//         }

        
//         for(int j = 0; j<=n-i; j++){

//             cout<<" ";

//         }

//         for(int j = 0; j<=i; j++){

//             cout<<" ";

//         }

        
//         for(int j = 0; j<=2*(n-i); j++){

//             cout<<"*";

//         }

        
//         for(int j = 0; j<=i; j++){

//             cout<<" ";

//         }

//         cout<<endl;
//     }
// }

int main()
{
    int n;
    int i = 1;
    
    int count = 1;

    cout << "enter the no." << endl;
    cin >> n;

    // pattern(n);

    // pattern 1
    // while (i <= n)
    // {
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 2
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 3
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 4
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n-j+1;
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 6
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count<<" ";
    //         count++;
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 7
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }

    // pattern 8
    //while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count<<" ";
    //         count++;
    //         j = j+1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 9
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i-j+1;
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 10 
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << n-j+1;
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 11
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A'+i-1;
    //         cout << ch<<" ";
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 11
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     { 
    //         char ch = 'A'+j-1;
    //         cout << ch;
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 12
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A'+i+j-2;
    //         cout << ch<<" ";
    //         j = j +1;

    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 13
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << n+j-i;
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 14
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A'+n+j-(i+1);
    //         cout << ch<<" ";
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // pattern 15
    // while (i <= n)
    // {
    //     int j = 1;
    //     int space = n - i;

    //     while(space){
    //         cout<<" ";
    //         space = space - 1;
    //     }
        
    //     while (j <= i)
    //     {
    //         cout << n+j-i;
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << n+j-i;
    //         j = j +1;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }


}
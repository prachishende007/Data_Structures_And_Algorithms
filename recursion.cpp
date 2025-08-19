#include<bits/stdc++.h>
using namespace std;

// void func(int n, int i){
//    if(n == 0){
//     return;
//    } 
//    else{
//     cout<<n<<endl;
//     n--;
//     func(n, i);
//    }
// }

// void func(int n, int i){
//    if(n == 0){

//     return;
//    }
//     n-1;
//     func(i, n-1);
//     cout<<n;
   
// }

//parametrized functions
int summation(int i){
    if(i<1){
        return 0;
    }
    return i + summation(i-1) ;
}

int fact(int n){
    if(n > 1){
        return (n * fact(n-1));
    }
    else{
        return 1;
    }
}

int main(){
    int i = 5;
    int n = 5;
    //when a function calls itself until a specified condition is met

    //Base condition : stopping condition

    //Recursion Tree : when represented in the f() form 
    int s = summation(i);

    int fac = fact(n);

    cout<< fac << endl;

    cout<< s <<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    //LIFO

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5); 

    cout<<st.top(); // top but without removing it

    st.pop(); // pops it

    st.size();
    st.empty();//bool

    stack<int> st1, st2;

    st1.swap(st2);
}
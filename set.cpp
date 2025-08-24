#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(2); //doesn't store 2 as it's already there

    auto it = st.find(3); // returns an iterator

    auto it = st.find(6); //it gives st.end() cause 6 is not there

    st.erase(2);

    int cnt = st.count(1); // always gives one;

    auto it1 = st.find(2);
    auto it2 = st.find(3);

    st.erase(it1,it2); // erases b/w 2 &3 not 3

    auto it = st.lower_bound(2); // points to first 2
    auto it = st.upper_bound(3); // points to the first no. greater than 5 

    //Multiset: only follows sorted not unique
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // all 1's reased
    int cnt = ms.count(1);

    ms.erase(ms.find(1)); //erases only one 1

    //Unordered set
    unordered_set<int> st;
    //for most of the ops time complexity is O(1);
    //no lower bound and upper bound
    

}
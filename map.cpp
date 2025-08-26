#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp; // key and value pairs
    //stores everything in sorted order of key

    map<int, pair<int, int>> mp;

    map<pair<int, int>, int> mp;

    // mp[1] = 2;
    // mp.emplace({3,5});

    mp.insert({2,4});
    // mp[{2,4}] = 10;

    for(auto it : mp){
        cout<<it.first<<" "<<it.second << endl;
    }

    //lower bound upper bound, find with it
}
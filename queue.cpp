#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    //FIFO
   q.push(1);
   q.emplace(4);

   q.back();

   q.front();

   q.pop();


   //Priority Queue
    priority_queue<int> pq; //MAX Heap Default

    pq.push(1);
    pq.emplace(4);

    pq.top();

    //Using MIN Heap
    priority_queue <int, vector<int>, greater<int>> pq;

    //Stores minimum element at the top



}
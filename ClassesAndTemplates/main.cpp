/*
Class template is here:
http://www.cplusplus.com/reference/queue/priority_queue/
Conclassors are here:
http://www.cplusplus.com/reference/queue/priority_queue/priority_queue/
*/

#include <queue>
#include <vector>
#include <iostream>

using namespace std;

class element{
public:
    int x = 1;
    element(int x_){
        x = x_;
    }
};

class classLTComparator{
public:
    bool operator() (const element& lhs, const element& rhs) const {
        return (lhs.x < rhs.x);
    }
};

int main(){
    // priority queue of integers.
    vector<int> v{4, 7,6};
    priority_queue<int> pq(v.begin(), v.end());
    int i;
    i = pq.top();
    cout << i << endl;
    i = pq.top();
    cout << i << endl;
    pq.pop();
    i = pq.top();
    cout << i << endl;
    
    // lets make a more fancy priority queue.
    typedef priority_queue<element, vector<element>, classLTComparator> mypq_type;
    vector<element> V{element(4), element(7), element(6)};
    mypq_type PQ(V.begin(), V.end());
    cout << PQ.top().x << endl;     
 }

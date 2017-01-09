#pragma once

#include <vector>
#include <queue>
#include "base_class.h"

template<typename comparator>
class MyClass : public BaseClass{
public:
    MyClass(std::vector<int> v){
        std::vector<int>::iterator it = v.begin();
        while (it != v.end()){
            m_q.push(*it);
            it++;
        };
    };
    int getTop(){
        int top = m_q.top();
        m_q.pop();
        return top;
    }
private:
    std::priority_queue<int, std::vector<int>, comparator> m_q;
};

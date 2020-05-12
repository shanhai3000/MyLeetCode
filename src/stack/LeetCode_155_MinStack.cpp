//
// Created by shanhai on 2020/5/12.
//

#include "../include/ac_header.h"

class MinStack {
private:
    stack<int> s;
    stack<int> helper;
public:
    /** initialize your data structure here. */
    MinStack(){
    }

    void push(int x) {
        s.push(x);
        if(helper.empty()){
            helper.push(x);
        }else{
            if(x <= helper.top()){
                helper.push(x);
            }
        }
    }

    void pop() {
        if(!s.empty()){
            if(s.top() == helper.top()){
                helper.pop();
            }
            s.pop();
        }
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return helper.top();
    }
};
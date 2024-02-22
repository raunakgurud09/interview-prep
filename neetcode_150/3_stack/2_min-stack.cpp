#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class MinStack
{
public:
  vector<pair<int, int>> st;
  MinStack() {}

  void push(int val)
  {
    if (st.empty())
    {
      pair<int, int> p = make_pair(val, val);
      st.push_back(p);
    }
    else
    {
      pair<int, int> p;
      p.first = val;
      p.second = min(val, st.back().second);
      st.push_back(p);
    }
  }

  void pop()
  {
    st.pop_back();
  }

  int top()
  {
    return st.back().first;
  }

  int getMin()
  {
    return st.back().second;
  }
};


class MinStack {
public:
    stack<int> st,min_stack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(min_stack.empty() || val <= min_stack.top()) {
            min_stack.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(min_stack.top() == st.top()){
            min_stack.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
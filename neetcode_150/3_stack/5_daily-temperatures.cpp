#include <iostream>

#include <vector>
#include <stack>

using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
  vector<int> ans(temperatures.size(), 0);

  for (int i = 0; i < temperatures.size(); i++)
  {
    int counter = 0;
    for (int j = i + 1; j < temperatures.size(); j++)
    {

      counter++;
      if (temperatures[i] < temperatures[j])
      {
        ans[i] = (counter);
        break;
      }
    }
  }

  return ans;
}

vector<int> dailyTemperatures(vector<int> &temperatures)
{
  vector<int> ans(temperatures.size(), 0);
  stack<int> max;

  for (int i = 0; i < temperatures.size(); i++)
  {

    while (!max.empty() && temperatures[max.top()] < temperatures[i])
    {
      ans[max.top()] = i - max.top();
      max.pop();
    }
    max.push(i);
  }

  return ans;
}

w
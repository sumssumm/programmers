#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool solution(string s) {
  bool answer = false;
  stack<char> stk;

  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '(')
      stk.push('(');
    else if (s[i] == ')' && !stk.empty() && stk.top() == '(')
      stk.pop();
    else
      return false;
  }
  if (stk.empty())
    return true;
  return answer;
}
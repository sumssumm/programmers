#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
  if (s < n)
    return {-1};

  vector<int> answer(n, s / n);
  int remainder = s % n;

  for (int i = 0; i < remainder; ++i)
    answer[n - 1 - i]++;

  return answer;
}

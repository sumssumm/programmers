#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
  map<char, int> countX;
  map<char, int> countY;

  for (int i = 0; i < 10; ++i)
    countX['0' + i] = 0;
  countY = countX;

  for (char c : X)
    countX[c]++;

  for (char c : Y)
    countY[c]++;

  vector<char> num;
  for (int i = 0; i < 10; ++i) {
    char digit = '0' + i;
    int minCount = min(countX[digit], countY[digit]);
    for (int j = 0; j < minCount; ++j)
      num.push_back(digit);
  }

  sort(num.begin(), num.end(), greater<char>());

  string numStr(num.begin(), num.end());

  if (numStr.empty())
    return "-1";

  if (numStr[0] == '0')
    return "0";

  return numStr;
}
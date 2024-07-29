#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n = 3;
  vector<string> words;
  words.push_back("tank");
  words.push_back("kick");
  words.push_back("know");
  words.push_back("wheel");
  words.push_back("land");
  words.push_back("dream");
  words.push_back("mother");
  words.push_back("robot");
  words.push_back("tank");
  vector<int> answer;

  int cnt = 1;
  for (int i = 0; i < words.size() - 1; ++i) {
    if (words[i][words[i].size() - 1] != words[i + 1][0])
      break;
    ++cnt;
  }

  if (cnt != n) {
    answer.push_back(cnt % n);
    answer.push_back(cnt / n);
  } else {
    answer.push_back(0);
    answer.push_back(0);
  }

  std::cout << answer[0] << " " << answer[1] << "\n";
}

// vector<int> solution(int n, vector<string> words) {
//   vector<int> answer;

//   int cnt = 1;
//   for (int i = 0; i < words.size() - 1; ++i) {
//     if (words[i][words[i].size() - 1] != words[i + 1][0])
//       break;
//     ++cnt;
//   }

//   if (cnt != n) {
//     answer.push_back(cnt % n);
//     answer.push_back(cnt / n);
//   } else {
//     answer.push_back(0);
//     answer.push_back(0);
//   }

//   return answer;
// }

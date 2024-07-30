#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

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

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> used;
    used.push_back(words[0]);

     for (int i = 0; i < words.size(); ++i) {
         for (int j = 0; j < used.size(); ++j) {
            if (i > 0 && words[i] == used[j]) {
                answer.push_back(i % n + 1);
                answer.push_back(i / n + 1);
            return answer;
            }
        }
    if (i > 0 && words[i - 1].back() != words[i].front()) {
    answer.push_back(i % n + 1);
    answer.push_back(i / n + 1);
    return answer;
    }
    if (i + 1 == words.size()) {
      answer.push_back(0);
      answer.push_back(0);
    return answer;
    }
     if (i > 0)
        used.push_back(words[i]);
  }

    return answer;
}

#include <string>
#include <vector>
#include <unordered_set>

vector<int> solution(int n, vector<string> words) {
  unordered_set<string> usedWord;

  for (int i = 0; i < words.size(); ++i) {
    if (!usedWord.insert(words[i]).second || (i > 0 && words[i - 1].at(words[i - 1].size() - 1) != words[i].at(0)))
      return {i % n + 1, i / n + 1};
  }
  return {0, 0};
}
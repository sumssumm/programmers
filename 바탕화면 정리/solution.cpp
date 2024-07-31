#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
  vector<int> answer;
  int h[2] = {0};
  int w[2] = {0};
  for (int i = 0; i < wallpaper.size(); ++i) {
    for (int j = 0; j < wallpaper[j].size(); ++j) {
      if (wallpaper[i][j] == '#') {
        w[0] = i;
        h[0] = j;
        break;
      }
    }
  }
  return answer;
}
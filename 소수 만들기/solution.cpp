#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int num) {
	// std::cout << num << "\n";
    for (int i = 2; i <= num / i; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for (int i = 0; i < nums.size() - 2; ++i) {
        for (int j = i + 1; j < nums.size() - 1; ++j) {
            for (int k = j + 1; k < nums.size(); ++k) {
                int num = nums[i] + nums[j] + nums[k];
								// cout << "num:" <<num << " " << i << j << k << "\n";
                if (isPrime(num))
                    answer++;
            }
        }
    }
    return answer;
}

int main() {
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);

	cout << solution(nums) << "\n";
}
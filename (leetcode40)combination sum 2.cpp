#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        sort(candidates.begin(), candidates.end()); // Sort the candidates to handle duplicates properly
        backtrack(candidates, target, 0, path, result);
        return result;
    }

    void backtrack(vector<int>& candidates, int target, int start, vector<int>& path, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(path);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            // Skip duplicates to avoid duplicate combinations
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            path.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1, path, result);
            path.pop_back();
        }
    }
};

int main() {
    Solution solution;
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result = solution.combinationSum2(candidates, target);
    for (const auto& combination : result) {
        cout << "[";
        for (int num : combination) {
            cout << num << ",";
        }
        cout << "]" << endl;
    }
    return 0;
}

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> result;
        for (int i = 0; pow(x, i) < bound; i++) {
            for (int j = 0; pow(x, i) + pow(y, j) <= bound; j++) {
                result.insert(pow(x, i) + pow(y, j));
                if (y == 1) {
                    break;
                }
            }
            if (x == 1) {
                break;
            }
        }
        return {result.begin(), result.end()};
    }
};

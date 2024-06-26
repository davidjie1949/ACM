
template<class Iterator>
Iterator upperBound(Iterator begin, Iterator end, typename Iterator::value_type target) {
    while (begin != end) {
        Iterator mid = std::next(begin, std::distance(begin, end) / 2);
        if (*mid <= target) {
            begin = mid + 1;
        } else {  // *mid > target
            end = mid;
        }
    }
    return begin;
}

template<class Iterator>
Iterator lowerBound(Iterator begin, Iterator end, typename Iterator::value_type target) {
    while (begin != end) {
        Iterator mid = std::next(begin, std::distance(begin, end) / 2);
        if (*mid < target) {
            begin = mid + 1;
        } else {  // *mid >= target
            end = mid;
        }
    }
    return begin;
}

// Bias to low.
while (lo < hi) {
    int mid = lo + (hi - lo) / 2;
    if (??) {
        lo = mid + 1;
    } else {
        hi = mid;
    }
}
return lo;

// Bias to high.
while (lo < hi) {
    int mid = lo + (hi - lo + 1) / 2;
    if (??) {
        lo = mid;
    } else {
        hi = mid - 1;
    }
}
return lo;

/*
 * Binary search the answer:
 * LeetCode 2560: https://leetcode.com/problems/house-robber-iv/description/
 * TODO:
 * https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/
 * https://leetcode.com/problems/maximum-value-at-a-given-index-in-a-bounded-array/description/
 * https://leetcode.com/problems/kth-missing-positive-number/description/
 * https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
 * https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
 * https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
 * https://leetcode.com/problems/koko-eating-bananas/description/
 * https://leetcode.com/problems/split-array-largest-sum/
 * https://leetcode.com/problems/minimize-max-distance-to-gas-station/
 * https://leetcode.com/problems/divide-chocolate/
 */

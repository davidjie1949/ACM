// Split
vector<string> split(string s, string delimiter = " ") {
    vector<string> res;
    size_t p = 0;
    while (p <= s.length()) {
        size_t pos = s.find(delimiter, p);
        if (pos == string::npos) {
            pos = s.length();
        }
        res.emplace_back(s.substr(p, pos - p));
        p = pos + delimiter.length();
    }
    return res;
}

// Join
string join(const vector<string>& words, const string& delimiter = " ") {
    if (words.empty()) {
        return "";
    }
    string res = words.at(0);
    for (int i = 1; i < words.size(); i++) {
        res += delimiter + words.at(i);
    }
    return res;
}

// KMP(Knuth-Morris-Pratt): Find string p in string s with O(s.len() + p.len()).
// Longest prefix == suffix
// Leetcode 28
int KMP(const string& s, const string& p) {
    vector<int> next = PMT(needle);
	for (int i = 0, j = 0; i < haystack.size(); i++) {
	    while (haystack[i] != needle[j]) {
            if (j > 0) {
                j = next[j - 1];
            } else {
                j = -1;  // Offset the j++ later.
                break;
            }
	    }
	    j++;

	    // Found a match.
	    if (j == needle.length()) {
		    return i - (j - 1);
	    }
	}
    return -1;
}
vector<int> PMT(const string& s) {
    vector<int> next(s.length(), 0);
    for (int i = 0; i < s.length(); i++) {
        int pre = i;
        do {
            if (pre > 0) {
                pre = next[pre - 1];
                next[i] = pre + 1;
            } else {
                next[i] = 0;
                break;
            }
        } while (s[i] != s[pre]);
    }
    return next;
}

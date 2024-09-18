class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str_nums;
        for (int num : nums) {
            str_nums.push_back(to_string(num));
        }
        auto cmp = [](const string& a, const string& b) {
            return a + b > b + a;
        };
        sort(str_nums.begin(), str_nums.end(), cmp);

        if (str_nums[0] == "0") return "0";

        string result = "";
        for (const string& num : str_nums) {
            result += num;
        }
        return result;
    }
};
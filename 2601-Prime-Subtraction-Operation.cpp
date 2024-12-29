class Solution {
private:
    vector<int> generatePrimes(int limit) {
        vector<bool> isPrime(limit + 1, true);
        vector<int> primes;
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i <= limit; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
                for (int multiple = i * 2; multiple <= limit; multiple += i) {
                    isPrime[multiple] = false;
                }
            }
        }
        return primes;
    }

    bool canBeStrictlyIncreasing(vector<int>& arr) {
        int maxVal = *max_element(arr.begin(), arr.end());
        vector<int> primes = generatePrimes(maxVal);

        for (int i = arr.size() - 2; i >= 0; --i) {
            bool found = false;
            for (int prime : primes) {
                if (arr[i] < arr[i + 1]) {
                    found = true;
                    break;
                }
                if (arr[i] - prime < arr[i + 1] && arr[i] - prime > 0) {
                    arr[i] -= prime;
                    found = true;
                    break;
                }
            }
            if (!found || arr[i] >= arr[i + 1])
                return false;
        }
        return true;
    }

public:
    bool primeSubOperation(vector<int>& nums) {
        return canBeStrictlyIncreasing(nums);
    }
};
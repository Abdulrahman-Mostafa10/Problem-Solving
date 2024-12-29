/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n, mid;
        while (start <= end) {
            mid = start + ((end - start) >> 1);
            int guessedValue = guess(mid);
            if (!guessedValue)
                break;
            else if (guessedValue > 0)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return mid;
    }
};
class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int nextBytes = 0;
        for (int byte : data) {
            if (!nextBytes) {
                if ((byte & 0x80) == 0x00)
                    continue;
                else if ((byte & 0xE0) == 0xC0)
                    nextBytes = 1;
                else if ((byte & 0xF0) == 0xE0)
                    nextBytes = 2;
                else if ((byte & 0xF8) == 0xF0)
                    nextBytes = 3;
                else
                    return false;
            } else {
                if ((byte & 0xC0) != 0x80)
                    return false;
                nextBytes--;
            }
        }
        return !nextBytes;
    }
};
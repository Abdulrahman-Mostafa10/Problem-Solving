/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    void fillGrid(ListNode* head, vector<vector<int>>& grid, int minRow,
                  int maxRow, int minCol, int maxCol, int i = 0, int j = 0,
                  int state = 1) {
        if (!head)
            return;
        grid[i][j] = head->val;
        if (state == 1) {
            if (j == maxCol)
                minRow++, state = 2,
                          fillGrid(head->next, grid, minRow, maxRow, minCol,
                                   maxCol, i + 1, j, state);
            else
                fillGrid(head->next, grid, minRow, maxRow, minCol, maxCol, i,
                         j + 1, state);
        } else if (state == 2) {
            if (i == maxRow)
                maxCol--, state = 3,
                          fillGrid(head->next, grid, minRow, maxRow, minCol,
                                   maxCol, i, j - 1, state);
            else
                fillGrid(head->next, grid, minRow, maxRow, minCol, maxCol,
                         i + 1, j, state);
        } else if (state == 3) {
            if (j == minCol)
                maxRow--, state = 4,
                          fillGrid(head->next, grid, minRow, maxRow, minCol,
                                   maxCol, i - 1, j, state);
            else
                fillGrid(head->next, grid, minRow, maxRow, minCol, maxCol, i,
                         j - 1, state);
        } else {
            if (i == minRow)
                minCol++, state = 1,
                          fillGrid(head->next, grid, minRow, maxRow, minCol,
                                   maxCol, i, j + 1, state);
            else
                fillGrid(head->next, grid, minRow, maxRow, minCol, maxCol,
                         i - 1, j, state);
        }
    }

public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> grid(m, vector<int>(n, -1));
        int minRow = 0, maxRow = m - 1, minCol = 0, maxCol = n - 1, i = 0,
            j = 0, dir = 0;
        int directions[4][2] = {{0, +1}, {+1, 0}, {0, -1}, {-1, 0}};
        while (head) {
            grid[i][j] = head->val;
            head = head->next;
            int newRow = i + directions[dir][0],
                newCol = j + directions[dir][1];

            if (newRow < minRow || newRow > maxRow || newCol < minCol ||
                newCol > maxCol ||
                (newRow >= 0 && newRow <= maxRow && newCol >= 0 &&
                 newCol <= maxCol && grid[newRow][newCol] != -1)) {
                if (!dir)
                    minRow++;
                else if (dir == 1)
                    maxCol--;
                else if (dir == 2)
                    maxRow--;
                else
                    minCol++;
                dir = (dir + 1) % 4;
                newRow = i + directions[dir][0],
                newCol = j + directions[dir][1];
            }
            i = newRow, j = newCol;
        }
        return grid;
    }
};
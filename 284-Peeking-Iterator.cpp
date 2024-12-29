/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *\t\tstruct Data;
 * \t\tData* data;
 *  public:
 *\t\tIterator(const vector<int>& nums);
 * \t\tIterator(const Iterator& iter);
 *
 * \t\t// Returns the next element in the iteration.
 *\t\tint next();
 *
 *\t\t// Returns true if the iteration has more elements.
 *\t\tbool hasNext() const;
 *\t};
 */

class PeekingIterator : public Iterator {
private:
    int currentIterator = -1;
    bool hasNextIterator;

public:
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        // Initialize any member here.
        // **DO NOT** save a copy of nums and manipulate it directly.
        // You should only use the Iterator interface methods.
        hasNextIterator = Iterator::hasNext();
        if (hasNextIterator)
            currentIterator = Iterator::next();
    }

    // Returns the next element in the iteration without advancing the iterator.
    int peek() { return currentIterator; }

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    int next() {
        int oldIterator = currentIterator;
        hasNextIterator = Iterator::hasNext();
        if (hasNextIterator)
            currentIterator = Iterator::next();
        return oldIterator;
    }

    bool hasNext() const { return hasNextIterator; }
};
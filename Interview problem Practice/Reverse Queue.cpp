#include <queue>
using namespace std;

class Solution {
public:
    void reverseQueueHelper(queue<int> &q) {
        // Base case: if the queue is empty, return
        if (q.empty()) return;

        // Step 1: Remove the front element
        int front = q.front();
        q.pop();

        // Step 2: Reverse the remaining queue recursively
        reverseQueueHelper(q);

        // Step 3: Add the removed element back to the rear of the queue
        q.push(front);
    }

    queue<int> reverseQueue(queue<int> &q) {
        // Call the helper function to reverse the queue
        reverseQueueHelper(q);
        return q;
    }
};


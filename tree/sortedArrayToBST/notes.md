# Convert Sorted Array to BST

## Approach

We use a divide-and-conquer strategy to convert a sorted array into a height-balanced binary search tree. By selecting the middle element as the root, we ensure the tree remains balanced since there are equal (or nearly equal) numbers of elements on both sides. We then recursively apply this process to the left and right subarrays to construct the left and right subtrees. This approach guarantees O(n) time complexity as we visit each element once, and produces a balanced BST where the height is O(log n).

## Key Points

- Middle element becomes the root to maintain balance
- Left subarray forms the left subtree
- Right subarray forms the right subtree
- Base case: when left > right, return nullptr
- Time complexity: O(n)
- Space complexity: O(log n) for recursion stack

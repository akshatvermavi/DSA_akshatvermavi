class Solution {
public:
    int matchingSubtreeCount = 0;
    pair<int, int> calculateSubtreeValues(TreeNode* currentNode) {
        if (currentNode == nullptr)
            return {0, 0}; 

    
        auto leftSubtree = calculateSubtreeValues(currentNode->left);
        auto rightSubtree = calculateSubtreeValues(currentNode->right);

        // Calculate the sum of values and the number of nodes in the current subtree.
        int sumOfValues = leftSubtree.first + rightSubtree.first + currentNode->val;
        int numberOfNodes = leftSubtree.second + rightSubtree.second + 1;

        // Check if the current node's value matches the average of its subtree.
        if (sumOfValues / numberOfNodes == currentNode->val)
            matchingSubtreeCount++; 

        return {sumOfValues, numberOfNodes}; // Return the calculated values for the current subtree.
    }

    int averageOfSubtree(TreeNode* root) {
        calculateSubtreeValues(root); // Start the DFS from the root node.
        return matchingSubtreeCount; 
    }
};

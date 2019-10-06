/**
 * @file binarytree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include "TreeTraversals/InorderTraversal.h"
#include <iostream>
#include <stack>

/**
 * @return The height of the binary tree. Recall that the height of a binary
 *  tree is just the length of the longest path from the root to a leaf, and
 *  that the height of an empty tree is -1.
 */
template <typename T>
int BinaryTree<T>::height() const
{
    // Call recursive helper function on root
    return height(root);
}

/**
 * Private helper function for the public height function.
 * @param subRoot
 * @return The height of the subtree
 */
template <typename T>
int BinaryTree<T>::height(const Node* subRoot) const
{
    // Base case
    if (subRoot == NULL)
        return -1;

    // Recursive definition
    return 1 + std::max(height(subRoot->left), height(subRoot->right));
}

/**
 * Prints out the values of the nodes of a binary tree in order.
 * That is, everything to the left of a node will be printed out before that
 * node itself, and everything to the right of a node will be printed out after
 * that node.
 */
template <typename T>
void BinaryTree<T>::printLeftToRight() const
{
    // Call recursive helper function on the root
    printLeftToRight(root);

    // Finish the line
    std::cout << std::endl;
}

/**
 * Private helper function for the public printLeftToRight function.
 * @param subRoot
 */
template <typename T>
void BinaryTree<T>::printLeftToRight(const Node* subRoot) const
{
    // Base case - null node
    if (subRoot == NULL)
        return;

    // Print left subtree
    printLeftToRight(subRoot->left);

    // Print this node
    std::cout << subRoot->elem << ' ';

    // Print right subtree
    printLeftToRight(subRoot->right);
}

/**
 * Flips the tree over a vertical axis, modifying the tree itself
 *  (not creating a flipped copy).
 */
    template <typename T>
void BinaryTree<T>::mirror()
{
    //your code here
    mirror(root);
}

/**
 * Private helper function for mirror.
 * @param subRoot The current node in the recursion
 */
template <typename T>
void BinaryTree<T>::mirror(Node* subRoot){
    if (subRoot == NULL){
        return;
    }

    Node* temp = subRoot->right;
    subRoot->right = subRoot->left;
    subRoot->left = temp;
    mirror(subRoot->left);
    mirror(subRoot->right);
}


/**
 * isOrdered() function iterative version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedIterative() const
{
    // your code here
    
    return isOrderedIterative(root);
}

template <typename T>
bool BinaryTree<T>::isOrderedIterative(Node* subRoot) const
{
    // your code here
    InorderTraversal<T> traversal(subRoot);
    Node* current = NULL;
    for (typename TreeTraversal<T>::Iterator it = traversal.begin(); it != traversal.end(); ++it){
        if (current != NULL){
            if (current->elem > (*it)->elem){
                return false;
            }
        }
        current = (*it);
    }
    return true;
}

/**
 * isOrdered() function recursive version
 * @return True if an in-order traversal of the tree would produce a
 *  nondecreasing list output values, and false otherwise. This is also the
 *  criterion for a binary tree to be a binary search tree.
 */
template <typename T>
bool BinaryTree<T>::isOrderedRecursive() const
{
    return isOrderedRecursive(root);
    // your code here
    
}

template <typename T>
bool BinaryTree<T>::isOrderedRecursive(Node* subRoot) const
{
    // your code here
    if (subRoot->left == NULL && subRoot->right == NULL){
        return true;
    }
    bool isOrdered = true;
    if (subRoot->left != NULL){
        if (!isOrderedRecursive(subRoot->left)) {
            isOrdered = false; 
        }
    }
    if (subRoot->right != NULL){
        if (!isOrderedRecursive(subRoot->right)) {
            isOrdered = false; 
        }
    }
    if (isOrdered){
        if (subRoot->left != NULL && subRoot->elem < findLargest(subRoot->left)){
            isOrdered = false;
        }
        if (subRoot->right != NULL && subRoot->elem > findsmallest(subRoot->right)){
            isOrdered = false;
        }
        
    }
    return isOrdered;

}

template <typename T>
int BinaryTree<T>::findLargest(Node* subRoot) const{
    if (subRoot->right != NULL){
        return findLargest(subRoot->right);
    }
    return subRoot->elem;
}

template <typename T>
int BinaryTree<T>::findsmallest(Node* subRoot) const{
    if (subRoot->left != NULL){
        return findsmallest(subRoot->left);
    }
    return subRoot->elem;
}

/**
 * creates vectors of all the possible paths from the root of the tree to any leaf
 * node and adds it to another vector.
 * Path is, all sequences starting at the root node and continuing
 * downwards, ending at a leaf node. Paths ending in a left node should be
 * added before paths ending in a node further to the right.
 * @param paths vector of vectors that contains path of nodes
 */
template <typename T>
void BinaryTree<T>::getPaths(std::vector<std::vector<T>>& paths) const
{
    if (root != NULL){
        std::vector<T> path;
        getPaths(paths,path,root);
    }
}

template <typename T>
void BinaryTree<T>::getPaths(std::vector<std::vector<T>>& paths,std::vector<T>& path, Node*subRoot) const
{
    // your code here
    if (subRoot == NULL){
        return;
    } else {
        path.push_back(subRoot->elem);
    }
    if (subRoot->left == NULL && subRoot->right == NULL){
        paths.push_back(path);
    }
    if (subRoot->left != NULL && subRoot->right != NULL){
        std::vector<T> newPath;
        newPath = path;
        getPaths(paths, path, subRoot->left);
        getPaths(paths, newPath, subRoot->right);
    } else {
        if (subRoot->left != NULL){
            getPaths(paths,path,subRoot->left);
        }
        if (subRoot->right != NULL){
            getPaths(paths,path,subRoot->right);
        }
    }
    
}


/**
 * Each node in a tree has a distance from the root node - the depth of that
 * node, or the number of edges along the path from that node to the root. This
 * function returns the sum of the distances of all nodes to the root node (the
 * sum of the depths of all the nodes). Your solution should take O(n) time,
 * where n is the number of nodes in the tree.
 * @return The sum of the distances of all nodes to the root
 */
template <typename T>
int BinaryTree<T>::sumDistances() const
{
    // your code here
    return -1;
}


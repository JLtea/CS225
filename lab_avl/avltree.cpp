/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */
#include <algorithm>

template <class K, class V>
int AVLTree<K, V>::getHeight(Node* t) {
    if (t == NULL) {
        return 0;
    }
    int h1 = 0;
    int h2 = 0;
    if (t->left == NULL && t->right == NULL) {
        return 1;
    }
    if (t->left != NULL) {
        h1 = getHeight(t->left);
    }
    if (t->right != NULL) {
        h2 = getHeight(t->right);
    }
    return std::max(h1,h2) + 1;
}

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node* r = t->right;
    t->right = r->left;
    r->left = t;
    t = r;
    t->height = getHeight(t);
    r->height = getHeight(r);
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node* r = t->left;
    t->left = r->right;
    r->right = t;
    t = r;
    t->height = getHeight(t);
    r->height = getHeight(r);
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
    if (subtree->right == NULL && subtree->left == NULL) {
        return;
    }
    int h1 = 0;
    int h2 = 0;
    if (subtree->right != NULL) {
        h2 = getHeight(subtree->right);
    }
    if (subtree->left != NULL) {
        h1 = getHeight(subtree->left);
    }
    if (h2-h1 > 1) {
        Node* subsub = subtree->right;
        if (subsub->left == NULL || (getHeight(subsub->right) > getHeight(subsub->left))) {
            // std::cout<<"subsub:" <<subsub->key<<std::endl;
            // std::cout<<"subtree:" <<subtree->key<<std::endl;
            // std::cout<<"rotateLEFT"<<std::endl;
            rotateLeft(subtree);
        } else if (subsub->right == NULL || (getHeight(subsub->right) < getHeight(subsub->left))) {
            // std::cout<<"subsub:" <<subsub->key<<std::endl;
            // std::cout<<"subtree:" <<subtree->key<<std::endl;
            // std::cout<<"rotateRIGHTLEFT"<<std::endl;
            rotateRightLeft(subtree);
        }
        
    } else if (h2-h1 < -1) {
        Node* subsub = subtree->left;
        if (subsub->right == NULL || (getHeight(subsub->right) < getHeight(subsub->left))) {
            // std::cout<<"subsub:" <<subsub->key<<std::endl;
            // std::cout<<"subtree:" <<subtree->key<<std::endl;
            // std::cout<<"rotateRIGHT"<<std::endl;
            rotateRight(subtree);
        } else if (subsub->left == NULL || (getHeight(subsub->right) > getHeight(subsub->left))) {
            // std::cout<<"subsub:" <<subsub->key<<std::endl;
            // std::cout<<"subtree:" <<subtree->key<<std::endl;
            // std::cout<<"rotateLEFTRIGHT"<<std::endl;
            rotateLeftRight(subtree);
        }
    }
    subtree->height = getHeight(subtree);
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    if (root == NULL) {
        root = new Node(key, value);
    } else {
        insert(root, key, value);
    }
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if (key < subtree->key) {
        if (subtree->left == NULL) {
            Node* leaf = new Node(key, value);
            subtree->left = leaf;
            rebalance(subtree);
            // std::cout<< "inserted left: (" << leaf->key << "," <<leaf->value<< ")"<<std::endl;
            // std::cout<< "root: " << this->root->key << std::endl;
            return;
        } else {
            insert(subtree->left,key, value);
            rebalance(subtree);
            return;
        }
    }
    if (key > subtree->key) {
        if (subtree->right == NULL) {
            Node* leaf = new Node(key, value);
            subtree->right = leaf;
            rebalance(subtree);
            // std::cout<< "inserted right: (" << leaf->key << "," <<leaf->value<< ")"<<std::endl;
            // std::cout<< "root: " << this->root->key << std::endl;
            return;
        } else {
            insert(subtree->right, key, value);
            rebalance(subtree);
            return;
        }
    }
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
        rebalance(subtree);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
        rebalance(subtree);
    } else {
        //std::cout <<"remove: "<< key<<std::endl;
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete subtree;
            subtree = NULL;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            Node* toSwap = subtree->left;
            Node* parent = NULL;
            // std::cout<<"right tree " <<subtree->right->key<<std::endl;
            // std::cout<<"before" <<toSwap->key<< std::endl;
            while(toSwap->right != NULL) {
                parent = toSwap;
                toSwap = toSwap->right;

            }
            //std::cout<<"Swapped: "<<toSwap->key<<std::endl;
            swap(subtree,toSwap);
            //std::cout<<"deleted: "<<toSwap->key<<std::endl;
            delete(toSwap);
            toSwap = NULL;
            if (parent != NULL) {
                parent->right = NULL;
            }
            rebalance(subtree);
        } else {
            /* one-child remove */
            // your code here
            if (subtree->left != NULL) {
                swap(subtree,subtree->left);
                //std::cout<<"Deleting: "<<subtree->left->key<<std::endl;
                delete subtree->left;
                subtree->left = NULL;
            }
            if (subtree->right!=NULL) {
                swap(subtree,subtree->right);
                //std::cout<<"Deleting: "<<subtree->right->key<<std::endl;
                delete subtree->right;
                subtree->right = NULL;
            }
            rebalance(subtree);
        }
        //your code here
    }
    // if (subtree != NULL) {
    //         rebalance(subtree);
    // }
    return;
}

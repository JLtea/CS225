/* Your code here! */
#include "dsets.h"
#include <math.h>
/**
 * Creates n unconnected root nodes at the end of the vector.
 * @param num The number of nodes to create
*/
void DisjointSets::addelements(int num) {
    for(int i = 1; i <= num; i++)
    sets.push_back(-1);
}

/**
 * Compresses paths (as in lecture)
 * @return The index of the root of the up-tree in which the 
 * parameter element resides.
*/
int DisjointSets::find(int elem) {
    if (sets[elem] < 0) {
        return elem;
    }
    sets[elem] = find(sets[elem]);
    return sets[elem];
}

/**
 * This function should be implemented as union-by-size.
 * That is, when you setunion two disjoint sets, the smaller 
 * (in terms of number of nodes) should point at the larger. 
 * 
 * This function works as described in lecture, except that 
 * you should not assume that the arguments to setunion are roots 
 * of existing uptrees.
 * 
 * Your setunion function SHOULD find the roots of its arguments before
 * combining the trees. If the two sets are the same size, make the tree
 * containing the second argument point to the tree containing the first. 
 * (Note that normally we could break this tie arbitrarily, but in this case
 * we want to control things for grading.)
 * 
 * @param a Index of the first element to union
 * @param b Index of the second element to union
*/
void DisjointSets::setunion(int a, int b) {
    int rootA = find(a);
    int rootB = find(b);
    int newSize = sets[rootA] + sets[rootB];
    if (sets[rootA] < sets[rootB]) {
        sets[rootB] = rootA;
        sets[rootA] = newSize;
    } else {
        sets[rootA] = rootB;
        sets[rootB] = newSize;
    }
    
}

/**
 * This function should return the number of nodes in the up-tree containing the element.
 * @return number of nodes in the up-tree containing the element
*/
int DisjointSets::size(int elem) {
    return abs(sets[find(elem)]);
}
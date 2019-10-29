/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if (first[curDim] < second[curDim]) {
      return true;
    } else if (first[curDim] == second[curDim]) {
      if (first < second) {
        return true;
      }
    }

    return false;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
    int potDist = 0;
    int currDist = 0;
    for (int i = 0; i < Dim; i++) {
      potDist += pow((target[i] - potential[i]),2);
      currDist += pow((target[i] - currentBest[i]),2);
    }
    if (potDist < currDist) {
      return true;
    } else if (potDist == currDist) {
      if (potential < currentBest) {
        return true;
      }
    }
     return false;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    // vector<Point<Dim>> copy;
    // copy = newPoints;
    // root = new KDTreeNode;
    // makeTree(root, copy,0, newPoints.size() - 1, 0);
    
}
template <int Dim>
void KDTree<Dim>::makeTree(KDTreeNode* subRoot, vector<Point<Dim>> &toSort, int from, int to, int currDim) {
  if (to-from == 0) {
    return;
  }
  int medIdx = (to-from)/2;
  subRoot->point = quickselect(toSort, medIdx, from, to, currDim);
  subRoot->left = new KDTreeNode;
  makeTree(subRoot->left, toSort, from, medIdx -1, (currDim+1)%Dim);
  subRoot->right = new KDTreeNode;
  makeTree(subRoot->right,toSort, medIdx +1, to, (currDim+1)%Dim);
  // subRoot->left = quickselect(toSort, from, medIdx -1, (currDim+1)%Dim);
  // subRoot->right = quickselect(toSort, medIdx +1, to, (currDim+1)%Dim);

}

template <int Dim>
Point<Dim> KDTree<Dim>::quickselect(vector<Point<Dim>> &toSort, int medIdx, int from, int to, int currDim) {
  if (medIdx > 0 && medIdx <= to - from) {
    int index = partition(toSort, from, to, currDim);
    if (index == medIdx) {
      return toSort[index];
    }
    if (index - from > medIdx) {
      return quickselect(toSort, medIdx, from, index - 1, currDim);
      
    } else {
      return quickselect(toSort, medIdx, index + 1, medIdx - index + from, currDim);
    }
  }
  return NULL;
}
template <int Dim>
int KDTree<Dim>::partition(vector<Point<Dim>> &toSort, int from, int to, int currDim) {
  int track = from;
  for (int curr = from; curr < to-1; curr++) {
    if (toSort[curr][currDim] < toSort[to][currDim] || (toSort[curr][currDim] == toSort[to][currDim] && toSort[curr]<toSort[to])) {
      swap(toSort[track],toSort[curr]);
      track++;
    }
  }
  swap(toSort[track], toSort[to]);
  return track;
}



template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

    return Point<Dim>();
}


/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
  head_ = NULL;
  tail_ = NULL;
  length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(tail_->next);
}

/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  ListNode* current = head_;
  while (current != NULL){
    ListNode* hold = current->next;
    delete current;
    current = hold;
  }
  length_ = 0;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  if (head_ == NULL) {
    head_ = newNode;
    tail_ = newNode;
    head_->next = NULL;
    head_->prev = NULL;
  } else {
    newNode->prev = NULL; 
    newNode->next = head_;
    head_->prev = newNode; 
    head_ = newNode;
  }
  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  if (head_ == NULL) {
    head_ = newNode;
    tail_ = newNode;
    head_->next = NULL;
    head_->prev = NULL;
  } else {
    newNode->next = NULL;
    newNode->prev = tail_;
    tail_->next = newNode;
    tail_ = newNode;  
  }
  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  ListNode* curr = start;
  for (int i = 0; i < splitPoint; i++) {
    if (curr == NULL) {
      break;
    }
    curr = curr->next;
  }

  if (curr != NULL) {
      curr->prev->next = NULL;
      curr->prev = NULL;
  }

  return curr;
}

/**
 * Modifies the List using the waterfall algorithm.
 * Every other node (starting from the second one) is removed from the
 * List, but appended at the back, becoming the new tail. This continues
 * until the next thing to be removed is either the tail (**not necessarily
 * the original tail!**) or NULL.  You may **NOT** allocate new ListNodes.
 * Note that since the tail should be continuously updated, some nodes will
 * be moved more than once.
 */
template <typename T>
void List<T>::waterfall() {
  /// @todo Graded in MP3.1
  ListNode* curr = head_;
  for (int i = 1; curr->next != NULL; i++) {
    ListNode* hold = curr->next;
    if (i%2 == 0){
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
      curr->prev = tail_;
      tail_->next = curr;
      curr->next = NULL;
      tail_ = curr;
    }
    curr = hold;
  }
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  // @todo Graded in MP3.2
  if (startPoint == endPoint) {
    return;
  }

  ListNode* startPrev = startPoint->prev;
  ListNode* endNext = endPoint->next;
  ListNode* curr = startPoint;

  while (curr != endNext) {
    ListNode* next = curr->next;
    curr->next = curr->prev; 
    curr->prev = next; 
    curr = curr->prev; 
  }

  if (startPrev != NULL) {
    startPrev->next = endPoint;
    endPoint->prev = startPrev;
  }

  if (endNext != NULL) {
    endNext->prev = startPoint;
    startPoint->next = endNext;
  }

  ListNode* temp = startPoint;
  startPoint = endPoint;
  endPoint = temp; 
}



  // if (!startPoint || !endPoint) {
  //   return;
  // }
  // Base case 1 node reverse
//   if (startPoint == endPoint){
//     return;
//   }

//   // Base case 2 node reverse
//   else if (startPoint->next == endPoint) {
//     ListNode* startPrev = startPoint->prev;
//     ListNode* endNext = endPoint->next; 
//     endPoint->prev = startPrev;
//     if (startPrev != NULL) {
//       startPrev->next = endPoint;
//     }
//     startPoint->next = endNext; 
//     if (endNext != NULL) {
//       endNext->prev = startPoint; 
//     }
//     endPoint->next = startPoint;
//     startPoint->prev = endPoint; 
//   }

//   // Recursive case > 2 nodes
//   else {
//     ListNode* startPrev = startPoint->prev;
//     ListNode* startNext = startPoint->next;
//     ListNode* endPrev = endPoint->prev;
//     ListNode* endNext = endPoint->next;
//     endPoint->prev = startPrev;
//     if (startPrev != NULL) {
//       startPrev->next = endPoint;
//     }
//     endPoint->next = startNext;
//     startNext->prev = endPoint; 

//     startPoint->prev = endPrev;
//     endPrev->next = startPoint;
//     startPoint->next = endNext;
//     if (endNext != NULL) {
//       endNext->prev = startPoint; 
//     }

//     reverse(startNext, endPrev);
//   }
//   ListNode* temp = startPoint;
//   startPoint = endPoint;
//   endPoint = temp; 
// }

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  // ListNode* from = head_;
  // ListNode* to = from;
  // while(to != NULL){
  //   for (int i = 1; i < n; i++){
  //     if (to->next != NULL){
  //       to = to->next;
  //     }
  //   }
  //   reverse(from, to);
  //   to = to->next;
  //   from = to;
  // }
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  if (first == NULL) {
    return second;
  }
  if (second == NULL) {
    return first;
  }

  ListNode* head;
  ListNode* list1 = first;
  ListNode* list2 = second;
  ListNode* current;
  
  if (list1->data < list2->data) {
    head = list1;
    list1 = list1->next;
  } else {
    head = list2;
    list2 = list2->next;
  }
  current = head;
  while(true) {
    if (list1 == NULL){
      current->next = list2;
      list2->prev = current;
      break;
    }
    if (list2 == NULL){
      current->next = list1;
      list1->prev = current;
      break;
    }
    if (list1->data < list2->data) {
      current->next = list1;
      list1->prev = current;
      list1 = list1->next;
    } else {
      current->next = list2;
      list2->prev = current;
      list2 = list2->next;
    }
    current = current->next;
  }
  return head;

  // ListNode* head = first;
  // ListNode* merged = first;
  // ListNode* current = second;
  // ListNode* endofMerge = NULL;
  // while (current != NULL){
  //   ListNode* holdnext = current->next;
  //   while (merged != NULL){
  //     if (merged->next == NULL){
  //       endofMerge = merged;
  //     }
  //     if (merged->data < current->data){
  //       merged = merged->next;
  //     } else {
  //       current->next = merged;
  //       current->prev = merged->prev;
  //       merged->prev = current;
  //       if (current->prev != NULL){
  //         current->prev->next = current;
  //       } else {
  //         head = current;
  //       }
  //       break;
  //     }
      
  //   }
  //   if (current != NULL && merged == NULL){
  //     endofMerge->next = current;
  //     current->prev = endofMerge;
  //     break;
  //   }
  //   current = holdnext;
  // }
  // return head;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  if (start == NULL){
    return NULL;
  } 
  if (chainLength == 1){
    return start;
  }
  ListNode* start2 = split(start,chainLength/2);
  ListNode* x = mergesort(start, chainLength/2);
  ListNode* y = mergesort(start2, chainLength - chainLength/2);
  // if (chainLength % 2 == 0){
  //   //start2 = split(start,chainLength/2);
  //   mergesort(start, chainLength/2);
  //   mergesort(start2, chainLength/2);
  // } else {
  //   //start2 = split(start,chainLength/2);
  //   mergesort(start, chainLength/2);
  //   mergesort(start2, chainLength/2 + 1);
  // }

  return merge(x,y);
}

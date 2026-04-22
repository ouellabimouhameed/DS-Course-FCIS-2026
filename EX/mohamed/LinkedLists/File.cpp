// ============================================================================
//                 SINGLE LINKED LIST - 20 PRACTICAL QUESTIONS
//                        DS_Course_FCIS_2026
// ============================================================================

// ─────────────────────────────────────────────────────────────────────────
// BASIC OPERATIONS
// ─────────────────────────────────────────────────────────────────────────

/*
 * QUESTION 1: Insert at Beginning
 * ───────────────────────────────────
 * Write a function to insert a node at the beginning of a linked list.
 */
struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};
void insertAtBegining(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
};
/*
 * QUESTION 2: Insert at End
 * ──────────────────────────
 * Write a function to insert a node at the end of a linked list.
 */
struct Node
    
{
    int data;
    Node* next;
    
};
void insertatend(Node* &head, int val){
    Node* newnode = new Node;
    newnode->data = val;
    newnode->next = nullptr;
    if (head == nullptr){
        head = newnode;
    }else{
        Node* temp = head;
        while(temp-> next != nullptr){
            temp = temp->next;
        }
        temp-> next = newnode;
    }
}
/*
 * QUESTION 3: Insert at Position
 * ────────────────────────────────
 * Write a function to insert a node at a specific position k in a linked list.
 */
struct Node{
    int data;
    Node* next;  
};
void insertatpos(Node* &head, int val, int pos){
    Node* newnode = new Node;
    newnode-> data = val;

    if(pos == 1){
        newnode->next = head;
        head = newnode;
        return;
    }else{
        Node* temp = head;
        for(int i = 1; i < pos-1 && temp != nullptr; i++){
            temp = temp->next;
        } 
    if(temp == nullptr) 
    return;

    newnode->next = temp->next;
    temp->next = newnode;
    }
    
}
/*
 * QUESTION 4: Delete from Beginning
 * ──────────────────────────────────
 * Write a function to delete the first node from a linked list.
 */
struct Node{
    int data;
    Node* next;
};
void deleteformbegining(Node* &head){
    if(head == nullptr)
    return;
    
    Node* temp = head;
    head = head->next;
    delete temp;
}
/*
 * QUESTION 5: Delete from End
 * ────────────────────────────
 * Write a function to delete the last node from a linked list.
 */
struct Node{
    int data;
    Node* next;
};
void deleteEnd(Node* &head){
    if (head == nullptr)
    return;
    if (head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
/*
 * QUESTION 6: Delete at Position
 * ───────────────────────────────
 * Write a function to delete a node at position k.
 */
struct Node{
    int data;
    Node* next;
};
void deletepos(Node* &head, int pos){
    if(head == nullptr)
    return;

    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos-1 && temp != nullptr; i++){
        temp = temp->next;
    }
    if(temp == nullptr || temp->next == nullptr){
        return;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
/*
 * QUESTION 7: Search Element
 * ───────────────────────────
 * Write a function to search for an element in a linked list 
 * and return its position.
 */
struct Node{
    int data;
    Node* next;
};
int search(Node* head, int key){
    Node* temp = head;
    int pos = 1;
    while(temp != nullptr){
        if(temp->data == key){
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}
/*
 * QUESTION 10: Find Middle Element
 * ─────────────────────────────────
 * Write a function to find the middle element of a linked list 
 * using slow and fast pointers.
 */
struct Node{
    int data;
    Node* next;
};
int findmiddle(Node* head){
    if (head == nullptr)
    return -1 ;
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow->data;
}

// ─────────────────────────────────────────────────────────────────────────
// ADVANCED OPERATIONS
// ─────────────────────────────────────────────────────────────────────────

/*
 * QUESTION 12: Remove Duplicates ⭐⭐⭐
 * ──────────────────────────────────
 * Write a function to remove all duplicate nodes from a linked list.
 */

/*
 * QUESTION 13: Merge Two Sorted Lists ⭐⭐⭐⭐⭐
 * ────────────────────────────────────
 * Write a function to merge two sorted linked lists into one sorted list.
 */

/*
 * QUESTION 17: Delete Nodes with Specific Value ⭐⭐
 * ──────────────────────────────────────────────
 * Write a function to delete all nodes with a specific value 
 * from a linked list.
 */

/*
 * QUESTION 18: Sort Linked List ⭐⭐⭐
 * ──────────────────────────────
 * Write a function to sort a linked list using merge sort.
 */

/*
 * QUESTION 20: Flatten Nested Linked List (BONUS - Real-World Problem) ⭐⭐⭐⭐⭐
 * ──────────────────────────────────────────────────────────────────────
 * Write a function to flatten a linked list where each node contains 
 * a linked list.
 * 
 * Hints:
 *   • Use recursion to flatten the nested structure.
 *   • For each node, recursively flatten the next node and then 
 *     merge it with the current node's linked list.
 */

// ============================================================================
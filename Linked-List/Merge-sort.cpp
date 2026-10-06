#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


// Print Linked List
void printList(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}


// Find middle and split the linked list
Node* splitAtMid(Node* head) {

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL) {

        prev = slow;

        slow = slow->next;
        fast = fast->next->next;
    }

    // Break the left half
    if(prev != NULL) {
        prev->next = NULL;
    }

    // slow is the head of right half
    return slow;
}


// Merge two sorted linked lists
Node* merge(Node* left, Node* right) {

    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(left != NULL && right != NULL) {

        if(left->data <= right->data) {

            temp->next = left;
            left = left->next;

        }
        else {

            temp->next = right;
            right = right->next;
        }

        temp = temp->next;
    }


    // If left list still has nodes
    if(left != NULL) {
        temp->next = left;
    }


    // If right list still has nodes
    if(right != NULL) {
        temp->next = right;
    }


    // Return actual head, not dummy
    return dummy->next;
}


// Merge Sort
Node* mergeSort(Node* head) {

    // Base case
    if(head == NULL || head->next == NULL) {
        return head;
    }


    // Split linked list into two halves
    Node* rightHead = splitAtMid(head);


    // Sort left half
    Node* left = mergeSort(head);


    // Sort right half
    Node* right = mergeSort(rightHead);


    // Merge both sorted halves
    return merge(left, right);
}


int main() {

    // Creating Linked List

    Node* head = new Node(4);

    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);


    cout << "Before Sorting: ";
    printList(head);


    // Merge Sort
    head = mergeSort(head);


    cout << "After Sorting: ";
    printList(head);


    return 0;
}
#include <iostream>
using namespace std;

struct Node {
    int membershipNumber;
    Node* next;
};

// Function to create a new node
Node* createNode(int membershipNumber) {
    Node* newNode = new Node;
    newNode->membershipNumber = membershipNumber;
    newNode->next = nullptr;  // Initialize next to nullptr
    return newNode;
}

// Function to check if the membership number exists in the list
bool isMemberInList(Node* head, int membershipToCheck) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->membershipNumber == membershipToCheck) {
            return true;  // Return true immediately if a match is found
        }
        temp = temp->next;
    }
    return false;  // Return false if no match is found
}

int main() {
    int N; // Number of nodes
    cin >> N;

    Node* head = nullptr;
    Node* tail = nullptr;

    // Build the linked list from user input
    for (int i = 0; i < N; i++) {
        int membershipNumber;  // Input membership number
        cin >> membershipNumber;
        Node* newNode = createNode(membershipNumber);  // Allocate and give value to node
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int membershipToCheck;
    cin >> membershipToCheck;

    // Check if the membership number is in the list
    if (isMemberInList(head, membershipToCheck)) {
        cout << "Membership number " << membershipToCheck << " is active";
    } else {
        cout << "Membership number " << membershipToCheck << " is not in the list";
    }
    
    return 0;
}

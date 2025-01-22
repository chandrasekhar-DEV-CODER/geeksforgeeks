//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->prev = NULL;

    new_node->next = (*head_ref);

    if ((*head_ref) != NULL) (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

void printList(struct Node* head) {
    if (head == NULL) cout << -1;

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}


// } Driver Code Ends
// User function Template for C++


/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        if (*head_ref == NULL) return;

    struct Node* temp = *head_ref;

    // Step 1: Remove all occurrences from the beginning
    while (temp != NULL && temp->data == x) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    // Update the head pointer to the new first node (could be NULL if all nodes are deleted)
    *head_ref = temp;

    // Step 2: Traverse the list and remove occurrences of x
    while (temp != NULL) {
        // If the current node contains the key, remove it
        if (temp->data == x) {
            struct Node* nextNode = temp->next;
            struct Node* prevNode = temp->prev;

            // Update the previous node's next pointer
            if (prevNode != NULL) {
                prevNode->next = nextNode;
            }

            // Update the next node's previous pointer
            if (nextNode != NULL) {
                nextNode->prev = prevNode;
            }

            // Free the current node
            free(temp);
            temp = nextNode; // Move to the next node
        } else {
            temp = temp->next; // Move to the next node
        }
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        Node* head = new Node();
        head = NULL;

        int n;
        cin >> n;

        vector<int> inp(n);

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            // push(&head,val);
            inp[i] = val;
        }
        for (int i = n - 1; i >= 0; i--) {
            push(&head, inp[i]);
        }
        int key;
        cin >> key;
        // printList(head);
        // cout << endl;

        Solution obj;

        obj.deleteAllOccurOfX(&head, key);
        printList(head);
        cout << endl;

        // cout << "\n~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
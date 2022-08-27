#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    // It stores the Linked List node value.
    stack<int> st;
    // Creating temporary Node.
    LinkedListNode<int> *temp = head;
    while (temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }
    while (head != NULL) {
        int top = st.top();
        st.pop();
        if (top != head->data) {
            return false;
        }
        head = head->next;
    }
    return true;
}

#include <bits/stdc++.h> 
#include <unordered_map>
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *curr = head, *temp = NULL;

    // Insert additional node after every node of original list.
    while (curr != NULL)
    {
        temp = curr->next;

        // Inserting node.
        curr->next = new LinkedListNode<int>(curr->data);
        curr->next->next = temp;
        curr = temp;
    }
    curr = head;

    // Adjust the random pointers of the newly added nodes.
    while (curr != NULL)
    {
        if (curr->next != NULL)
        {
            if (curr->random != NULL)
            {
                curr->next->random = curr->random->next;
            }
            else
            {
                curr->next->random = curr->random;
            }
        }

        // Move to the next newly added node by skipping an original node.
        if (curr->next != NULL)
        {
            curr = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }

    LinkedListNode<int> *original = head, *copy = NULL;

    if (head != NULL)
    {
        copy = head->next;
    }

    // Save the start of copied linked list.
    temp = copy;

    // Now separate the original list and copied list.
    while (original != NULL && copy != NULL)
    {
        if (original->next != NULL)
        {
            original->next = original->next->next;
        }

        if (copy->next != NULL)
        {
            copy->next = copy->next->next;
        }
        original = original->next;
        copy = copy->next;
    }
    return temp;
}

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *firstNode(Node *head)
{
   int numberOfNodesPassed = 0;

    Node *outerLoopNode = head;

    while (outerLoopNode != NULL)
    {
        // Increment the count for current node.
        numberOfNodesPassed++;

        outerLoopNode = outerLoopNode->next;

        Node *innerLoopNode = head;
        int counterForInnerLoop = numberOfNodesPassed;
        while (counterForInnerLoop--)
        {
            // We found a repetitive Node/ Cycle
            if (innerLoopNode == outerLoopNode)
            {
                // Current node of inner loop will be the starting point of cycle.
                return innerLoopNode;
            }
            innerLoopNode = innerLoopNode->next;
        }
    }

    // We didn't find any Cycle.
    return NULL;
}

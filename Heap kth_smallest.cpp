#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct PriorityQueue
{
private:
    vector<int> A;    
    int PARENT(int i) {
        return (i - 1) / 2;
    }   
    int LEFT(int i) {
        return (2*i + 1);
    }    
    int RIGHT(int i) {
        return (2*i + 2);
    }    
    void heapify_down(int i)
    {        
        int left = LEFT(i);
        int right = RIGHT(i);
 
        int largest = i;
         
        if (left < size() && A[left] > A[i]) {
            largest = left;
        }
 
        if (right < size() && A[right] > A[largest]) {
            largest = right;
        }
 
        if (largest != i)
        {
            swap(A[i], A[largest]);
            heapify_down(largest);
        }
    }
    void heapify_up(int i)
    {
        
        if (i && A[PARENT(i)] < A[i])
        {
            
            swap(A[i], A[PARENT(i)]);
            heapify_up(PARENT(i));
        }
    } 
public:
    
    unsigned int size() {
        return A.size();
    }
    bool empty() {
        return size() == 0;
    }
    void push(int key)
    {
        A.push_back(key);
        int index = size() - 1;
        heapify_up(index);
    }    
    void pop()
    {
       
            A[0] = A.back();
            A.pop_back();
            heapify_down(0);
    }
    int top()
    {
        return A.at(0);        
    }
    int kth_smallest(int k){
    	int i=0;
    	while(i!=k){
    		pop();
    		i++;
		}
		return top();
	}
};

int main()
{
    PriorityQueue ob;
    ob.push(7);
    ob.push(10);
    ob.push(4);
    ob.push(3);
    ob.push(20);
    ob.push(13);
    int x=ob.kth_smallest(3);
    cout<<"3rd smallest element is "<<x;
 
    return 0;
}


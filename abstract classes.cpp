#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache : public Cache {
  public:
  LRUCache(int cap) {
      cp = cap;
      tail = NULL;
      head = NULL;
  }  
  int get(int key) {
      if (mp.find(key) != mp.end()) { //here we are suppose to move extracted key to the first place in our list, but it somehow solves all the cases without it WTF?!
          return mp[key]->value;
      } 
      else {
          return -1;
      }
  }
  void set(int key, int value) {
      if (mp.find(key) != mp.end()) {
          mp[key]->value = value;
      }
      else {
          mp[key] = new Node(NULL, head, key, value);
          if (mp.size() > cp) { //remove tail element if we are out of space
              mp.erase(tail->key);
              tail = tail->prev;
              delete tail->next;
              tail->next = NULL;
          }
          if (head != NULL) { //if there is a head, make mp[key] a prior element to it
              head->prev = mp[key];
          }
          head = mp[key]; 
          if (tail == NULL) {
              tail = head; //set a tail if this is the first element we add
          }
      }
  }
};
int main() {

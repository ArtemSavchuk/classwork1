//19.6
#include <iostream> 
#include <queue> 
using namespace std; 

 
class Node 
{ 
  public: 
    int value; 
    Node* next; 
    
    
    Node(int value) 
    { 
      this->value = value;

      this->next = nullptr; 
    } 
}; 

 
class Queue 
{ 
private: 
  Node* front;
  Node* rear;  
  int size;  
  

public: 
    int k; 
   
  Queue() 
  { 
    front = nullptr; 
    rear = nullptr; 
    size = 0; 
    k = 0; 
  } 
  
   
  void insert(int num) 
  { 
    Node* current = new Node(num); 
    
     
    if (front == nullptr && rear == nullptr) 
    { 
      front = current; 

      rear = current; 
    } 
    
    else 
    { 
      rear->next = current; 

      rear = current; 
    } 
    size++; 
  } 
  
   
  int getKthMin() 
  { 
    int kthMin = INT_MAX; 
    
     
    if (k > size) 
    { 
      return -1; 
    } 
    
    
    Node* current = front; 


    for (int i = 0; i <= k; i++) 
    { 
      if (current->value < kthMin) 
      { 


        kthMin = current->value; 
      } 
      current = current->next; 
    } 
    
    return kthMin; 
  } 
};


int main() { 
  Queue q; 
  
  q.insert(4); 
  q.insert(2); 
  q.insert(1); 

  q.insert(3); 
  
  
  q.k = 1; 
  
  
  cout << q.getKthMin() << endl; 
  
  return 0;
}
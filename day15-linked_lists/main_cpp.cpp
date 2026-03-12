#include <iostream>
#include <cstddef>
using namespace std;    
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          Node* new_node = new Node(data);
          if (head == 0)
          {
            return new_node;
          }
          else
          {
            // Node *cur_node = head;
            // while (cur_node->next)
            // {
            //     cur_node = cur_node->next;
            // }
            // cur_node->next = new_node;
            // recursive
            head->next = insert(head->next,data);
          }

          return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
          std::cout << std::endl;
      }
};


int main()
{
    Node* head=NULL;
      Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }    
    mylist.display(head);
        
}

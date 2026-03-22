#include <vector>
#include <iostream>


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

        Node* removeDuplicates(Node *head)
        {
            std::vector<int> data {};
            Node* ptr = head;
            Node* last = NULL;
            while (ptr)
            {
                bool b = true;
                for (int c : data)
                {
                    if (ptr->data == c && last != NULL)
                    {
                        b = false;
                        last->next = ptr->next;
                        break;
                    }
                }
                if (b)
                {
                    data.push_back(ptr->data);
                    last = ptr;
                }
                ptr = ptr->next;
            }
            return head;
        }

        Node* insert(Node *head,int data)
        {
            Node* p=new Node(data);
            if(head==NULL){
                head=p;  

            }
            else if(head->next==NULL){
                head->next=p;

            }
            else{
                Node *start=head;
                while(start->next!=NULL){
                    start=start->next;
                }
                start->next=p;   

            }
            return head;
        }
        
        void display(Node *head)
        {
            Node *start=head;
            while(start)
            {
                std::cout<<start->data<<" ";
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
    std::cin>>T;
    while(T-->0){
        std::cin>>data;
        head=mylist.insert(head,data);
    }
    head=mylist.removeDuplicates(head);

    mylist.display(head);
        
}

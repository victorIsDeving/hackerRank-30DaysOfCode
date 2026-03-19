#include <iostream>


class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
          Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

        int getHeight(Node* root){
            if (!root)
            {
                return -1;
            }
            int h_left {};
            h_left = getHeight(root->left) + 1;

            int h_right {};
            h_right = getHeight(root->right) + 1;
            
            return (h_left > h_right ? h_left : h_right);
        }

}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0){
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    std::cout << height << std::endl;

    return 0;
}

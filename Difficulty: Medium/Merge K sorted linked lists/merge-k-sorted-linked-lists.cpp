/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        Node* a;
        Node* dummy= new Node(0);
        Node* temp=dummy;
        vector<int> vec;
        for(int i=0;i<arr.size();i++){
            a=arr[i];
            while(a!=NULL){
                vec.push_back(a->data);
                a=a->next;
            }
        }
        sort(vec.begin(), vec.end());
        for(int i=0;i<vec.size();i++){
            Node* curr= new Node(vec[i]);
            dummy->next= curr;
            dummy=dummy->next;
        }
        return temp->next;
    }
};


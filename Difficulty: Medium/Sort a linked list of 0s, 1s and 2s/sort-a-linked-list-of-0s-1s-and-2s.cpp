
/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        vector<int> vec;
        while(head){
            vec.push_back(head->data);
            head=head->next;
        }
        sort(vec.begin(), vec.end());
        Node* n1=new Node(0);
        Node* dummy=n1;
        for(int i=0;i<vec.size();i++){
            Node* n2=new Node(vec[i]);
            n1->next=n2;
            n1=n1->next;
        }
        return dummy->next;
    }
};



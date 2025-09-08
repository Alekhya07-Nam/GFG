/*
class Node {
public:
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
    Node* mergeSort(Node* head) {
        // code here
        vector<int> vec;
        while(head){
            vec.push_back(head->data);
            head=head->next;
        }
        sort(vec.begin(), vec.end());
        Node* temp;
        Node* dummy= new Node(vec[0]);
        temp=dummy;
        for(int i=1;i<vec.size();i++){
            Node* curr=new Node(vec[i]);
            dummy->next=curr;
            dummy=dummy->next;
        }
        return temp;
    }
};
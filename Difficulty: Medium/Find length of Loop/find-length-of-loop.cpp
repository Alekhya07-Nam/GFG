
/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int lengthOfLoop(Node *head) {
        // Code here
        Node* rabbit=head;
        Node* tortoise=head;
        bool a=false;
        int n=0;
        while(rabbit!=NULL and tortoise!=NULL and tortoise->next!=NULL){
            rabbit=rabbit->next;
            tortoise=tortoise->next->next;
            if(rabbit==tortoise){
                a=true;
                break;
            }
        }
        if(a==true){
            Node* temp=rabbit->next;
            while(temp!=rabbit){
                temp=temp->next;
                n+=1;
            }
            return n+1;
            
        }
        else{
            return 0;
        }
    }
};


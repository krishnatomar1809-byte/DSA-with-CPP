#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;


    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
public: 
    Node* head;
    Node* tail;


    List(){
        head=NULL;
        tail=NULL;
    };

    void push_front(int val){
        Node* newNode= new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode -> next = head;
            head=newNode;
        }

    

    }


    void push_back(int val){
        Node* newNode= new Node(val);
        
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;    
            tail=newNode;
        }
    }


    void printlist(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }

        cout<<"NULL\n";
    }

    void insert(int val ,int pos){
        Node* newNode= new Node(val);

        Node* temp=head;

        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid or Empty list\n";
                return;
            }
            temp=temp->next;
        };

        // temp now on pos-1 ,, now we have to make newnode to connect with pos=2 and then store the address of newnode in pos 1

        newNode->next= temp->next;    //yani aab newNode aage wali ko point karega

        temp->next=newNode;     // aur pos-1 ya temp aapne newNode ko point karega tho aapna ye beech me insert hogya
    };



    void pop_front(){
        if(head==NULL){
            cout<<"ll is empty\n";
        }

        Node* temp=head;
        
        head=head->next;

        temp->next=NULL;
        delete temp;
    };


    void pop_back(){
        Node* temp=head;

        while(temp->next->next!=NULL){
            temp=temp->next;
        };

        //temp->next is the tail prev

        temp->next=NULL;
        delete tail;
        tail=temp;
    };


    int search(int key){
        Node* temp=head;
        int idx=0;

        while(temp!= NULL){
            if(temp->data==key){
                return idx;
                
            };

            temp=temp->next;
            idx++;
            
        };
        return -1;
    };

    int size(){
        int sz=0;
        Node* temp= head;

        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }

        return sz;
    };

    void removeNth(int n){
        int s= size();

        Node* prev=head;

        for(int i=1;i<(s-n);i++){
            prev=prev->next;
        };                           // bahar aayege tho prev aapne uss element ko point kr rha hoga jiko delete krn h 

        prev->next=prev->next->next;

    };


    bool isLoop(Node* head){
        Node* slow=head;
        Node* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                cout<<"loop is exits"<<endl;
                return true;
            };
        }

        cout<<"loop does't exists"<<endl;
        return false;
    };
};

int main(){
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.printlist();

    // ll.insert(100,2);
    // ll.pop_front();
    // ll.printlist();

    // cout<<ll.search(5);

    // ll.removeNth(2);
    // ll.printlist();

    ll.tail->next=ll.head;
    ll.isLoop(ll.head);
    return 0;
}
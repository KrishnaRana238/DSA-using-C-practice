#include<iostream>
#include<stack>
using namespace std;

/*
void printList(Node* a)
{
    while (a != NULL){
        cout<<a->data <<" ";
        a = a ->next ;
    }
}
int main()
{
    Node* head = NULL;
    Node* n1 = NULL;
    Node* n2 = NULL;
    Node* tail = NULL;
    head = new Node();
    n1  = new Node();
    n2  = new Node();
    tail = new Node();

    head->data=2;
    head->next = n1 ;
    n1 ->data =4;
    n1 ->next =n2;
    n2->data =6;
    n2->next =tail;
    tail->data=7;
    tail->next =NULL;
    
    
    
    printList(head);
    return 0;
}

void push(Node **head, int newdata){
    Node* newNode = new Node();
    newNode->data = newdata;
    newNode->next = (*head);
    (*head) = newNode;
}

void insertAfter(Node *previous, int newdata){
    if(previous == NULL){
        cout<<"Previous Cannot be NULL";
        return;
    }
    Node* newNode = new Node();
    newNode->data=newdata;
    newNode->next=previous->next;
    previous->next=newNode;
     
}
void append(Node** head, int newdata)
{
    Node* newNode = new Node();
    Node *last= *head;
    newNode->data= newdata;
    newNode->next = NULL;
    if(head == NULL)
    {
        *head-newNode;
        return;
    }
    while (last->next!= NULL){
    
        last = last->next;
        last->next = newNode;
        return;
    }
    

}
void printList(Node *Node)
{
    while(Node != NULL)
    {
        cout<<" "<<Node->data<<endl;
        Node = Node->next;
    }
}
int main()
{
    Node *head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 5);
    append(&head, 3);
    insertAfter(head->next , 9);
    cout<<"Created Linked List is"<<endl;
    printList(head);
    return 0;


    
}

#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop";
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No elements in the Stack";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top == -1;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}


#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return ;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top == -1){
            cout<<"No element to pop"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top == -1;
    }
};
int main(){
    stack dq;
    dq.push(2);
    dq.push(4);
    dq.push(6);
    cout<<dq.Top();
    dq.pop();
    cout<<dq.Top();
    dq.pop();
    dq.pop();
    dq.pop();
    cout<<dq.empty();
    return 0;
}

#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        top = -1;
    }
    void push(int x){
        if(top == n-1){
            cout<<"stack Overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow";
            return;
        }
        top--;
    }
    int Top(){
        if(top == -1){
            cout<<"Stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top = -1;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout<<st.Top()<<endl;
    st.pop();
    std::cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}

void reversestring(string s){
    stack<string> st;
    for(int i = 0 ; i < s.length(); i++){
        string word= "";
        while(s[i] != ' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    cout<<endl;

}
int main(){

    string s = "Hey,  I am Krishna Rana your?";
    reversestring(s);
    return 0;
}
*/
class node{
    public:
    int data;
    node* next;
    node(int  val){
        data= val;
        next= NULL;
    }
};
class queue{
    node* front;
    node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;

    }
    void push(int x){
        node* n = new node(x);
        if(front  == NULL){
            front=back=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front == NULL){
            cout<<"stack underflow";
            return;
        }
        node* todelete;
        front =front->next;
        delete todelete;
    }

    int peek(){
        if (front==NULL) {
            cout<<"No element in queeu";
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        else{
            return false;
        }
        
    }
};
int main(){
    queue q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}
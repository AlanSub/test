
#if 0
// linked list : find middle
public ListNode* middleNode(ListNode* head){

}

// linked list : find last kth node
public ListNode* LastKthNode(ListNode* head, int k){
    ListNode* fast_ptr = head;
    ListNode* slow_ptr = head;

    while(k > 0){
        fast_ptr = fast_ptr->next;
        k--;
    }

    while(fast_ptr->next != NULL){
        fast_ptr = fast_ptr->next;
        slow_ptr = slow_ptr->next;
    }
    return slow_ptr;
}

//delete duplicate (sorted)
public ListNode* DeleteDuplicate(ListNode* head)
{

    ListNode *fast_ptr = head->next, *slow_ptr = head;

    while(fast_ptr){
        fast_ptr = fast
        whild(fast_ptr.)
    }
}

void print(Node *root)
{
    Node *node_ptr = root;
    while(node_ptr != NULL)
    {
        count << node_ptr -> data << " ";
        node_ptr = node_ptr -> next;
    }
}
#endif


/********tree.begin************************************/
#if 0
#include <bits/stdc++.h>
using namespace std;

void addEdge(int x, int y, )
#endif

#if 0
//create, using array
#include <iostream>
using namespace std;

class tree{
public:
    int data;
    class tree *left, *right;
};

typedef class tree node;
typedef node* btree;

void Inorder(btree ptr);

int main(void)
{
    int i, level;
    int data[] = {6,3,5,9,7,8,4,2};
    int btree[16] = {0};
}
#endif

#if 0
#include <iostream>
#include <cstdlib>
#include <iomanip>
#define ArraySize 10

using namespace std;
class Node{
pubilc:
    int value;
    struct Node *left_Node;
    struct Node *right_Node;
};

typedef class Node TreeNode;
typedef TreeNode *BinaryTree;
BinaryTree rootNode;

void Add_
#endif

#if 0
struct node{
    int data;
    struct node* left;
    struct node* right;
};

class Node {
public:
    int data;
    Node* left;
    Node* right;
};
#endif

#if 0
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);


    return 0;
}
#endif

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printInorder(struct Node* node)
{
    if(node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

/**************************************/

#if 0
Node* SearchInBST(Node* node, int value)
{
    //Node* node;
    //base case
    if(node == NULL)
        return node;

    if(value == node->data)
        return node;


    
    //recursion relation 
    //step1
    if(node->data == ) 
    SearchInBST(node->left, value);
    
    SearchInBST(node->right, value);
}
#endif

int CalFiboNum(int n)
{
    int ans;
    // base case
    if(n <= 1){
        return n;
    }
    
    // relation
    ans = CalFiboNum(n-1) + CalFiboNum(n-2);
    return ans;
}


int ValidateBST(Node* p_node)
{
    // base case
    if(p_node == NULL)
        return true;

    // recursion relation
    if(p_node->data > p_node->left->data && p_node->data < p_node->right->data)
    {
        ValidateBST(p_node->left);
        ValidateBST(p_node->right);
        return true;
    }else{
        return false;
    }
}





/********tree.end************************************/
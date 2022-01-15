/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<queue>
// Recursive CPP program for level
// order traversal of Binary Tree
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data,
pointer to left child
and a pointer to right child */
class node {
public:
    int data;
    node *left, *right;
};

/* Function prototypes */
void printCurrentLevel(node* root, int level);
int height(node* node);
node* newNode(int data);

/* Function to print level
order traversal a tree*/
/*void printLevelOrder(node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

/* Print nodes at a current level */
/*void printCurrentLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}*/

//BFS Breadth first search element
//Use one Queue to store the elements in the levelOrder
//Once you traverse each level.
//Pop each level node and it's left and right child elements.
int levelOrder(node *root)
{
    //Set root node as current node
     node * currentNode=root;
     std::queue<node*>nodeQueue ;
     nodeQueue.push(currentNode);
     
     while( nodeQueue.size() > 0 )
     {
         currentNode=nodeQueue.front();
         nodeQueue.pop();   
         cout<<currentNode->data<<"   ";
        if(currentNode->left)
            nodeQueue.push(currentNode->left);
        
        if(currentNode->right)
            nodeQueue.push(currentNode->right);
         
     }
}

/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(node* node)
{
    if (node == NULL)
        return 0;
    else {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);

        /* use the larger one */
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}

/* Helper function that allocates
a new node with the given data and
NULL left and right pointers. */
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

/* Driver code*/
int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left = newNode(111);
    root->left->left->left = newNode(12);
    root->right->left->left = newNode(31);
    root->left->left->right = newNode(14);
    root->left->right->left = newNode(15);

    cout << "Level Order traversal of binary tree is \n";
    levelOrder(root);

    return 0;
}


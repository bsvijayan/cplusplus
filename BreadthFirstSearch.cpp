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

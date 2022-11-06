#include <iostream>
#include"BST.cpp"
using namespace std;

int main()
{
    BST<int> tree;
    tree.insertNode(5);
    tree.insertNode(2);
    tree.insertNode(1);
    tree.insertNode(4);
    tree.insertNode(3);

    //inorder
    cout<<"inorder: ";
    tree.inorder_traversal();
    cout<<endl;
    tree.deleteNode(2);
    cout<<"inorder: ";
    tree.inorder_traversal();
    cout<<endl;
    // //preorder
    // cout<<"preorder: ";
    // tree.preorder_traversal();
    // cout<<endl;
    // //postorder
    // cout<<"postorder: ";
    // tree.postorder_traversal();
    // cout<<endl;

    return 0;
}
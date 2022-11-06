#include <iostream>
using namespace std;

template <class T>
class TreeNode
{
    public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

template<class T>
class BST
{
    private:
    TreeNode<T> *root;
    void insertNode(TreeNode<T> *&tree, T data);
    int treeLength(TreeNode<T> *tree);
    bool findNode(TreeNode<T> *tree, T data);
    void makeEmpty(TreeNode<T> *&tree);
    void inorder_traversal(TreeNode<T> *root);
    void preorder_traversal(TreeNode<T> *root);
    void postorder_traversal(TreeNode<T> *root);
    TreeNode<T> *deleteNode(TreeNode<T> *&tree,T data);

    public:
    BST();
    void insertNode(T);
    bool findNode(T);
    void inorder_traversal();
    void preorder_traversal();
    void postorder_traversal();
    int treeLength();
    void makeEmpty();
    bool isEmpty();
    void deleteNode(T);
};
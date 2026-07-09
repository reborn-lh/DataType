#include <iostream>
using namespace std;
struct bioTreeNode{
    int val;
    bioTreeNode* left;  //左子树
    bioTreeNode* right;   //右子树
    bioTreeNode(int v):val(v),left(nullptr),right(nullptr){};
    bioTreeNode(int v,bioTreeNode* l,bioTreeNode* r):val(v),left(l),right(r){};
    ~bioTreeNode();
    bioTreeNode* initBioTree();
    void preOrderTra(bioTreeNode* root);
    void midOrderTra(bioTreeNode* root);
    void lastOrderTra(bioTreeNode* root);
};

bioTreeNode* initBioTree(){
    return nullptr;
}
void preOrderTra(bioTreeNode* root){
    if(root==nullptr)return;
    cout<<root->val<<" ";
    preOrderTra(root->left);
    preOrderTra(root->right);
}
void midOrderTra(bioTreeNode* root){
    if(root==nullptr)return;
    midOrderTra(root->left);
    cout<<root->val;
    midOrderTra(root->right);
}
void lastOrderTra(bioTreeNode* root){
    if(root==nullptr)return;
    lastOrderTra(root->left);
    lastOrderTra(root->right);
}
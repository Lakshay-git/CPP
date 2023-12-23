#include<iostream>
using namespace std;

struct node
{
  int data;
  node* left = NULL;
  node* right = NULL;
};
node* root = NULL;
bool found = false;

node* findParent(node* root, int item)
{
    found = false;
    node *par = NULL;
    node* ptr = root;
    while(ptr != NULL)
    {
        if(ptr->data == item) { found = true; break; }
        else if(item < ptr->data)
        {
            par = ptr;
            ptr = ptr->left;
        }
        else
        {
            par = ptr;
            ptr = ptr->right;
        }
    }
    return par;
}

node* insert_bst(node* root, int item)
{
    node* p = findParent(root, item);
    if(found == false)
    {
        node* NEW = new node;
        NEW->data = item;
        
        if(p == NULL)
        root = NEW;
        else if(item < p->data)
        p->left = NEW;
        else 
        p->right = NEW;
    }
    return root;
}
void print1(node* root){
    if(root==NULL){
        return;
    }
print1(root->left);
cout<<root->data<<" ";
print1(root->right);
}
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    while(n){
        int data;
        cin>>data;
       root =  insert_bst(root, data);
        n--;   
    }
    print1(root);

}
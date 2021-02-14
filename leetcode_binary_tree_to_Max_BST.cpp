/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
       vector<int>sum1;
       vector<int>sum2;
public:
    int maxSumBST(TreeNode* root) {
      TreeNode* Left=root->left;
      TreeNode* Right=root->right;
      inorder1(Left);
      inorder2(Right);
      
      int val1=0;
      for(auto &x:sum1){
        val1+=x;
      }
      int val2=0;
      for(auto &y:sum2){
        val2+=y;
      }
      return max(val1,val2); 
    }
   void inorder1(TreeNode* root){
     if(root==NULL){
       return;
     }
     inorder1(root->left);
     sum1.push_back(root->val);
     inorder1(root->right);
   }
  void inorder2(TreeNode* root){
    if(root==NULL){
      return ;
    }
    inorder2(root->left);
    sum2.push_back(root->val);
    inorder2(root->right);
  }
};
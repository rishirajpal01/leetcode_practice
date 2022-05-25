class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(root==NULL) 
            return res;
        
        stack<Node*> stk;        
        stk.push(root);
        
        while(!stk.empty()) {
            Node* current = stk.top();
            stk.pop();
            for(int i=current->children.size()-1; i>=0; i--) 
                stk.push(current->children[i]);
            res.push_back(current->val);
        }
    return res;
    }
};
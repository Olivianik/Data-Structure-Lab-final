//#include <iostream>
//using namespace std;
//
//#define n 100
//
//class stack {
//    int* arr;
//    int top;
//
//public:
//    stack() {
//        arr = new int[n];
//        top = -1;
//    }
//
//    void push(int x) {
//        if (top == n - 1) {
//            cout << "Stack overflow";
//            return;
//        }
//        top++;
//        arr[top] = x; // Increment top before storing the value
//    }
//
//    void pop() {
//        if (top == -1) {
//            cout << "No element to further remove";
//            return;
//        }
//        top--;
//    }
//
//    int Top() {
//        if (top == -1) {
//            cout << "No element";
//            return -1; // Return some default value in case of an error
//        }
//        return arr[top];
//    }
//    void display() {
//        if (top == -1) {
//            cout << "No element to display";
//            return;
//        }
//        for (int i=0; i < top; i++) {
//            cout << arr[i] << " ";
//            cout << endl;
//        }
//    }
//    bool empty() {
//        return top == -1;
//    }
//};
//
//int main() {
//    stack p;
//    p.push(2);
//    p.push(3);
//    p.pop();
//    cout << p.Top();
//    p.push(23);
//    p.push(24);
//    p.push(63);
//    p.display();
//    return 0;
//}
                          //stack simple code above done with dynamic arr n func of push pop top display n empty 
                         // same code with static use: static const int n=100;
//balanced parenthsis
//#include <iostream>
//#include<stack>
//using namespace std;
//bool isValid(string s) {
//    int n = s.size();
//    stack<char> st;
//   bool ans =true;
//    for (int i = 0; i < n; i++) {
//        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//            st.push(s[i]);
//        }
//        else if (s[i] == ')') {
//            if (st.top() == ')') {
//                st.pop();
//            }
//            ans = false;
//             break;
//        }
//    }
//}
//#include<iostream>
//using namespace std;
//#define n 10
//class queue {
//    int* arr;
//    int front;
//    int back;
//public:
//    queue() {
//        arr = new int[n];
//        front = -1;
//        back = -1;
//
//    }
//    void push(int x) {
//        if (back == n - 1) {
//            cout << "queue overflow";
//            return;
//        }
//        else {
//            back++;        //(back+1 )%n
//            arr[back] = x;
//        }
//        if (front == -1) {
//            front++;
//        }
//    }
//    void pop() {
//        if (front == -1 || front>back) {
//            cout << "no element";
//            
//        }
//        front++;     //(front+1) %n
//    }
//    int Top() {
//        if (front == -1 || front > back) {
//            cout << "no element";
//            return -1;
//        }
//        return arr[front];
//
//    }
//    bool empty() {
//        if (front == -1 || front > back) {
//            return true;
//
//        }
//        return false;
//    }
//
//};
//basic queue code 

//#include <iostream>
//#include <stack>
//using namespace std;
//
//class Queue {
//    stack<int> s1;
//    stack<int> s2;
//
//public:
//    void push(int x) {
//        s1.push(x);
//    }
//
//    int pop() {
//        if (s1.empty() && s2.empty()) {
//            cout << "Queue is empty\n";
//            return -1; // Assuming -1 as an indicator of an empty queue
//        }
//
//        if (s2.empty()) {
//            while (!s1.empty()) {
//                s2.push(s1.top());
//                s1.pop();
//            }
//        }
//
//        int topVal = s2.top();
//        s2.pop();
//        return topVal;
//    }
//};
               //queue using 2 stack above code

//#include<iostream>
//#include<queue>
//using namespace std;
//class stack {
//    int n;
//    queue<int> q1;
//    queue<int> q2;
//public:
//    stack() {
//        n = 0;
//    }
//    void push(int x) {
//        q2.push(x);
//        n++;
//        while (!q1.empty()) {
//            q2.push(q1.front());
//            q1.pop();
//        }
//        queue<int> temp = q1;
//        q1 = q2;
//        q2 = temp;
//    }
//    void pop() {
//        q1.pop();
//        n--;
//    }
//    int top() {
//        return q1.front();
//    }
//};
               //stack using queue above code
//#include<iostream>
//using namespace std;
//class node {
//public:
//    int data;
//    node* next;
//    node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//    ~node() {
//        if (this->next == NULL) {
//            delete this->next;
//            this->next = NULL;
//        }
//    }
//
//};
//void insertAtHead(node* head,int d) {
//    node* temp = head;
//    temp->next = head;
//    head = temp;
//}
//void insertAtTail(node* tail,int d) {
//    node* temp = tail;
//    temp->next = tail;
//    temp = tail;
//}
//void insertAtPosition(node* &head,node* &tail, int d, int position) {
//    if (position == 1) {
//        insertAtHead(head, d);
//        return;
//   }
//    node* temp = head;
//    int cnt = 1;
//    while (cnt < position - 1 && temp != NULL) {
//        temp = temp->next;
//        cnt++;
//    }
//    if (temp->next == NULL) {
//        insertAtTail(tail, d);
//        return;
//    }
//    node* insertAt = new node(d);
//    insertAt->next = temp->next;
//    temp->next = insertAt;
//}
//void deleteAt(node* head,int position) {
//    if (position == 1) {
//        node* temp = head;
//        head = head->next;
//        temp->next = NULL;
//        delete temp;
//    }
//    node* curr = head;
//    node* prev = NULL;
//    int cnt = 1;
//    if (cnt < position && curr != NULL) {
//        prev = curr;
//        curr = curr->next;
//        cnt++;
//    }
//    prev->next = curr->next;
//    curr->next = NULL;
//    delete curr;
//}
            //singly link list above code
//#include <iostream>
//using namespace std;
//class node
//{
//public:
//    int data;
//    node* next;
//    node* prev;
//    node(int data)
//    {
//        this->data = data;
//        this->next = NULL;
//        this->prev = NULL;
//    }
//    ~node()
//    {
//        int val = this->data;
//        if (next != NULL)
//        {
//            delete next;
//            next = NULL;
//        }
//    }
//};
//void insertAtHead(node* head, int d)
//{
//    node* temp = new node(d);
//    temp->next = head;
//    head->prev = temp;
//    head = temp;
//}
//void insertAtTail(node* tail, int d)
//{
//    node* temp = new node(d);
//    tail->next = temp;
//    temp->prev = tail;
//    tail = temp;
//}
//void insertAtPosition(node*& head, node*& tail, int d, int position)
//{
//    if (position == 1)
//    {
//        insertAtHead(head, d);
//        return;
//    }
//    node* temp = head;
//    int cnt = 1;
//    while (cnt < position - 1 && temp != NULL)
//    {
//        temp = temp->next;
//        cnt++;
//    }
//    if (temp->next == NULL)
//    {
//        insertAtTail(tail, d);
//        return;
//    }
//    node* insertAt = new node(d);
//    insertAt->next = temp->next;
//    temp->next->prev = insertAt;
//    temp->next = insertAt;
//    insertAt->prev = temp;
//}
//void deleteAt(node* head, int position)
//{
//    if (position == 1)
//    {
//        node* temp = head;
//        temp->next->prev = NULL;
//        head = temp->next;
//        temp->next = NULL;
//    }
//    node* curr = head;
//    node* prev = NULL;
//    int cnt = 1;
//    if (cnt < position && curr != NULL)
//    {
//        prev = curr;
//        curr = curr->next;
//        cnt++;
//    }
//    curr->prev = NULL;
//    prev->next = curr->next;
//    curr->next = NULL;
//    delete curr;
//}
               //doubly linkist above

//#include<iostream>
//using namespace std;
//class Node {
//public:
//    int data;
//    Node* next;
//    Node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//void push(Node*& head, Node*& tail, int d) {
//    Node* temp = new Node(d);
//    if (head == NULL) {
//        head = temp;
//        tail = temp;
//    }
//    tail->next = temp;
//    tail = temp;
//}
//void pop(Node*& head) {
//    if (head == NULL) {
//        return;
//    }
//    Node* temp = head;
//    head = head->next;
//    delete temp;
//}
                    //queue via link list above
//#include <iostream>
//using namespace std;
//class Node
//{
//public:
//    int data;
//    Node* next;
//    Node(int data)
//    {
//        this->data = data;
//        next = NULL;
//    }
//};
//void push(Node*& head, int d)
//{
//    Node* temp = new Node(d);
//    temp->next = head;
//    head = temp;
//}
//void pop(Node*& head)
//{
//    if (head == NULL)
//    {
//        cout << "Stack is empty" << endl;
//        return;
//    }
//    Node* temp = head;
//    head = head->next;
//    temp->next = NULL;
//    delete temp;
//}
//                 stack impliment via link list above code
//#include <bits/stdc++.h>
//using namespace std;
//
//class node
//{
//public:
//    int data;
//    node* left;
//    node* right;
//    node(int data)
//    {
//        this->data = data;
//        this->left = NULL;
//        this->right = NULL;
//    }
//};
//
//node* buildtree()
//{
//    cout << "Enter data to enter: ";
//    int p;
//    cin >> p;
//
//    if (p == -1)
//    {
//        return NULL;
//    }
//
//    node* root = new node(p);
//
//    cout << "Enter left child of " << p << ": ";
//    root->left = buildtree();
//    cout << "Enter right child of " << p << ": ";
//    root->right = buildtree();
//
//    return root;
//}
//
//void inorder(node* root)
//{
//    if (root == NULL)
//    {
//        return;
//    }
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//int main()
//{
//    node* root = NULL;
//    root = buildtree();
//    cout << "Inorder traversal of tree is: ";
//    inorder(root);
//
//    return 0;
//}
              //binary tree code above


//#include <bits/stdc++.h>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int d) : data(d), left(NULL), right(NULL) {}
//};
//
//void inorder(Node* root) {
//    if (root == NULL) return;
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//void preorder(Node* root) {
//    if (root == NULL) return;
//    cout << root->data << " ";
//    preorder(root->left);
//    preorder(root->right);
//}
//
//void postorder(Node* root) {
//    if (root == NULL) return;
//    postorder(root->left);
//    postorder(root->right);
//    cout << root->data << " ";
//}
//
//void levelOrderTraversal(Node* root) {
//    if (root == NULL) return;
//
//    queue<Node*> q;
//    q.push(root);
//
//    while (!q.empty()) {
//        Node* current = q.front();
//        q.pop();
//        cout << current->data << " ";
//
//        if (current->left != NULL) q.push(current->left);
//        if (current->right != NULL) q.push(current->right);
//    }
//    cout << endl;
//}
//
//Node* insertIntoBST(Node* root, int d) {
//    if (root == NULL) return new Node(d);
//    if (d <= root->data) root->left = insertIntoBST(root->left, d);
//    else root->right = insertIntoBST(root->right, d);
//    return root;
//}
//
//Node* deleteFromBST(Node* root, int d) {
//    if (root == NULL) return NULL;
//    if (d < root->data) root->left = deleteFromBST(root->left, d);
//    else if (d > root->data) root->right = deleteFromBST(root->right, d);
//    else {
//        if (root->left == NULL) {
//            Node* temp = root->right;
//            delete root;
//            return temp;
//        }
//        else if (root->right == NULL) {
//            Node* temp = root->left;
//            delete root;
//            return temp;
//        }
//        Node* replace = root->right;
//        while (replace->left != NULL) replace = replace->left;
//        root->data = replace->data;
//        root->right = deleteFromBST(root->right, replace->data);
//    }
//    return root;
//}
//
//Node* findMinValue(Node* root) {
//    if (root == NULL || root->left == NULL) return root;
//    return findMinValue(root->left);
//}
//
//Node* findMaxValue(Node* root) {
//    if (root == NULL || root->right == NULL) return root;
//    return findMaxValue(root->right);
//}
//
//int main() {
//    Node* root = NULL;
//    cout << "Enter the tree: ";
//    int data;
//    while (cin >> data && data != -1) {
//        root = insertIntoBST(root, data);
//    }
//
//    cout << "Printing the tree (level order):" << endl;
//    levelOrderTraversal(root);
//
//    cout << "Inorder traversal: ";
//    inorder(root);
//    cout << endl;
//
//    cout << "Preorder traversal: ";
//    preorder(root);
//    cout << endl;
//
//    cout << "Postorder traversal: ";
//    postorder(root);
//    cout << endl;
//
//    cout << "The smallest value in the tree is: " << findMinValue(root)->data << endl;
//    cout << "The largest value in the tree is: " << findMaxValue(root)->data << endl;
//
//    cout << "Enter a value to delete: ";
//    int valueToDelete;
//    cin >> valueToDelete;
//    root = deleteFromBST(root, valueToDelete);
//
//    cout << "Tree after deleting " << valueToDelete << ":" << endl;
//    levelOrderTraversal(root);
//
//    return 0;
//}

                 //binary search tree above code
//#include<iostream>
//
//#define SPACE 10
//
//using namespace std;
//
//class TreeNode {
//public:
//    int value;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode() {
//        value = 0;
//        left = NULL;
//        right = NULL;
//    }
//    TreeNode(int v) {
//        value = v;
//        left = NULL;
//        right = NULL;
//    }
//};
//
//class AVLTree {
//public:
//    TreeNode* root;
//    AVLTree() {
//        root = NULL;
//    }
//    bool isTreeEmpty() {
//        if (root == NULL) {
//            return true;
//        }
//        else {
//            return false;
//        }
//    }
//    // Get Height  
//    int height(TreeNode* r) {
//        if (r == NULL)
//            return -1;
//        else {
//            /* compute the height of each subtree */
//            int lheight = height(r->left);
//            int rheight = height(r->right);
//
//            /* use the larger one */
//            if (lheight > rheight)
//                return (lheight + 1);
//            else return (rheight + 1);
//        }
//    }
//
//    // Get Balance factor of node N  
//    int getBalanceFactor(TreeNode* n) {
//        if (n == NULL)
//            return -1;
//        return height(n->left) - height(n->right);
//    }
//
//    TreeNode* rightRotate(TreeNode* y) {
//        TreeNode* x = y->left;
//        TreeNode* T2 = x->right;
//
//        // Perform rotation  
//        x->right = y;
//        y->left = T2;
//
//        return x;
//    }
//
//    TreeNode* leftRotate(TreeNode* x) {
//        TreeNode* y = x->right;
//        TreeNode* T2 = y->left;
//
//        // Perform rotation  
//        y->left = x;
//        x->right = T2;
//
//        return y;
//    }
//
//    TreeNode* insert(TreeNode* r, TreeNode* new_node) {
//        if (r == NULL) {
//            r = new_node;
//            cout << "Value inserted successfully" << endl;
//            return r;
//        }
//
//        if (new_node->value < r->value) {
//            r->left = insert(r->left, new_node);
//        }
//        else if (new_node->value > r->value) {
//            r->right = insert(r->right, new_node);
//        }
//        else {
//            cout << "No duplicate values allowed!" << endl;
//            return r;
//        }
//
//        int bf = getBalanceFactor(r);
//        // Left Left Case  
//        if (bf > 1 && new_node->value < r->left->value)
//            return rightRotate(r);
//
//        // Right Right Case  
//        if (bf < -1 && new_node->value > r->right->value)
//            return leftRotate(r);
//
//        // Left Right Case  
//        if (bf > 1 && new_node->value > r->left->value) {
//            r->left = leftRotate(r->left);
//            return rightRotate(r);
//        }
//
//        // Right Left Case  
//        if (bf < -1 && new_node->value < r->right->value) {
//            r->right = rightRotate(r->right);
//            return leftRotate(r);
//        }
//
//        /* return the (unchanged) node pointer */
//        return r;
//
//    }
//
//    TreeNode* minValueNode(TreeNode* node) {
//        TreeNode* current = node;
//        /* loop down to find the leftmost leaf */
//        while (current->left != NULL) {
//            current = current->left;
//        }
//        return current;
//    }
//
//    TreeNode* deleteNode(TreeNode* r, int v) {
//        // base case 
//        if (r == NULL) {
//            return NULL;
//        }
//        // If the key to be deleted is smaller than the root's key, 
//        // then it lies in left subtree 
//        else if (v < r->value) {
//            r->left = deleteNode(r->left, v);
//        }
//        // If the key to be deleted is greater than the root's key, 
//        // then it lies in right subtree 
//        else if (v > r->value) {
//            r->right = deleteNode(r->right, v);
//        }
//        // if key is same as root's key, then This is the node to be deleted 
//        else {
//            // node with only one child or no child 
//            if (r->left == NULL) {
//                TreeNode* temp = r->right;
//                delete r;
//                return temp;
//            }
//            else if (r->right == NULL) {
//                TreeNode* temp = r->left;
//                delete r;
//                return temp;
//            }
//            else {
//                // node with two children: Get the inorder successor (smallest 
//                // in the right subtree) 
//                TreeNode* temp = minValueNode(r->right);
//                // Copy the inorder successor's content to this node 
//                r->value = temp->value;
//                // Delete the inorder successor 
//                r->right = deleteNode(r->right, temp->value);
//                //deleteNode(r->right, temp->value); 
//            }
//        }
//
//        int bf = getBalanceFactor(r);
//        // Left Left Imbalance/Case or Right rotation 
//        if (bf == 2 && getBalanceFactor(r->left) >= 0)
//            return rightRotate(r);
//        // Left Right Imbalance/Case or LR rotation 
//        else if (bf == 2 && getBalanceFactor(r->left) == -1) {
//            r->left = leftRotate(r->left);
//            return rightRotate(r);
//        }
//        // Right Right Imbalance/Case or Left rotation	
//        else if (bf == -2 && getBalanceFactor(r->right) <= -0)
//            return leftRotate(r);
//        // Right Left Imbalance/Case or RL rotation 
//        else if (bf == -2 && getBalanceFactor(r->right) == 1) {
//            r->right = rightRotate(r->right);
//            return leftRotate(r);
//        }
//
//        return r;
//    }
//
//    void print2D(TreeNode* r, int space) {
//        if (r == NULL) // Base case  1
//            return;
//        space += SPACE; // Increase distance between levels   2
//        print2D(r->right, space); // Process right child first 3 
//        cout << endl;
//        for (int i = SPACE; i < space; i++) // 5 
//            cout << " "; // 5.1  
//        cout << r->value << "\n"; // 6
//        print2D(r->left, space); // Process left child  7
//    }
//    void printPreorder(TreeNode* r) //(current node, Left, Right) 
//    {
//        if (r == NULL)
//            return;
//        /* first print data of node */
//        cout << r->value << " ";
//        /* then recur on left sutree */
//        printPreorder(r->left);
//        /* now recur on right subtree */
//        printPreorder(r->right);
//    }
//
//    void printInorder(TreeNode* r) //  (Left, current node, Right)
//    {
//        if (r == NULL)
//            return;
//        /* first recur on left child */
//        printInorder(r->left);
//        /* then print the data of node */
//        cout << r->value << " ";
//        /* now recur on right child */
//        printInorder(r->right);
//    }
//    void printPostorder(TreeNode* r) //(Left, Right, Root)
//    {
//        if (r == NULL)
//            return;
//        // first recur on left subtree 
//        printPostorder(r->left);
//        // then recur on right subtree 
//        printPostorder(r->right);
//        // now deal with the node 
//        cout << r->value << " ";
//    }
//
//    /* Print nodes at a given level */
//    void printGivenLevel(TreeNode* r, int level) {
//        if (r == NULL)
//            return;
//        else if (level == 0)
//            cout << r->value << " ";
//        else // level > 0  
//        {
//            printGivenLevel(r->left, level - 1);
//            printGivenLevel(r->right, level - 1);
//        }
//    }
//    void printLevelOrderBFS(TreeNode* r) {
//        int h = height(r);
//        for (int i = 0; i <= h; i++)
//            printGivenLevel(r, i);
//    }
//
//    TreeNode* iterativeSearch(int v) {
//        if (root == NULL) {
//            return root;
//        }
//        else {
//            TreeNode* temp = root;
//            while (temp != NULL) {
//                if (v == temp->value) {
//                    return temp;
//                }
//                else if (v < temp->value) {
//                    temp = temp->left;
//                }
//                else {
//                    temp = temp->right;
//                }
//            }
//            return NULL;
//        }
//    }
//
//    TreeNode* recursiveSearch(TreeNode* r, int val) {
//        if (r == NULL || r->value == val)
//            return r;
//
//        else if (val < r->value)
//            return recursiveSearch(r->left, val);
//
//        else
//            return recursiveSearch(r->right, val);
//    }
//
//};
//
//int main() {
//    AVLTree obj;
//    int option, val;
//
//    do {
//        cout << "What operation do you want to perform? " <<
//            " Select Option number. Enter 0 to exit." << endl;
//        cout << "1. Insert Node" << endl;
//        cout << "2. Search Node" << endl;
//        cout << "3. Delete Node" << endl;
//        cout << "4. Print/Traversal AVL Tree values" << endl;
//        cout << "5. Height of Tree" << endl;
//        cout << "6. Clear Screen" << endl;
//        cout << "0. Exit Program" << endl;
//
//        cin >> option;
//        //Node n1;
//        TreeNode* new_node = new TreeNode();
//
//        switch (option) {
//        case 0:
//            break;
//        case 1:
//            cout << "AVL INSERT" << endl;
//            cout << "Enter VALUE of TREE NODE to INSERT in AVL Tree: ";
//            cin >> val;
//            new_node->value = val;
//            obj.root = obj.insert(obj.root, new_node);
//            cout << endl;
//            break;
//        case 2:
//            cout << "SEARCH" << endl;
//            cout << "Enter VALUE of TREE NODE to SEARCH in AVL Tree: ";
//            cin >> val;
//            //new_node = obj.iterativeSearch(val);
//            new_node = obj.recursiveSearch(obj.root, val);
//            if (new_node != NULL) {
//                cout << "Value found" << endl;
//            }
//            else {
//                cout << "Value NOT found" << endl;
//            }
//            break;
//        case 3:
//            cout << "DELETE" << endl;
//            cout << "Enter VALUE of TREE NODE to DELETE in AVL: ";
//            cin >> val;
//            new_node = obj.recursiveSearch(obj.root, val);
//            if (new_node != NULL) {
//                obj.root = obj.deleteNode(obj.root, val);
//                cout << "Value Deleted" << endl;
//            }
//            else {
//                cout << "Value NOT found" << endl;
//            }
//            break;
//        case 4:
//            cout << "PRINT 2D: " << endl;
//            obj.print2D(obj.root, 5);
//            cout << endl;
//            //cout <<"Print Level Order BFS: \n";
//            //obj.printLevelOrderBFS(obj.root);
//            //cout <<endl;
//            //	      cout <<"PRE-ORDER: ";
//            //	      obj.printPreorder(obj.root);
//            //	      cout<<endl;
//            //	      cout <<"IN-ORDER: ";
//            //	      obj.printInorder(obj.root);
//            //	      cout<<endl;
//            //	      cout <<"POST-ORDER: ";
//            //	      obj.printPostorder(obj.root);
//            break;
//        case 5:
//            cout << "TREE HEIGHT" << endl;
//            cout << "Height : " << obj.height(obj.root) << endl;
//            break;
//        case 6:
//            system("cls");
//            break;
//        default:
//            cout << "Enter Proper Option number " << endl;
//        }
//
//    } while (option != 0);
//
//    return 0;
//}

                //recursive tree code
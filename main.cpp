#include <bits/stdc++.h>
using namespace std;

/* ---------- LINKED LIST ---------- */
class HistoryList {
    struct Node {
        int price;
        Node* next;
        Node(int p) : price(p), next(nullptr) {}
    };
    Node* head;

public:
    HistoryList() { head = nullptr; }

    void add(int price) {
        Node* node = new Node(price);
        node->next = head;
        head = node;
    }

    void display() {
        Node* temp = head;
        cout << "History: ";
        while (temp) {
            cout << temp->price << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

/* ---------- BST ---------- */
class BST {
    struct Node {
        int val;
        Node* left;
        Node* right;
        Node(int v) : val(v), left(nullptr), right(nullptr) {}
    };
    Node* root;

    Node* insert(Node* node, int val) {
        if (!node) return new Node(val);
        if (val < node->val) node->left = insert(node->left, val);
        else node->right = insert(node->right, val);
        return node;
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->val << " ";
        inorder(node->right);
    }

public:
    BST() { root = nullptr; }

    void insert(int val) { root = insert(root, val); }

    void display() {
        cout << "BST (sorted): ";
        inorder(root);
        cout << endl;
    }
};

/* ---------- GRAPH ---------- */
class Graph {
    unordered_map<int, vector<int>> adj;

public:
    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void display() {
        cout << "Graph (price transitions):\n";
        for (auto &p : adj) {
            cout << p.first << " -> ";
            for (int v : p.second) cout << v << " ";
            cout << endl;
        }
    }
};

/* ---------- ANALYZER ---------- */
class StockAnalyzer {
    vector<int> prices;

public:
    void addPrice(int p) {
        prices.push_back(p);
    }

    vector<int> getPrices() {
        return prices;
    }

    void showPrices() {
        cout << "Prices: ";
        for (int p : prices) cout << p << " ";
        cout << endl;
    }

    void nextGreater() {
        stack<int> st;
        vector<int> res(prices.size(), -1);

        for (int i = prices.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= prices[i])
                st.pop();
            if (!st.empty()) res[i] = st.top();
            st.push(prices[i]);
        }

        cout << "Next Greater Elements: ";
        for (int x : res) cout << x << " ";
        cout << endl;
    }

    void slidingWindowMax(int k) {
        deque<int> dq;

        cout << "Sliding Window Max: ";
        for (int i = 0; i < prices.size(); i++) {

            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            while (!dq.empty() && prices[dq.back()] < prices[i])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                cout << prices[dq.front()] << " ";
        }
        cout << endl;
    }

    void topK(int k) {
        priority_queue<int> pq(prices.begin(), prices.end());

        cout << "Top " << k << " prices: ";
        while (k-- && !pq.empty()) {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }

    void frequency() {
        unordered_map<int, int> mp;
        for (int p : prices) mp[p]++;

        cout << "Frequency:\n";
        for (auto &p : mp)
            cout << p.first << " -> " << p.second << endl;
    }

    void uniqueSorted() {
        set<int> s(prices.begin(), prices.end());
        cout << "Unique Sorted: ";
        for (int x : s) cout << x << " ";
        cout << endl;
    }
};

/* ---------- MAIN ---------- */
int main() {

    StockAnalyzer sa;
    HistoryList history;
    BST tree;
    Graph graph;

    int n;
    cout << "Enter number of prices: ";
    cin >> n;

    vector<int> input(n);

    cout << "Enter prices:\n";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    // Insert into structures
    for (int p : input) {
        sa.addPrice(p);
        history.add(p);
        tree.insert(p);
    }

    // Build graph
    for (int i = 0; i < n - 1; i++) {
        graph.addEdge(input[i], input[i + 1]);
    }

    // Display data
    sa.showPrices();
    history.display();
    tree.display();
    graph.display();

    sa.nextGreater();

    int k;
    cout << "Enter window size (k): ";
    cin >> k;
    sa.slidingWindowMax(k);

    int top;
    cout << "Enter top K: ";
    cin >> top;
    sa.topK(top);

    sa.frequency();
    sa.uniqueSorted();

    return 0;
}
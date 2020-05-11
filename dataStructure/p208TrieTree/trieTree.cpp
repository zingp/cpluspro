/*
## 208. 实现 Trie (前缀树)

- 实现一个 Trie (前缀树)，包含 insert, search, 和 startsWith 这三个操作。

- 示例:
    - Trie trie = new Trie();
    - trie.insert("apple");
    - trie.search("apple");   // 返回 true
    - trie.search("app");     // 返回 false
    - trie.startsWith("app"); // 返回 true
    - trie.insert("app");   
    - trie.search("app");     // 返回 true

- 说明:
    - 你可以假设所有的输入都是由小写字母 a-z 构成的。
    - 保证所有输入均为非空字符串。
*/
#include<iostream>
#include<string>
using namespace std;

class Trie {
private:
    bool isEnd;
    Trie* next[26];
public:
    Trie() {
        isEnd = false;
        memset(next, 0, sizeof(next));
    }

    void insert(string word) {
        Trie* node = this;
        for (char c : word) {
            if (node->next[c-'a'] == NULL) {
                node->next[c-'a'] = new Trie();
            }
            node = node->next[c-'a'];
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        Trie* node = this;
        for (char c : word) {
            node = node->next[c - 'a'];
            if (node == NULL) {
                return false;
            }
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
        Trie* node = this;
        for (char c : prefix) {
            node = node->next[c-'a'];
            if (node == NULL) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string str = "apple";
    Trie t = Trie();
    // Trie* obj = new Trie();

    t.insert(str);
    t.insert("apply");

    cout << t.search("app") << endl;
    cout << t.startsWith("app") << endl;

    return 0;
}
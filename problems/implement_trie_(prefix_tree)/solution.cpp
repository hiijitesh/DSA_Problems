class TrieNode{
    public:
    TrieNode* children[26];
    bool isWord;

    TrieNode(){
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isWord = false;
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {

        TrieNode* currNode = root;
        int index = 0;
        for(auto &c:word){
            int index = c-'a';
            if(currNode->children[index] == NULL){
                currNode->children[index] = new TrieNode();
            }
            currNode = currNode->children[index];
        }
        currNode->isWord = true;
    }
    
    bool search(string word) {

        TrieNode* currNode = root;
        for(auto &c : word){
            if(currNode->children[c-'a'] == NULL){
                return false;
            }
            currNode = currNode->children[c-'a'];
        }

        return currNode->isWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* currNode = root;
        for(auto &c : prefix){
            if(currNode->children[c-'a'] == NULL){
                return false;
            }
            currNode = currNode->children[c-'a'];
        }

        return true;
        
    }
    private:
        TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
class MyHashSet {
public:
    vector<int> hasher;
    MyHashSet() {
        
    }
    bool contains(int key) {
        for(int i = 0;i<hasher.size();i++){
            if(hasher[i]==key){
                return true;
            }
        }
        return false;
    }
    
    int containss(int key) {
        for(int i = 0;i<hasher.size();i++){
            if(hasher[i]==key){
                return i;
            }
        }
        return -1;
    }
    void add(int key) {
       if(containss(key)==-1){ hasher.push_back(key);}
    }
    
    void remove(int key) {
        int ret = containss(key);
        if(ret!=-1){
                hasher.erase(hasher.begin()+ret);
            
        }
    }
    
    
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
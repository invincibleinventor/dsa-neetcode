class MyHashMap {
public:
vector<int> keys;
        vector<int> values;
    MyHashMap() {
        
    }
    
    int contains(int key){
        for(int i = 0;i<keys.size();i++){
            if(keys[i]==key){
                return i;
            }
        }
        return -1;
    }
    void put(int key, int value) {
        int ret = contains(key);
        if(ret==-1){
            keys.push_back(key);
            values.push_back(value);
        }
        else{
            values[ret] = value;
        }
    }
    
    int get(int key) {

        int ret = contains(key);
        if(ret!=-1){
            return values[ret];
        }
        return -1;
    }
    
    void remove(int key) {
                int ret = contains(key);

        if(ret!=-1){
           keys.erase(keys.begin()+ret);
           values.erase(values.begin()+ret);
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
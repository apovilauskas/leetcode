class MyHashSet {
private:
std::vector<bool> data;
public:
    MyHashSet() : data(1000001, false){
        
    }
    
    void add(int key) {
        data[key]=true;
    }
    
    void remove(int key) {
        data[key ] = false;
    }
    
    bool contains(int key) {
        return data[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

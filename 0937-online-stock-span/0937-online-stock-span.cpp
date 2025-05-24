class StockSpanner {
public:
    vector<int> p;
    StockSpanner() {
       

    }
    
    int next(int price) {
        p.push_back(price);
        int ct = 1, i = p.size()-2;
        while(i>=0 and p[i--] <= price) ct++;
        return ct;    
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int asteroid : asteroids){
            bool des = false;
            while(!st.empty() && asteroid < 0 && st.top() > 0){
                if(-asteroid == st.top()){
                    des = true;
                    st.pop();
                    break;
                }else if(-asteroid > st.top()){

                    st.pop();

                }
                else{
                    des = true;
                    break;
                }
            }
            if(!des){
                st.push(asteroid);
                cout << st.top() << endl;
            }

        }

        vector<int> result(st.size());
        for(int i = st.size() - 1; i>=0; i--){
            result[i] = st.top();
            st.pop();
        }
        // if(!st.empty()){
        //     res.push_back(st.top());
        //     st.top();
        // }
        // reverse(res.begin(), res.end());


        return result;
    }
};
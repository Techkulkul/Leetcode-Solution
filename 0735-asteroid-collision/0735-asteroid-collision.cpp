class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        st.push(asteroids[0]);
        vector<int>ans;
        for(int i=1;i<asteroids.size();i++){
            if(!st.empty() && st.top()>0 && asteroids[i]<0){
                while(st.top()>0 && asteroids[i]<0){
                    if(st.top()<abs(asteroids[i])){
                        st.pop();
                        if(st.empty()){
                            st.push(asteroids[i]);
                            break;
                        }
                        else if(st.top()<0){
                            st.push(asteroids[i]);
                            break;
                        }
                    }
                    else if(st.top()==abs(asteroids[i])){
                        st.pop();
                        break;
                    }
                    else break;
                }
            }
            else st.push(asteroids[i]);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
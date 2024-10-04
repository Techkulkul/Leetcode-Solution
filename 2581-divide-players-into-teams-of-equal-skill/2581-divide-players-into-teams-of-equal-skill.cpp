class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0,j=skill.size()-1;
        long long chemistry=0;
        int pairsum=skill[i]+skill[j];
        i++,j--;
        while(i<j)
        {
            if(skill[i]+skill[j]!=pairsum) return -1;
            i++,j--;
        }
        i=0,j=skill.size()-1;
        while(i<j)
        {
            chemistry+=skill[i]*skill[j];
            i++,j--;
        }
        return chemistry;
        
        
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        if(a.empty()) return 0;

        int i = 0;
        int res =1;
        int j=1;
    while(j<a.size()){
        if(a[j]==a[j-1]){
        j++;
        continue;
    }
    a[i+1]=a[j];
    i++;
    res++;
    j++;
    }
    return res;
  }
};


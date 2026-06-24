class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int siz=a.size();
        vector<int>pos;
         vector<int>neg;

         for(int i=0;i<siz;i++)
         {
            if(a[i]<0)//pos array
         neg.push_back(a[i]);
         else
         pos.push_back(a[i]);//neg array
    }
    if(neg.size() == 0) // no -ve element
    {
        for(int i=0;i<pos.size();i++)
        pos[i]=pos[i]*pos[i];
        return pos;
    }
    if (pos.size () == 0) // no +ve
    {
        for(int i=0;i<neg.size();i++)
        neg[i]=neg[i]*neg[i];
        reverse(neg.begin(),neg.end());
        return neg;
    }
    int i=0,j=0;
    int index=0;
    int n=neg.size();
    int m=pos.size();
    vector<int> res (n+m);

    for(int i=0;i<n;i++)
    neg[i]=neg[i]*neg[i];
    reverse(neg.begin(),neg.end());
    
    for(int i=0;i<m;i++)
    pos[i]=pos[i]*pos[i];
    while (i<n and j<m)
    {
        if(neg[i]<=pos[j])
        {
            res[index] =neg[i];
            index++;
            i++;
        }
        else{
            res[index]=pos[j];
            index++;
            j++;
        }
    }//while loop ended
    //new loop
    while(i<n)
    {
        res[index]=neg[i];
        index++;
        i++;
    }
    while(j<m)
    {
        res[index]=pos[j];
        index++;
        j++;
    }
    return res;
}

};
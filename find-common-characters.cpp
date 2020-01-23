class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int c[100][26] = {0};
        
        //find the frequency of each letter in string, 
        //and increment the count in hashmap.
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[i].size();j++){
                int temp = (int)A[i][j] - (int)'a';
                //cout<<temp<<endl;
                c[i][temp]++;
            }
        }
        vector<string> op;
        for(int i=0;i<26;i++){
            //int flag = 0;
            int ind=INT_MAX;
            int j;
            for(j=0;j<A.size();j++){
                if(c[j][i]==0){
                    ind = -1;
                    break;
                    //flag = 1; //terminate
                }   
                ind = min(ind,c[j][i]);
            }
            //cout<<"1 - "<<ind<<" j - "<<j<<" i - "<<i<<endl;
            while(ind-->0){
                //cout<<"2 - "<<(ind)<<endl;
                string s;
                s = (char)(i +(int)'a');
                op.push_back(s);
            }
        }
        return op;
        
    }
};
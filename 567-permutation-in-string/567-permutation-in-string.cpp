class Solution {
    private:
    bool checkequal(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        //First assigning character count of s1 in count1
        int count1[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count1[index]++;
        }
        
        //checking for first window size in s2 and assigning it in count2 same as we did in count1 for s1 
        
        int windowsize=s1.length();
        int i=0;
        int count2[26]={0};
        while(i<windowsize && i<s2.length())
        {
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
       if (checkequal(count1, count2))
            return 1;
        
        //Processing window size further 
        
        while(i<s2.length())
        {
            char newchar=s2[i];
            int index=s2[i]-'a';
            count2[index]++;
           
            char oldchar=s2[i-windowsize];
                index=oldchar-'a';
            count2[index]--;//this can also be written as char[oldchar-'a']
            
            i++;//now after removing old char increment i for again new char
            
              if (checkequal(count1, count2))//ab check it equal hg kya yaha pe
                  
                return 1;
        }
        
            return 0;
    }
};
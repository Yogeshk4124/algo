class Solution {
public:
    int myAtoi(string s) {
        int sign=1,num=0,i=0,f=0;
        while(s[i]==' ') i++;
        if(s[i]=='-') sign=-1,i++;
        else if(s[i]=='+') i++;
        for(;i<s.length();i++)
        {
            if(s[i]<='9'&&s[i]>='0'){
                if((num>INT_MAX/10)||(num==INT_MAX/10 && s[i]-'0'>7))
                    return sign==-1?INT_MIN:INT_MAX;
                else num=num*10+((s[i]-'0'));
            }
            else 
                break;
        }
        return num*sign;
    }
};
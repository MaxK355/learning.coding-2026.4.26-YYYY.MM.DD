#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        bool h=true;
        string yn;
        string str;
        str=to_string(x);
        string revstr;
        int len=str.size();
        for(int i=0;i<len;i++)
        {
            revstr[i]=str[len-i-1];
        }
        for(int i=0;i<len;i++)
        {
            if(revstr[i]==str[i])
            {

            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
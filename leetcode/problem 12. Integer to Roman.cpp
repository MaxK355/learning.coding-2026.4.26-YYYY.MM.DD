#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int digits[4];
        int k=0;
        string finalstring;
        string rom1="I";
        string rom2="II";
        string rom3="III";
        string rom4="IV";
        string rom5="V";
        string rom6="VI";
        string rom7="VII";
        string rom8="VIII";
        string rom9="IX";
        string rom10="X";
        string rom20="XX";
        string rom30="XXX";
        string rom40="XL";
        string rom50="L";
        string rom60="LX";
        string rom70="LXX";
        string rom80="LXXX";
        string rom90="XC";
        string rom100="C";
        string rom200="CC";
        string rom300="CCC";
        string rom400="CD";
        string rom500="D";
        string rom600="DC";
        string rom700="DCC";
        string rom800="DCCC";
        string rom900="CM";
        string rom1000="M";
        string rom2000="MM";
        string rom3000="MMM";
        while(num>0)
        {
            digits[k]=num%10;
            k++;
            num/=10;
        }
        for(int i=k-1;i>=0;i--)
        {
            if(i==3)
            {
                if(digits[i]==0)
                {
                }
                else
                {
                    if(digits[i]==1)
                    {
                        finalstring+=rom1000;
                    }
                    else if(digits[i]==2)
                    {
                        finalstring+=rom2000;
                    }
                    else if(digits[i]==3)
                    {
                        finalstring+=rom3000;
                    }
                }
            }
            if(i==2)
            {
                if(digits[i]==0)
                {
                }
                else
                {
                    if(digits[i]==1)
                    {
                        finalstring+=rom100;
                    }
                    else if(digits[i]==2)
                    {
                        finalstring+=rom200;
                    }
                    else if(digits[i]==3)
                    {
                        finalstring+=rom300;
                    }
                    else if(digits[i]==4)
                    {
                        finalstring+=rom400;
                    }
                    else if(digits[i]==5)
                    {
                        finalstring+=rom500;
                    }
                    else if(digits[i]==6)
                    {
                        finalstring+=rom600;
                    }
                    else if(digits[i]==7)
                    {
                        finalstring+=rom700;
                    }
                    else if(digits[i]==8)
                    {
                        finalstring+=rom800;
                    }
                    else if(digits[i]==9)
                    {
                        finalstring+=rom900;
                    }
                }
            }
            if(i==1)
            {
                if(digits[i]==0)
                {
                }
                else
                {
                    if(digits[i]==1)
                    {
                        finalstring+=rom10;
                    }
                    else if(digits[i]==2)
                    {
                        finalstring+=rom20;
                    }
                    else if(digits[i]==3)
                    {
                        finalstring+=rom30;
                    }
                    else if(digits[i]==4)
                    {
                        finalstring+=rom40;
                    }
                    else if(digits[i]==5)
                    {
                        finalstring+=rom50;
                    }
                    else if(digits[i]==6)
                    {
                        finalstring+=rom60;
                    }
                    else if(digits[i]==7)
                    {
                        finalstring+=rom70;
                    }
                    else if(digits[i]==8)
                    {
                        finalstring+=rom80;
                    }
                    else if(digits[i]==9)
                    {
                        finalstring+=rom90;
                    }
                }
            }
            if(i==0)
            {
                if(digits[i]==0)
                {
                }
                else
                {
                    if(digits[i]==1)
                    {
                        finalstring+=rom1;
                    }
                    else if(digits[i]==2)
                    {
                        finalstring+=rom2;
                    }
                    else if(digits[i]==3)
                    {
                        finalstring+=rom3;
                    }
                    else if(digits[i]==4)
                    {
                        finalstring+=rom4;
                    }
                    else if(digits[i]==5)
                    {
                        finalstring+=rom5;
                    }
                    else if(digits[i]==6)
                    {
                        finalstring+=rom6;
                    }
                    else if(digits[i]==7)
                    {
                        finalstring+=rom7;
                    }
                    else if(digits[i]==8)
                    {
                        finalstring+=rom8;
                    }
                    else if(digits[i]==9)
                    {
                        finalstring+=rom9;
                    }
                }
            }
        }
        return finalstring;
    }
};
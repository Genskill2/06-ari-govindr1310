#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <cs50.h>

string ari(string s)
{
    int ch=0,wd=0,sent=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(isalnum(s[i]))
            ch++;
        else if(s[i]==' ')
            wd++;
        else if(s[i]=='.'||s[i]=='?'||s[i]=='!')
            sent++;
        else
            continue;
    }
    float f1=ch/wd;
    float f2=wd/sent;
    int score=ceil((4.71*f1) +(0.5* f2) - 21.43);
   switch(score)
    {
        case 1   :   return "Kindergarten";
        case 2   :   return "First/Second Grade";
        case 3   :   return "Third Grade";
        case 4   :   return "Fourth Grade";
        case 5   :   return "Third Grade";
        case 6   :   return "Sixth Grade";
        case 7   :   return "Seventh Grade";
        case 8   :   return "Eighth Grade";
        case 9   :   return "Ninth Grade";
        case 10  :   return "Tenth Grade";
        case 11  :   return "Eleventh Grade";
        case 12  :   return "Twelfth Grade";
        case 13  :   return "College student";
        case 14  :   return "Professor";
 
    }
}

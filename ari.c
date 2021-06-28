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
        case 5   :   return "Kindergarten";
        case 6   :   return "First/Second Grade";
        case 7   :
        case 8   :   return "Third Grade";
        case 9   :   return "Fourth Grade";
        case 10  :   return "Third Grade";
        case 11  :   return "Sixth Grade";
        case 12  :   return "Seventh Grade";
        case 13  :   return "Eighth Grade";
        case 14  :   return "Ninth Grade";
        case 15  :   return "Tenth Grade";
        case 16  :   return "Eleventh Grade";
        case 17  :   return "Twelfth Grade";
        case 18  :   
        case 19  : 
        case 20  : 
        case 21  : 
        case 22  : 
        case 23  :   return "College student";
        default  :   return "Professor";
 
    }
}

#include <stdio.h>  
int main(void)      
{  
     char ch;  
     int lc=0;  
     int uc=0;  
     int dig=0;  
    while((ch==getchar())!='*')  
     {  
         if(ch>='a'&&ch<='z')  
             lc++;  
          if(ch>='A'&&ch<='Z')  
             uc++;  
         if(ch>=0) 
            dig++;  
     }  
     printf("lowercase: %d, uppercase: %d, digits: %d\n", lc, uc, --dig);  
       
    return 0;  
}

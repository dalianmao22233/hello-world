    #include <stdio.h>
    int main(void){
        char *a = "abcdefghijklmn";
        printf(a);
       // reverse(*a);
   }
    void reverse(char *str)
    {
        char* end = str;
       char tmp;
       if (str)
       {
           while(*end)
           {
               ++end;
           }
           --end;
           while(str < end)
           {
               tmp = *str;



#include "stdio.h"  

int main(int argc, char* argv[])  
{  
    #define CONST_NAME1 "CONST_NAME1"  
    printf("%s\n",CONST_NAME1);  
//    #undef CONST_NAME1  
  
    #ifndef CONST_NAME1  
    #error No defined Constant Symbol CONST_NAME1  
    #endif  

    {  
        #define CONST_NAME2 "CONST_NAME2"  
        printf("%s\n",CONST_NAME2);  
    }  
  
    printf("%s\n",CONST_NAME2);  

    return 0;  
}

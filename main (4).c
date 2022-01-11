#include <stdio.h>  
int main()  
{  
    char opt;  
    int n1, n2;   
    float res;  
    scanf ("%c", &opt); 
    if (opt == '/' )  
    {  
        printf ("");  
    }  
    else if (opt == '*')  
    {  
        printf ("");  
     }  
       
    else if (opt == '-')  
    {  
        printf ("");  
     }  
        else if (opt == '+')  
    {  
        printf ("");  
     }     
    printf (" \n ");  
    scanf(" %d", &n1); 
    printf ("\n ");  
    scanf (" %d", &n2);  
      
    switch(opt)  
    {  
        case '+':  
            res = n1 + n2; 
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);  
            break;  
          
        case '-':  
            res = n1 - n2;   
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);  
            break;  
              
        case '*':  
            res = n1 * n2;   
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);  
            break;            
          
        case '/':  
            if (n2 == 0)    
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            res = n1 / n2; 
            printf (" Division of %d and %d is: %.2f", n1, n2, res);  
            break;  
        default:  
            printf (" Something is wrong!! Please check the options ");               
    }  
    return 0;  
}


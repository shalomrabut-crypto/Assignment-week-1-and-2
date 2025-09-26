/* Name:RABUT RE SHALOM
Registration number:PA106/G/29293/25
Assignement about a prompt to show name idnumber and bank balance
*/
#include <stdio.h>

int main() {
    char name[30];  
    int Id_number;
    float bank_balance;
    
    printf("Enter your name: \n");
    scanf("%s", name);  
    
    printf("Enter your ID number: \n");
    scanf("%d", &Id_number);  
    
    printf("Enter your bank balance: \n");
    scanf("%f", &bank_balance);  
    
    printf("Your name is %s\n", name);
    printf("Your ID number is %d\n", Id_number);
    printf("Your bank balance is %.2f\n",bank_balance);
    
    return 0;
    }

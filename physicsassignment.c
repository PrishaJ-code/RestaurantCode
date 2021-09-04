#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int signinup()
{ 
    int n,i,k,l;
    int pass;
    char a[11];
    unsigned long int len;
    char usern[11];
    int pass1;
    enter:
    printf("Enter \n1 to Sign In\n2 to Sign Up\n");
    scanf("%d", &n);
    if(n==1)
    {
        i=0;
        printf("Enter the Username (minimum 5 and maximum 10 characters long)\n");
        scanf("%s", &a);
        len = strlen(a);
        if(len<5 || len>10)
        {
            printf("%s - ", a);
            printf("Invalid Username");
            return 0;
        }
        printf("Enter the password \n*Use only digits\n *atleast 8 digits long\n *Do not enter zero\n");
        scanf("%d", &pass);
        if((pass / 10000000) == 0)
        {
            printf("Invalid Password");
            return 0;
        }
        goto enter;
    }
    else if(n==2)
    {
        printf("Enter Username\n");
        scanf("%s", usern);
        printf("Enter Password\n");
        scanf("%d", &pass1);
        k =strcmp(usern, a); 
        l = ( pass1 == pass);  
        if(k!=0)
        printf("Incorrect Username\n");
        if(l==0)
        printf("Incorrect Password\n");
        if(k==0 && l!=0)
        {
        printf("The Restaurant");
        return 1;
        }
    
    }
}
int choice()
{
  int i,n,j,qun,f,k;
    char str[10][14]={"RAJMA   ","DAL MAKHNI","AALU JEERA","SHAHI PANEER","CHICKEN","MANCHURIAN","FRIED RICE","STEAMED RICE","PLAIN ROTI","BUTTER NAAN"};
    char choice;
    int code;
    int x;
    int code1[100];
    int total[100]={};
    int price[10]={120,100,80,120,200,150,130,90,15,30};
    int sum=0,dis=0;
    int cust;
    printf("\n ------------------------- WELCOME -----------------------------\n" );
    printf("\n CODE \t ITEM NAME    \t PRICE \t \n");
    for(j=0;j<10;j++)
    {
        printf("%d",j);
        printf("\t %s",str[j]);
        printf("\t %d \n",price[j]);
    }
    printf("\n =============================================================================================\n");
    enter:
    printf("\n PLEASE ENTER THE NUMBER OF ITEMS ORDERED: ");
    scanf("%d",&n);
    printf("\n ---------------------------------------------------------------------------------------------");
    for(i=0;i<n;i++)
    {
        printf("\n enter the index: ");
        scanf("%d",&code);
        printf("\n enter the quantity: ");
        scanf("%d",&qun);
        printf("\n----------------------------------------------------------------------------------------------\n");
        switch(code)
        {
            case(0):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME  \t QUANTITY \t PRICE \t TOTAL PRICE\n");
            total[0]=price[0]*qun;
            printf("\n 0 \t %s  \t %d \t\t %d \t %d",str[0],qun,price[0],total[0]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(1): 
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME\tQUANTITY\tPRICE \t TOTAL PRICE\n");
            total[1]=price[1]*qun;
            printf("\n 1 \t %s   \t %d \t       %d \t     %d",str[1],qun,price[1],total[1]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(2):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME\tQUANTITY     PRICE\tTOTAL PRICE\n");
            total[2]=price[2]*qun;
            printf("\n 2 \t %s    \t%d  \t     %d  \t   %d",str[2],qun,price[2],total[2]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(3):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME  \t  QUANTITY \tPRICE\tTOTAL PRICE\n");
            total[3]=price[3]*qun;
            printf("\n 3 \t %s   \t %d   \t %d  \t %d",str[3],qun,price[3],total[3]);
            printf("\n----------------------------------------------------------------------------------------------\n"); 
            break;

            case(4):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME     QUANTITY    PRICE     TOTAL PRICE\n");
            total[4]=price[4]*qun;
            printf("\n 4 \t%s   \t %d \t   %d   \t %d",str[4],qun,price[4],total[4]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(5):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME    QUANTITY     PRICE     TOTAL PRICE\n");
            total[5]=price[5]*qun;
            printf("\n 5 \t %s  \t %d \t  %d \t  %d",str[5],qun,price[5],total[5]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(6):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME    QUANTITY   PRICE   TOTAL PRICE\n");
            total[6]=price[6]*qun;
            printf("\n 6 \t %s   \t %d \t  %d \t  %d",str[6],qun,price[6],total[6]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(7):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME     QUANTITY    PRICE     TOTAL PRICE\n");
            total[7]=price[7]*qun;
            printf("\n 7 \t %s\t %d  \t   %d   \t %d",str[7],qun,price[7],total[7]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(8):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME\tQUANTITY    PRICE     TOTAL PRICE\n");
            total[8]=price[8]*qun;
            printf("\n 8 \t %s   \t %d  \t   %d   \t %d",str[8],qun,price[8],total[8]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;

            case(9):
            printf("\n THE DETAILS ARE: \n");
            printf("\n CODE \t ITEM NAME\tQUANTITY     PRICE     TOTAL PRICE\n");
            total[9]=price[9]*qun; 
            printf("\n 9 \t %s   \t %d     \t %d     \t %d",str[9],qun,price[9],total[9]);
            printf("\n----------------------------------------------------------------------------------------------\n");
            break;


            default:
            printf("\n re-enter");
        }   
    }
    printf("\n =============================================================================================\n");
    printf("\n PRESS 'R' TO ENTER MORE ITEMS \n");
    printf("\n PRESS 'C' TO CALCULATE THE BILL \n");
    scanf("%s",&choice);
    if(choice=='R')
    {
        goto enter;
    }
    if(choice=='C')
    {
        printf("\n----------------------------------------------------------------------------------------------\n"); 
        printf("\n KINDLY RE-ENTER THE FINAL NUMBER OF ITEMS PURCHASED: ");
        scanf("%d",&f);
        printf("\n----------------------------------------------------------------------------------------------\n"); 
        printf("\n KINDLY RE-ENTER THE CODES OF THE PRODUCTS PURCHEASED FINALLY: ");   
        for(k=0;k<f;k++)
        {
            scanf("%d",&code1[k]);
        }

        printf("\n =============================================================================================\n");
        printf("\n -------------------------------- RECEIPT -----------------------------------");
        printf("\n CODE \t ITEM NAME  \t PRICE \t TOTAL PRICE \t \n");

        for(k=0;k<f;k++)
        {
            sum+=total[code1[k]];
            printf("\n %d \t %s     \t %d \t %d",code1[k],str[code1[k]],price[code1[k]],total[code1[k]]);
            printf("\n----------------------------------------------------------------------------------------------\n");
        }
        printf("\n TOTAL            =\t \t %d",sum);
        printf("\n TAX              =\t \t 18%%");
        float amount = sum*1.18;
        printf("\n AMOUNT PAYABLE   =\t \t %0.2f",amount);
        printf("\n AMOUNT PAID BY CUSTOMER : ");
        scanf("%d",&cust);
        float net = cust-amount;
        printf("\n BALANCE TO BE RETURNED : %0.2f\n",net);
        int netp = (int) net;
        int d =  netp / 500 ;
        if(d != 0)
        printf("Number of Rs. 500 notes : %d\n", d);
        netp = netp%500;
        d = netp / 200;
        if(d != 0)
        printf("Number of Rs. 200 notes : %d\n", d);
        netp = netp%200;
        d = netp / 100;
        if(d != 0)
        printf("Number of Rs. 100 notes : %d\n", d);
        netp = netp%100;
        d = netp / 50;
        if(d != 0)
        printf("Number of Rs. 50 notes : %d\n", d);
        netp = netp%50;
        d = netp  /20;
        if(d != 0)
        printf("Number of Rs. 20 notes : %d\n", d);
        netp = netp%20;
        d = netp / 10;
        if(d != 0)
        printf("Number of Rs. 10 notes : %d\n", d);
        netp = netp%10;
         d = netp / 5;
         if(d != 0)
        printf("Number of Rs. 5 notes : %d\n", d);
        netp = netp%5;
         d = netp / 2;
         if(d != 0)
        printf("Number of Rs. 2 coins : %d\n", d);
        netp = netp%2;
        if(netp != 0)
        printf("Number of Rs. 200 notes : %d\n", netp);
    }
    
    return 0;
}

int main()
{
    int i = signinup();
    if(i==1)
    choice();
    return 0;
}
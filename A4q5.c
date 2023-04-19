#include<stdio.h>

struct customer{
    int account_no;
    char name[20];
    float balance;
};
void print_details(struct customer cust[], int n){
    printf("Customer details with balance less than 100 R:\n");
    for(int i=0; i<n; i++){
        if(cust[i].balance < 100){
            printf("Account No: %d, Name: %s\n", cust[i].account_no, cust[i].name);
        }
    }
}

int main(){
    struct customer cust[3];
    for(int i=0; i<3; i++){
        printf("\nEnter customer %d details:\n", i+1);
        printf("Account No: ");
        scanf("%d", &cust[i].account_no);
        printf("Name: ");
        scanf("%s",cust[i].name);
        printf("balance");
        scanf("%f",& cust[i].balance);
    }
    print_details(cust,3);
    return 0;
}

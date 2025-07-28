#include<stdio.h>
#include<math.h>

int main(){
    float total=0, num=0,exp=0;
    char choice;

    printf("Welcome to the simple calculator!\n");
    printf("Instructions:\n");
    printf("a - Add\ns - Subtract\nm - Multiply\nd - Divide\np - Power\ne - End\n\n");
    printf("Enter the number: ");
    scanf(" %f", &total);

    while (1) {
        printf("What do you want to do? (Add/Sub/Multiply/Divide/Power/End): ");
        scanf(" %c", &choice);
        if (choice == 'a' || choice == 'A') {
            printf("Enter the number: ");
            scanf(" %f", &num);
            total = total+num;
            printf("\nTotal: %f\n\n", total);

        }else if (choice == 's' || choice == 'S') {
            printf("Enter the number: ");
            scanf(" %f", &num);
            total = total-num;
            printf("\nTotal: %f\n\n", total);

        }else if (choice == 'm' || choice == 'M') {
            printf("Enter the number: ");
            scanf(" %f", &num);
            total = total*num;
            printf("\nTotal: %f\n\n", total);

        }else if (choice == 'd' || choice == 'D') {
            printf("Enter the number: ");
            scanf(" %f", &num);
            if(num==0){
                printf("Undefined!");
            }else{
                total = total/num;
            }
            printf("\nTotal: %f\n\n", total);

        }else if (choice == 'p' || choice == 'P') {
            num = total;
            printf("Enter the exponent: ");
            scanf(" %f", &exp);
            if(num==0){
                total = 0;
            }else if(exp==0){
                total = 1;
            }else{
                total = pow(num, exp);
                
            }
            printf("\nTotal: %f\n\n", total);

        }else{
            break;

        }
    }
    return 0;
}
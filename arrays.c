// #include<stdio.h>
// int main(){
//     float price[3];
//     printf("Enter product prices : ");
//     scanf("%f%f%f",&price[0],&price[1],&price[2]);
//     printf("%2.2f\n",price[0]+(0.18*price[0]));
//     printf("%2.2f\n",price[1]+(0.18*price[1]));
//     printf("%2.2f\n",price[2]+(0.18*price[2]));
//     return 0;
// }

//What is an Array?
// When storing multiple values of same data type in a single variable that variable called an Array.

// #include<stdio.h>
// int main(){
//     int aadhaar[5];// aadhaar[] = Array
//     int *ptr = &aadhaar[0];
//     for(int i = 0;i<5;i++){
//         printf("%d Index : ",i);
//         scanf("%d",(ptr + i));
//     }
//     for(int i=0;i<5;i++){
//         printf("%d Index : %d\n",i,*(ptr + i));
//     }        
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int marks[5];
//     printf("Enter marks of Subjects(Communication,C,DE,POM,Microbiology): ");
//     scanf("%d%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
//     int sum = 0;
//     for(int i=0;i<=4;i++){
//         sum = sum + marks[i];
//     }
//     printf("Total Marks : %d\n",sum); 
//     // printf("%d",marks[0]);
//     float sum2 = (float)sum;
//     printf("In Percentage : %2.2f",(sum2/500)*100);
//     return 0;
// }

#include<stdio.h>
int rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
}
int prinln(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        printf("Enter index%d : ",i);
        scanf("%d",&num[i]);
    }
    rev(num,n);
    for(int i=0;i<n;i++){
        printf("%d\t",num[i]);
    }
    return 0;
}
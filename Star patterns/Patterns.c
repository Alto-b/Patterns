
// *****
//    *
//   *
//  *
// *****


// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(i==1 || i==5 || j==(6-i)){
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }


// *****
//  *   *
//   *   *
//    *   *
//     *****

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j>=i&&j<=4+i){
//                 if((i==1 || i==5)||(j==i || j==4+i)){
//                 printf("*");
//                 }else{
//                     printf(" ");
//                 }
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }



// *****
//  *   *
//   *   *
//    *   *
//     *****


// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j>=i&&j<=4+i){
//                 if(i==1&&j<=5||i==5&&j>=5||i==j||j==4+i){
//                 printf("*");
//                 } else {
//                     printf(" ");
//                 }
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }


// ******
// **  **
// *    *
// **  **
// ******

// #include<stdio.h>
// int main(){
//     int i,j,k=0;
//     for(i=1;i<=5;i++){
//         i<=3?k++:k--;
//         for(j=1;j<=6;j++){
//             if(j<=4-k||j>=3+k){
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

 
#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if((i<=5&&j<=4) || (i>=6&&j==4-i)){
                printf("*");
            }
            else
                printf("d");
            
           
        }
         printf("\n");

    }
   
}



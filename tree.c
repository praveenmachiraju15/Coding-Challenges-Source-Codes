#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
   int i,tc,tree=1,number,j;
    
   scanf("%d",& tc);
   
   for(i=0;i<tc;i++){
 //   printf("\nTC NUMNER:%d\n",i);   
       scanf("%d",&number);
       tree=1;
           
        if (number==0){
           tree=1;
       }
       //tree=1;
       
       for(j=1;j<(number+1);j++){
           
           if(j%2==0)
               tree+=1;
           else
               tree*=2;
           
           
           
       }
       
      
     printf("%d\n",tree);                        
  // printf("THE NUMBER AFTER PRINT:%d\n",number);
   }    
    return 0;
}
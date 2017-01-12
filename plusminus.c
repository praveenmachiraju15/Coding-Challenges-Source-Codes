#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int n,num[1000],i;
  


    float neg=0,pos=0,zero=0;  

//    float p=0,ne=0,z=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        
        scanf("%d",&num[i]);       
    }
    
    for(i=0;i<n;i++){
        
        if((num[i]<0))
            neg++;
        else if (num[i]==0)
            zero++;
         else if (num[i]>0)
            pos++;     
        
    }


//printf("Pos %d neg %d zero %d",pos,neg,zero);

/*    
    p=(pos/n);
    ne=(neg/n);
    z=(zero/n);
    
  */  
    
    
    printf("%.5f",(pos/n));
    printf("\n%.5f",(neg/n));
    printf("\n%.5f",(zero/n));

    
      
        
        
    return 0;
}

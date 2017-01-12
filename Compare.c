#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    int alice[3],bob[3],i,aliceScore,bobScore;
    
    for(i=0;i<=2;i++){
        
        scanf("%d",&alice[i]);
    }
    
    for(i=0;i<=2;i++){
        
        scanf("%d",&bob[i]);
    }
    
    for(i=0;i<=2;i++){
        
        if(alice[i] > bob[i] ){
            aliceScore+=1;
        } 
        else if(alice[i] < bob[i]){
            bobScore+=1;
        } else {
            bobScore +=0;
            aliceScore+=0;
        }
    }
    printf("%d %d", aliceScore, bobScore);
  
    return 0;
}
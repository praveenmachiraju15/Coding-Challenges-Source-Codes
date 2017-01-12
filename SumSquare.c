#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int tc,limit,i,sum1=0,sum2=0,diff=0;
    scanf("%lld",&tc);
    while(tc!=0){
        tc--;
        scanf("%lld",&limit);
        sum1=0,sum2=0;
        for(i=1;i<=limit;i++){
            sum1+=pow(i,2);
            sum2+=i;      
        }
            sum2=(pow(sum2,2));

        printf("%lld\n",sum2-sum1);
    }
    
    
    return 0;
}

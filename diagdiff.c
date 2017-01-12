#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){


int a[100][100];
int i,j,n;
int sum1=0,sum2=0;

scanf("%d",&n);

for(i=0;i<n;i++){

for(j=0;j<n;j++){

scanf("%d",&a[i][j]);
}
}


for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i==j){
sum1+=a[i][j];

}
}
}
for(i=(n-1);i>=0;i--){

        for(j=0;j<n;j++){
                if((i+j)==(n-1)){
                        sum2+=a[i][j];
}
}
}

printf("%d",abs(sum1-sum2));
return 0;

}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef unsigned long long big;
int main(){

	int t;
	big a;
	big b;
	scanf("%d",&t);
	int c=0;
	while(c<t){
		scanf("%llu %llu",&a,&b);
		big diff=b-a;
		big size=diff;
		big* primes = (big *)malloc(sizeof(big)*(diff+1));
		big i=0;
		
		for(i=0;i<diff+1;i++)
       			 primes[i] = 0;
		
		
		
		
		
		big j=0;//j will itertate over the divisors
		
		for(j=2;j*j<=b;++j){
		
		    big less = a / j;
		    less *= j; // first number <= N && p divides N
		    
		    big p;
		    
		    for(p=less;p<=b;p+=j) if(p != j && p >= a)
		    primes[p - a] = 1;
		}

		
		
		
		/*for (j=2;j<upperBound;j++){
			
			big less= 
			
			for(i=0;i<size;i++){
				if(array[i]%j == 0){
					array[i]=0;
				}
			}
			

			
		}*/
		
		 for(i=0;i<diff+1;++i){
            		if(primes[i] == 0 && a+i != 1) // We don't want to print if it's 1
           	 	printf("%llu\n",a+i);
       		 }
		
		

		c++;
	}
	
	return 0;
}


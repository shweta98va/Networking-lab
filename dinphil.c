#include<stdio.h>
void main(){
	int p[5]={0,0,0,0,0},chopstick[5]={0,0,0,0,0},ph,ch=0;
	do{
		printf("\n\n1.Dine\n2.Think\n3.Exit");
		printf("\nEnter choice::");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Which philosopher::");
				scanf("%d",&ph);
				if(p[ph-1]==1){
					printf("Already dining\n");
				}
				else{
					if(chopstick[ph-1]==0 && chopstick[ph%5]==0){
						p[ph-1]=1;
						chopstick[ph-1]=1;
						chopstick[ph%5]=1;
						printf("Philosopher %d now dining!",ph);
					}
					else{
						printf("Chopstick(s) in use!");
					}
				}
				break;
			case 2:
				printf("Which philosopher::");
				scanf("%d",&ph);
				if(p[ph-1]==0){
					printf("Already thinking");
				}
				else{
					p[ph-1]=0;
					chopstick[ph-1]=0;
					chopstick[ph%5]=0;
					printf("Philosopher %d now thinking!",ph);
				}					
				break;
			case 3:break;
			default:printf("Invalid choice!");
		}
	}while(ch!=3);
}
			

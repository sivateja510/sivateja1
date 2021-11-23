#include<stdio.h>
int main()
{
	int bt[10]={0},at[10]={0},tat[10]={0},wt[10]={0},ct[10]={0};
	int n,sum=0,i,j,k;
	float totalTAT=0,totalWT=0;
	printf("enter no of processes");
	scanf("%d",&n);
	printf("enter arrival time and burst time for each process\n\n");
	for(i=0;i<n;i++)
	{
		printf("arrival time of process[%d]",i+1);
		scanf("%d",&at[i]);
		printf("brust time of process[%d]",i+1);
		scanf("%d",&bt[i]);
		printf("\n");
    }
	for(j=0;j<n;j++)
	{ 
		sum+=bt[j];
		ct[j]+=sum;
    }
    for(k=0;k<n;k++)
    {
    	tat[k]=ct[k]-at[k];
		totalTAT+=tat[k];	
	}
	 for(k=0;k<n;k++)
	 {
	 	wt[k]=tat[k]-bt[k];
	 	totalWT+=wt[k];
	 }
	 printf("solution:\n\n");
	 printf("P#\t AT\t BT\t CT\t TAT\t WT\t\n\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("p%d\t %d\t %d\t %d\t %d\t %d\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
	 }
	 printf("\n\naverage turn around time=%f\n",totalTAT/n);
	 printf("average WT=%f\n\n",totalWT/n);
	 return 0;
}
		
	
	


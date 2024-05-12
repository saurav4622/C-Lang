//implement scheduling algorithm FCFS using C program.
#include<stdio.h>
int main()
{
    int pid[15];
    int bt[15];
    int n;

    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the process ID of all the processes:-\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&pid[i]);
    }

    printf("Enter the burst time of all the processes:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }

    int i,wt[n];
    wt[0]=0;

    //for calculating waiting time of each process.
    for(i=1;i<n;i++)
    {
        wt[i]=bt[i-1] + wt[i-1];
    }
    printf("Process ID      Burst Time      Waiting Time      Turnaround Time\n");
    float twt = 0;
    float tat = 0;
    for(i=0;i<n;i++)
    {
        printf("%d\t\t",pid[i]);
        printf("%d\t\t",bt[i]);
        printf("%d\t\t",wt[i]);

        //calculating and printing turnaround time of each process.
        printf("%d\t\t",bt[i] + wt[i]);
        printf("\n");
        //for calculating total waiting time
        twt += wt[i];
        //for calculating total turnaround time
        tat += bt[i]+wt[i];
    }
    float att,awt;
    //for calculating avaerage waiting time
    awt = twt / n;
    //for calculating average turnaround time
    att = tat / n;
    printf("Average waiting time = %.2f\n",awt);
    printf("Average turnaround time = %.2f\n",att);
}
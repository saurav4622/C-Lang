#include <stdio.h>
int main()
{
    // Input number of processed
    int n;
    printf("Enter total no. of processes: ");
    scanf("%d", &n);

    int wait_time = 0, arr_time[n], burst_time[n];
    int temp_burst_time[n];
    int x = n;
    int ta_time = 0; // Initialize ta_time

    // Input details of Processes
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of process %d\n", i + 1); // Changed to i + 1
        printf("Arrival time: ");
        scanf("%d", &arr_time[i]);
        printf("Burst time: ");
        scanf("%d", &burst_time[i]);
        temp_burst_time[i] = burst_time[i];
    }

    // Input time slot
    int time_slot;
    printf("Enter time slot: ");
    scanf("%d", &time_slot);

    // Total indicates total time taken
    // Counter indicates if a process is executed

    int total = 0, counter = 0, i = 0; // Initialize i = 0
    printf("Process ID      Burst time      Turnaround time     Waiting time\n");
    while (x != 0) // Changed the loop condition to while
    {
        // Define the conditions
        if (temp_burst_time[i] <= time_slot && temp_burst_time[i] > 0)
        {
            total = total + temp_burst_time[i];
            temp_burst_time[i] = 0;
            counter = 1;
        }
        else if (temp_burst_time[i] > 0)
        {
            temp_burst_time[i] = temp_burst_time[i] - time_slot;
            total += time_slot;
        }

        if (temp_burst_time[i] == 0 && counter == 1)
        {
            x--; // Decrement the process no.
            printf("\nProcess no %d \t\t %d\t\t\t\t%d\t\t\t%d", i + 1, burst_time[i], total - arr_time[i], total - arr_time[i] - burst_time[i]);
            wait_time = wait_time + total - arr_time[i] - burst_time[i];
            ta_time += total - arr_time[i]; // Updated ta_time calculation
            counter = 0;
        }
        
        i = (i + 1) % n; // Use modulo operator to go back to the first process after the last one
        if (arr_time[i] > total)
        {
            total = arr_time[i]; // Update total time if there is idle time
        }
    }

    // Calculate and display average waiting and turnaround times
    float avg_wait_time = (float)wait_time / n;
    float avg_ta_time = (float)ta_time / n;
    printf("\nAverage Waiting Time: %.2f", avg_wait_time);
    printf("\nAverage Turnaround Time: %.2f\n", avg_ta_time);
}

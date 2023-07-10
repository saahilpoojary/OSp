printf("------------------------------------------------------------\n");

for (int i = 0; i < number_of_process; i++) {

// calculating the turnaround time of the processes

process[i].turn_around_time = process[i].burst_time + process[i].waiting_time;

// calculating the total turnaround time.

total += process[i].turn_around_time;

// printing all the values

printf("\t %c \t\t %d \t\t %d \t\t %d", process[i].process_name, process[i].burst_time,

process[i].waiting_time, process[i].turn_around_time);

printf("\n-----------------------------------------------------------\n");

}

// calculating the average turn_around time

average_turnaround_time = (float) total / (float) number_of_process;

// average waiting time

printf("\n\n Average Waiting Time : %f", average_waiting_time);

// average turnaround time

printf("\n Average Turnaround Time: %f\n", average_turnaround_time);

return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Process structure
struct Process {
    int id;
    int priority;
    int remaining_execution_time;
    int io_time;
};

// Define constants
#define MAX_PROCESSES 10
#define CONTEXT_SWITCH_TIME 5
#define TIME_QUANTUM 10
#define AGING_THRESHOLD 30

// Function to add a process to the ready queue
void addToReadyQueue(struct Process readyQueue[], int *readyQueueSize, struct Process process) {
    if (*readyQueueSize < MAX_PROCESSES) {
        readyQueue[(*readyQueueSize)++] = process;
    }
}

// Function to add a process to the I/O queue
void addToIOQueue(struct Process ioQueue[], int *ioQueueSize, struct Process process) {
    if (*ioQueueSize < MAX_PROCESSES) {
        ioQueue[(*ioQueueSize)++] = process;
    }
}

// Function to perform context switch
void performContextSwitch() {
    printf("Context switch executed\n");
}

// Main simulation loop
int main() {
    struct Process readyQueue[MAX_PROCESSES];
    int readyQueueSize = 0;
    struct Process ioQueue[MAX_PROCESSES];
    int ioQueueSize = 0;

    // Create sample processes
    struct Process processes[MAX_PROCESSES] = {
        {1, 1, 20, 5},
        {2, 2, 30, 4},
        {3, 1, 25, 3},
        {4, 3, 15, 6},
        {5, 2, 10, 4}
    };

    // Add processes to the ready queue
    for (int i = 0; i < MAX_PROCESSES; i++) {
        addToReadyQueue(readyQueue, &readyQueueSize, processes[i]);
    }

    int simulationTime = 0;

    // Simulation loop
    while (readyQueueSize > 0 || ioQueueSize > 0) {
        // Aging mechanism: Increase priority for processes waiting too long
        if (simulationTime % AGING_THRESHOLD == 0) {
            for (int i = 0; i < readyQueueSize; i++) {
                if (readyQueue[i].priority < 3) {
                    readyQueue[i].priority++;
                }
            }
        }

        // Execute processes from the ready queue
        while (readyQueueSize > 0) {
            struct Process *currentProcess = &readyQueue[0];
            int executionTime = currentProcess->remaining_execution_time > TIME_QUANTUM ? TIME_QUANTUM : currentProcess->remaining_execution_time;
            currentProcess->remaining_execution_time -= executionTime;

            printf("Executing process %d with priority %d for %d time units\n", currentProcess->id, currentProcess->priority, executionTime);
            performContextSwitch();

            // Move the process to the I/O queue if it still has I/O time
            if (currentProcess->io_time > 0) {
                addToIOQueue(ioQueue, &ioQueueSize, *currentProcess);
            }

            // Remove the process from the ready queue if it's finished
            if (currentProcess->remaining_execution_time <= 0) {
                for (int i = 0; i < readyQueueSize - 1; i++) {
                    readyQueue[i] = readyQueue[i + 1];
                }
                readyQueueSize--;
            } else {
                // Move the process to the end of the queue
                struct Process temp = *currentProcess;
                for (int i = 0; i < readyQueueSize - 1; i++) {
                    readyQueue[i] = readyQueue[i + 1];
                }
                readyQueue[readyQueueSize - 1] = temp;
            }
        }

        // Check I/O queue and move processes back to the ready queue when I/O is completed
        for (int i = 0; i < ioQueueSize; i++) {
            struct Process *currentProcess = &ioQueue[i];
            if (currentProcess->io_time <= 0) {
                addToReadyQueue(readyQueue, &readyQueueSize, *currentProcess);

                // Remove the process from the I/O queue
                for (int j = i; j < ioQueueSize - 1; j++) {
                    ioQueue[j] = ioQueue[j + 1];
                }
                ioQueueSize--;
                i--; // Adjust the index as elements have shifted
            } else {
                currentProcess->io_time--;
            }
        }

        simulationTime += TIME_QUANTUM;
    }

    return 0;
}


// create a class which take single integer from user that number is a integer either number can be 
// two possibilietes prime or not prime if no. is not prime write all factors
// if prime then not any factor prime number 
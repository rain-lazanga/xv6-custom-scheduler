# XV6 Custom Scheduler

## Acknowledgements
This project is based on xv6, a teaching operating system developed at MIT.
Original source code is licensed under the MIT License.
Modifications are my own.

## Overview
This project modifies the XV6 scheduler to a custom two level feedback queue scheduler
based on the process run time. The higher the runtime the process gets placed in a high priority queue where it decrements its run time every cycle then puts it into low priority when its runtime is exhausted. It also adds a test program, a debug mode for the scheduler and creates a forking function that initializes the runlength variable the scheduler is based on. 

## How it works
1. All processes in the process table are scanned each scheduling cycle.
2. Processes are classified into two groups:
   - High Priority Queue: processes with runLength > 0
   - Low Priority Queue: processes with runLength == 0
3. High priority processes execute first and decrement their runLength during execution.
4. Once a process exhausts its runLength, it is moved to the low priority queue.
5. Low priority processes are scheduled after all high priority processes are handled.

## Key files modified
- kernel/defs.h → kernel function declarations
- kernel/sysproc.c → process-related system calls
- kernel/proc.c → scheduler implementation
- kernel/syscall.h → system call declaration
- kernel/syscall.c → system call function declaration
- kernel/sysproc.c → system call function implementation
- kernel/vmstats.h → test program variable declarations
- user/vmstats.c → test program implementation
- user/user.h → test program function declaration
## Note

This repository does not contain a full xv6 system. It includes only modified source files intended to be applied to a complete xv6 base system.
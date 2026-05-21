# XV6 Custom Scheduler

## Acknowledgements
This project is based on xv6, a teaching operating system developed at MIT.
Original source code is licensed under the MIT License.
Modifications are my own.

## Overview
This project modifies the XV6 scheduler to a custom two level feedback queue scheduler
based on the process run time. The higher the runtime the process gets placed in a high priority queue where it decrements its run time every cycle then puts it into low priority when its runtime is exhausted.  

## How it works

## Key files modified

## Note
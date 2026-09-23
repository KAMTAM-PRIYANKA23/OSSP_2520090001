# Large Pipeline Execution System

## 1. Architecture

The system contains:

User
  |
  v
Main Process
  |
  +----> Job 1
  |
  +----> Job 2
  |
  +----> Job 3
  |
  +----> Job 4
  |
  v
Wait and Monitor
  |
  v
Performance Report


## 2. Execution Flow

1. Main process starts.
2. Number of jobs is defined.
3. fork() creates child processes.
4. Each child performs its assigned work.
5. Parent monitors every child using waitpid().
6. Exit status is checked.
7. Execution time is calculated.
8. Final stability result is displayed.


## 3. Important System Calls

fork()
- Creates a new child process.

waitpid()
- Waits for a specific child process.

getpid()
- Returns the process ID.

sleep()
- Simulates work performed by a job.


## 4. Execution Path

Start
  |
  v
Create Jobs
  |
  v
Run Jobs
  |
  v
Monitor Processes
  |
  v
Check Exit Status
  |
  +---- Success ---> Record Result
  |
  +---- Failure ---> Report Failure
  |
  v
Measure Time
  |
  v
Display Final Report
  |
  v
End


## 5. Design Decisions

1. Multiple child processes are used to simulate multiple jobs.
2. waitpid() is used to monitor individual processes.
3. Exit status is checked to detect failures.
4. time() is used to measure execution duration.
5. The implementation is kept simple for testing process management.


## 6. Testing

The program is compiled using GCC and executed from the terminal.

Expected results:
- All jobs should start.
- All jobs should complete.
- Successful jobs should be reported.
- Total execution time should be displayed.
- Stability check should be displayed.


## 7. Conclusion

The program demonstrates process creation, process monitoring,
failure detection, execution-time measurement, and basic
pipeline/job stability analysis.

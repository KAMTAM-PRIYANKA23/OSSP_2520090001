# OS Skill Week-12

## Project

Process Pipeline and Job Management Demonstration

## Objectives

1. Execute large pipelines and monitor multiple jobs.
2. Measure execution time and detect failures.
3. Document architecture and execution paths.
4. Organize source code and automate builds.
5. Demonstrate process and signal handling.
6. Validate final project deliverables.

## Project Structure

Skill-Week-12/
├── src/
│   └── large_pipeline.c
├── bin/
│   └── large_pipeline
├── architecture.md
├── README.md
└── Makefile

## Build

make

## Run

make run

## Check Project

make check

## Clean Build

make clean

## System Calls Used

- fork()
- waitpid()
- getpid()
- sleep()

## Testing

The project creates multiple child processes, monitors their
execution, checks their exit status, and measures execution time.

## Conclusion

The project demonstrates process creation, monitoring,
performance measurement, documentation, build automation,
and final project validation.

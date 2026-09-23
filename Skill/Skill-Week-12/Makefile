CC = gcc
CFLAGS = -Wall
TARGET = bin/large_pipeline
SOURCE = src/large_pipeline.c

all:
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

check:
	@echo "Checking project structure..."
	@test -f src/large_pipeline.c && echo "Source file: OK" || echo "Source file: MISSING"
	@test -f architecture.md && echo "Documentation: OK" || echo "Documentation: MISSING"
	@test -d src && echo "src/: OK" || echo "src/: MISSING"
	@test -d bin && echo "bin/: OK" || echo "bin/: MISSING"

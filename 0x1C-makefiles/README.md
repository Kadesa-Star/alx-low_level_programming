# Makefile?
A Makefile is a special file, containing shell commands, that is used by the make build automation tool to compile and manage dependencies in a project. Makefiles are primarily used in C and C++ projects, but they can be applied to other languages and tasks as well.

## Basic Structure of a Makefile
A Makefile consists of rules. Each rule typically defines a target, its dependencies, and the commands needed to build that target. The basic syntax is as follows:

* target: dependencies
    command

## Key Concepts
- Targets: The files or actions to be made or executed. Often, these are executables or object files.

- Dependencies: The files that a target depends on. If any dependency is newer than the target, the commands are executed.

- Commands: The shell commands to create or update the target. Commands must be prefixed with a tab character

### Sample Project Structure
For a larger project, you might have the following structure:

project/
├── src/
│   ├── main.c
│   ├── utils.c
│   └── utils.h
├── build/
├── Makefile
└── README.md

### Sample Makefile for Larger Project
# Variables
CC = gcc
CFLAGS = -Wall -g
SRC_DIR = src
BUILD_DIR = build
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Targets
all: $(BUILD_DIR)/myprogram

$(BUILD_DIR)/myprogram: $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/myprogram

.PHONY: clean
Tips
- Modularity: Break down large Makefiles into smaller, more manageable parts using includes.
- Documentation: Comment your Makefiles to explain non-obvious parts.
- Automation: Use Makefiles to automate repetitive tasks beyond compilation, such as running tests or deployment.

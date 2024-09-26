# Makefile to compile C files in src/ into binaries in bin/

CC = gcc
CFLAGS = -Wall -Wextra -O2 
SRC_DIR = src
BIN_DIR = bin
SOURCES = $(wildcard $(SRC_DIR)/*.c)
TARGETS = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SOURCES))

all: $(TARGETS)

$(BIN_DIR)/%: $(SRC_DIR)/%.c
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@ -lm

clean:
	rm -f $(BIN_DIR)/*

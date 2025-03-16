# .DEFAULT_GOAL := shell

# This is the first line of a comment \
and this is still part of the comment \
as is this, since I keep ending each line \
with a backslash character

# Recipes in a Makefile rules must start \
with a tab (per definition)

# Detect OS & set variables accordingly
ifeq ($(OS), Windows_NT)
    SHELL := pwsh.exe
    .SHELLFLAGS := -NoProfile -Command
    ext := exe
    rmv := Remove-Item -Force
    RUN_PREFIX := 
else
    SHELL := /bin/bash
    ext := out
    rmv := rm -f
    RUN_PREFIX := ./
endif

CC = gcc
CFLAGS = -Wall -g

# no commands will be printed, but all will \
be executed including those with comments \
at the end of the line.
# .SILENT:

# generic rule
%.$(ext): %.c
	$(CC) $(CFLAGS) -o $@ $<
	$(RUN_PREFIX)$@

.PHONY: clean
clean:
	$(rmv) *.exe *.db *.out

# `make -f ..\Makefile clean` for executing \
the Makefile from subdirectories

shell:
	@echo $(SHELL)

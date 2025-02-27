# .DEFAULT_GOAL := shell
SHELL := pwsh.exe
.SHELLFLAGS := -NoProfile -Command

CC = gcc
CFLAGS = -Wall -g

# no commands will be printed, but all will be executed
# including those with comments at the end of the line.
# .SILENT:

# generic rule
%.exe: %.c
	$(CC) $(CFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -Force *.exe, *.db
# `make -f ..\Makefile clean` for

shell:
	@echo $(SHELL)

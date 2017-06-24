CFLAGS = -Wall -Werror -std=c99 -D_GNU_SOURCE
%: %.c
LDLIBS = -lm

SRCS = $(wildcard *.c)

ALL: $(patsubst %.c,%,$(SRCS)) $(LDLIBS)

.PHONY: install
install: timer
	cp timer /usr/local/bin/timer

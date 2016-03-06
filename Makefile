#
# Makefile
# Part of https://github.com/1over/colormath by Andrii Buriachevskyi.
# See LICENSE for details.
#

.PHONY: all clean

LIBRARY = libcolormath.so
SRC = $(wildcard *.c)
CFLAGS += -Wall -Wextra -O3


all: $(SRC)
	$(CC) $^ -o $(LIBRARY) -shared $(CFLAGS)

clean:
	$(RM) $(LIBRARY)

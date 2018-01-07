CC ?= cc
CFLAGS := -std=c11 -Wall -Wextra -Werror -pedantic -Iinclude

.PHONY: lint test clean
lint:
	$(CC) $(CFLAGS) -fsyntax-only src/foundations.c tests/test_foundations.c

test: build/test_foundations
	./build/test_foundations

build/test_foundations: src/foundations.c tests/test_foundations.c include/foundations.h
	mkdir -p build
	$(CC) $(CFLAGS) src/foundations.c tests/test_foundations.c -o $@

clean:
	rm -rf build

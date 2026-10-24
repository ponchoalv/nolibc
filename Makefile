.PHONY: all clean run

CFLAGS := -Wall -Werror -std=gnu89 -g -nostdinc -nostdlib -ffreestanding

SOURCES := src/main.c src/start.s

all: build/app

clean:
	rm -rf build

run: build/app
	./build/app

build:
	mkdir -p build

build/app: build $(SOURCES)
	clang -o $@ $(SOURCES) $(CFLAGS)

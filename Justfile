clear:
	clear

build:
	g++ -std=c++14 -Wshadow -Wall -Wextra main.cpp -o out

run:
	./out < input.txt

test: clear build run

watch:
	watchexec -e cpp,txt just test

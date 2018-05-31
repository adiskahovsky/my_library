
main : main.o menu.o filesystem.o
	g++ main.o menu.o filesystem.o -o main

main.o: main.cpp  filesystem.hpp menu.hpp
	g++ main.cpp  -c

menu.o: menu.cpp filesystem.hpp menu.hpp
	g++ menu.cpp  -c

filesystem.o: filesystem.cpp filesystem.hpp
	g++ filesystem.cpp -c

obzekts = main.o cplong.o
main: main.o cplong.o
	g++ main.o cplong.o -o main
$(obzekts): %.o : %.cpp

clean:
	rm *.o

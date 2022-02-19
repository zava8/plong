obzekts = tkns.o tcmp.o tadd.o
runtests: $(obzekts) run.o
	g++ -o $@ run.o $(obzekts) -lplong 
	rm *.o	
run.o: run.cpp
	g++ -c -fPIC run.cpp 
tkns.o: tkns.cpp tkns.h
	g++ -c tkns.cpp -lplong
tcmp.o: tcmp.cpp tcmp.h
	g++ -c tcmp.cpp -lplong
tadd.o: tadd.cpp tadd.h
	g++ -c tadd.cpp -lplong

clean:
	rm *.o	


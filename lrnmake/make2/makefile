blah: blah.o
	cc blah.o -o blah # Runs third
	rm *.o
blah.o: blah.c
	cc -c blah.c -o blah.o # Runs second

blah.c:
	echo "int main() { return 0; }" > blah.c # Runs first

NAME=libplong.so
CPPFLAGS=-g -o $(NAME) -fPIC -shared
FILE=src/cplong.cpp

$(NAME): $(FILE)
	g++ $(FILE) $(CPPFLAGS)

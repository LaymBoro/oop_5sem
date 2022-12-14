NAME = lib

CC = g++

CFLAGS = -g

SRCS = Library.cpp Book.cpp main.cpp

HEADER = Library.hpp Book.hpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS) $(HEADER)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp 
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

fclean: clean
	rm -rf $(NAME)

clean: 
	rm -rf $(OBJS)

re: fclean all

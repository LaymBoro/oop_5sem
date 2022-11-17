NAME = employee

CC = clang++ 

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp abstr_emp.cpp emp.cpp fink.cpp Highfink.cpp manager.cpp

HEAD = abstr_emp.hpp emp.hpp fink.hpp Highfink.hpp manager.hpp

OBJS = $(SRCS:.c = .o)

$(NAME) : $(OBJS) $(HEAD)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.c:%.o 
	$(CC) -c $< -o $@

all: $(NAME)

fclean: clean
	rm -rf $(NAME)

clean: 
	rm -rf $(NAME)
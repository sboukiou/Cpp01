CPP=c++
CFLAGS=-Wall -Werror -Wextra -std=c++98

SRC=main.cpp newZombie.cpp Zombie.cpp
NAME=Zombie

OBJS=$(SRC:%.c=%.o)

%.o:%.c
	$(CPP) $(CFLAGS) -c $(SRC)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		= $(SRC:.cpp=.o)

OFILES	= $(addprefix obj/, $(OBJ))

CC		= c++

FLAGS	= -Wall -Werror -Wextra

VERFLAG	= -std=c++98

all:	$(NAME)

$(OFILES):	obj/%.o: %.cpp
			@mkdir -p obj
			@$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OFILES)
			$(CC) $(FLAGS) $(VERFLAG) $(OFILES) -o $(NAME)
			clear

clean:
		rm -rf obj
		clear

fclean:	clean
		@rm -rf $(NAME)
		clear

re:		fclean all

.PHONY:	all clean fclean re

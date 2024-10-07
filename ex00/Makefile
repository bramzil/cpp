##################### Varaibles ###########################

SRCS		=	main.cpp \

FLAGS		=	-Wall -Wextra -Werror -std=c++98

NAME		=	test


######################### Rules ###########################

all			:	$(NAME)

$(NAME)		:	$(SRCS)
	c++ $(FLAGS) $(SRCS)

clean		:

fclean		:	clean
	rm -rf $(NAME)

re			:	fclean all
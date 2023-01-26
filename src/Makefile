NAME		=	libftprintf.a

INCLUDE		=	./include

BUILD		=	./build

DEP			=	$(INCLUDE)/ft_printf.h Makefile

SOURCES		=	$(wildcard *.c)

OBJS		=	$(addprefix $(BUILD)/, $(SOURCES:.c=.o))

CC 			= 	cc

RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Werror -Wpedantic

LFLAGS		=

IFLAGS		=	-I./include 

AR			=	ar rcs

$(BUILD)/%.o: %.c	$(SOURCES) $(DEP)
				$(CC) $(CFLAGS) $(IFLAGS) $(LFLAGS) -c -o $@ $<

all:		$(NAME)

$(BUILD):
				@mkdir $(BUILD)

$(NAME):	$(BUILD) $(OBJS)
				$(AR) $(NAME) $(OBJS)

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all bonus clean fclean re

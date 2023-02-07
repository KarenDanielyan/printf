NAME		=	libftprintf.a

INCLUDE		=	./include

BUILD		=	./build

SRC			=	./source

SRC_B		=	./source_b

DEP			=	$(INCLUDE)/ft_printf.h Makefile

SOURCES		=	$(wildcard $(SRC)/*.c)

SOURCES_B	=	$(wildcard $(SRC_B)/*.c)

OBJS		=	$(patsubst $(SRC)/%.c, $(BUILD)/%.o, $(SOURCES))

OBJS_B		=	$(patsubst $(SRC_B)/%.c, $(BUILD)/%.o, $(SOURCES_B))

CC 			= 	cc

RM			=	rm -rf

CFLAGS		=	-g3 -Wall -Wextra -Werror -Wpedantic

LFLAGS		=	-L./ -lftprintf

IFLAGS		=	-I./include

AR			=	ar rcs

$(BUILD)/%.o: $(SRC)/%.c	$(DEP)
				$(CC) $(CFLAGS) $(IFLAGS) $(LFLAGS) -c -o $@ $<

$(BUILD)/%.o: $(SRC_B)/%.c	$(DEP)
				$(CC) $(CFLAGS) $(IFLAGS) $(LFLAGS) -c -o $@ $<

all:		$(NAME)

$(BUILD):
				@mkdir $(BUILD)

$(NAME):	$(BUILD) $(OBJS)
				$(AR) $(NAME) $(OBJS)

bonus:		fclean $(BUILD) $(OBJS_B)
				$(AR) $(NAME) $(OBJS_B)

clean:		
				$(RM) $(OBJS)
				$(RM) $(OBJS_B)
				$(RM) $(BUILD)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY run:
			gcc $(IFLAGS) $(LFLAGS) main.c -o test
			./test

.PHONY:		all bonus clean fclean re

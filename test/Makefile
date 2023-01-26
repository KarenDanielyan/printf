NAME		=	test

BIN			=	../bin

DEP			=	test.h Makefile

SRC			=	../src

LIBFT		=	../src/libft

SOURCES		=	$(wildcard *.c)

CC 			= 	cc

RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Werror -g

LFLAGS		=	-L../src/ -L../src/libft -lftprintf -lft

IFLAGS		=	-I../src/include 

all:		$(NAME)

$(BIN):
				@mkdir $(BIN)

$(NAME):	$(BIN) $(DEP)
				$(MAKE) --directory=$(LIBFT)
				$(MAKE) --directory=$(SRC)
				$(CC) $(CFLAGS) $(IFLAGS) $(SOURCES) $(LFLAGS) -o $(BIN)/$(NAME)

clean:		
				$(MAKE) --directory=$(LIBFT) clean
				$(MAKE) --directory=$(SRC) clean
				$(RM) $(BIN)/$(NAME)

re:			clean $(NAME)

.PHONY:		all clean re
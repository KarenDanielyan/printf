NAME		=	test

BIN			=	../bin

BUILD		=	./build

DEP			=	test.h Makefile

SRC			=	../src

SOURCES		=	$(wildcard *.c)

OBJS		=	$(addprefix $(BUILD)/, $(SOURCES:.c=.o))

CC 			= 	gcc

RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Werror -g

LFLAGS		=	-L../src/ -lftprintf

IFLAGS		=	-I../src/include 

#$(BUILD)/%.o: %.c
#				$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

all:			$(BIN)/$(NAME)

#$(BUILD):
#					@mkdir $(BUILD)

$(BIN):
					@mkdir $(BIN)

$(BIN)/$(NAME):	$(BIN) $(SOURCES) $(DEP)
					$(MAKE) --directory=$(SRC)
					$(CC) $(CFLAGS) $(IFLAGS) $(SOURCES) $(LFLAGS) -o $(BIN)/$(NAME)

#clean:		
#				$(MAKE) --directory=$(SRC) clean
#				$(RM) $(OBJS) 

fclean:			#clean		
				$(MAKE) --directory=$(SRC) fclean
				$(RM) $(BIN)/$(NAME)

re:			fclean $(BIN)/$(NAME)

.PHONY:		all clean fclean re
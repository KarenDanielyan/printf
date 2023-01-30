NAME		=	test

BIN			=	./bin

BUILD		=	./build

DEP			=	test.h Makefile

SRC			=	../src

PRINTF		=	libftprintf.a

SOURCES		=	$(wildcard *.c)

OBJS		=	$(addprefix $(BUILD)/, $(SOURCES:.c=.o))

CC 			= 	gcc

RM			=	rm -rf

CFLAGS		=	-g3 -Wall -Wextra

LFLAGS		=	-L../src/ -lftprintf

IFLAGS		=	-I../src/include 

$(BUILD)/%.o: %.c $(DEP)
				$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

all:			$(BIN)/$(NAME)

$(BUILD):
					@mkdir $(BUILD)

$(BIN):
					@mkdir $(BIN)

$(PRINTF):
					$(MAKE) --directory=$(SRC)

$(BIN)/$(NAME):	$(BUILD) $(BIN) $(OBJS) | $(PRINTF)
					$(CC) $(CFLAGS) $(OBJS) $(LFLAGS) $(IFLAGS) -o $(BIN)/$(NAME)

debug:			fclean $(BIN) $(SOURCES) $(DEP)
					$(MAKE) --directory=$(SRC) debug
					$(CC) -g -fPIC $(CFLAGS) $(IFLAGS) $(SOURCES) $(LFLAGS) -o $(BIN)/$(NAME)

clean:		
				$(MAKE) --directory=$(SRC) clean
				$(RM) $(OBJS) 

fclean:			clean		
				$(MAKE) --directory=$(SRC) fclean
				$(RM) $(BIN)/$(NAME)

re:			fclean $(BIN)/$(NAME)

.PHONY run: all
			./bin/test

.PHONY:		all debug clean fclean re
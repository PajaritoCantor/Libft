
Name	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall	-Wextra	-Werror	-Isrc	-Iinclude
RM		=	rm	-rf

VPATH	=	src:src/conversion:src/list:src/memory:src/string
SRCS	=	

OBJS	=		$(addprefix build/,$(SRCS:.c=.o))

$(NAME):		$(OBJS)
						ar	rcs	$(NAME)	$(OBJS)

all:			$(NAME)

build:
						mkdir -p build

build/%.o:		%.c	|	build
							mkdir	-p build
							$(CC)	$(CFLAGS)	-c	$<	-o	$@

clean:
							$(RM)	build

fclean:			clean
						$(RM)	$(NAME)

re:						fclean	all

.SILENT:

.PHONY:					all	clean	fclean	re
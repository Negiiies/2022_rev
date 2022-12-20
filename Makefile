# E89 Pedagogical & Technical Lab
# project:     2022_rev
# created on:  2022-11-22 - 11:19 +0100
# 1st author:  dylan.le - dylan.le
# description: Makefile

NAME	=	rev

SRCS	=	src/stu_strlen.c	\
		src/reverse.c		\
		src/main1.c		


OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -IInclude

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re

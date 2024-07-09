NAME = push_swap

HEADER = ./includes/

AUTHOR = nkanaan

LIBFT = lib/lib.a

CC = gcc

CFLAGS = -Werror -Wall -Wextra -I $(HEADER) #-fsanitize=address

SRCS = main validation sort stack push_swap utils cmds/push cmds/swap cmds/rotate cmds/rev_rotate

SRC = $(addprefix src/, $(addsuffix .c, $(SRCS)))

SHELL := /bin/bash

COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;36m
OK_COLOR    = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m
NO_COLOR    = \033[m

OBJS = $(addprefix objs/, $(addsuffix .o, $(SRCS)))

all: header $(NAME)

header:
	@printf "%b" "$(OK_COLOR)"
	@echo ".------..------."
	@echo "|4.--. ||2.--. |"
	@echo "| :/\: || (\/) |"
	@echo "| :\/: || :\/: |"
	@echo "| '--'4|| '--'2|"
	@echo "'------''------'"
	@echo "NKANAAN"

ifeq ($(shell test -e ./proj && test -d objs/ && echo -n yes), yes)
	@echo "nothing to be done for: all"
else
	@printf "%b" "$(OBJ_COLOR)Flags: 	$(WARN_COLOR)$(CFLAGS)\n\033[m"
	@echo
endif


objs/%.o:	src/%.c
			@mkdir -p $(dir $@)
			@${CC} ${FLAGS} -c $< -o $@

$(NAME):	$(OBJS) $(LIBFT) $(HEADER)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT)
			@printf "%-53b%b" "$(COM_COLOR)Project Compiled:" "$(OK_COLOR)[✓]$(NO_COLOR)\n"

$(LIBFT):
			@make -C ./lib
			@printf "%-53b%b" "$(COM_COLOR)LIBFT Compiled:" "$(OK_COLOR)[✓]$(NO_COLOR)\n"


clean:
			rm -rf objs/
			@make clean -C ./lib
			@printf "%-53b%b" "$(COM_COLOR)OBJECT FILES DELETED:" "$(ERROR_COLOR)[✓]$(NO_COLOR)\n"


fclean:		clean
				rm $(NAME)
				rm ./lib/lib.a
				@printf "%-53b%b" "$(COM_COLOR)ALL CLEAN:" "$(ERROR_COLOR)[✓]$(NO_COLOR)\n"

re:			fclean all

.PHONY: 	all clean fclean re

.SILENT: 	clean fclean re all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brpower <brpower@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 14:23:56 by brpower           #+#    #+#              #
#    Updated: 2023/10/24 14:10:02 by brpower          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- Variables ---------------------
# Makefile is a set of commands (similar to terminal commands) with variable #
# names and targets to create object file and to remove them. In a single make #
# file we can create multiple targets to compile and to remove object, #
# binary files. You can compile your project (program) any number of #
# times by using Makefile.#

NAME = libftprintf.a
#NAME is a variable#
# the output which is a static library - The ".a" file extension is commonly #
# used for static libraries in Unix-like systems. #

OBJ_DIR = ./obj/
#the variable is for after when I compile they go to this folder#

SRC = ft_printf.c ft_digits.c ft_chars.c ft_hex.c
#This includes the functions for the library #

OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
#everything that is c convert to o, add ./objm this is lists#
# This changes all files from .c to .o  --- #
# o are the objects generatig the list of arrays. #

DEPS = $(addsuffix .d, $(basename $(OBJS)))
# p? # 
MK = mkdir -p
# #

CFLAGS	= -Wall -Wextra -Werror

INCLUDE = -I ./
##

RM	= rm -rf

CC	= gcc
#compile#
# -------------------- Rules --------------------
$(OBJ_DIR)%.o: %.c Makefile 	
	@echo "Compiling... $<"
	@$(MK) $(dir $@)
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@
#compare .c with .o, if Makefile is updated#
#The symbol '@' prints the instrution on the screen#
#This is  where everything copiles.
#This is a rule (:), on the left is the target and the right is the prerequist#
#The conversion of .c to .o is done in the file libft.h #
# -c means compilation #
# -o means output #
# the % sign matches every string, #

all: $(NAME)
#This is where the program starts #

$(NAME): $(OBJS)
	@echo "Building... $@"
	ar rcs $(NAME) $(OBJS)
#this generates the a.out#
#This creates static library from object files which are already compiled.#
#You need objects and header to create a library #
# c is high level, then .o reduces it to binary... #

-include $(DEPS)

# -------------------- Clean --------------------
clean:
	$(RM) $(OBJ_DIR)
# this removes files (a.out) (.o) that old or not being used to free up memory #
fclean:	clean
	$(RM) $(NAME)
# cleans f - force clean. (libft.h) #
re:	fclean $(NAME)

.PHONY:	all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pin3dev <pinedev@outlook.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 13:11:36 by pin3dev           #+#    #+#              #
#    Updated: 2024/10/24 21:23:31 by pin3dev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Do not copy this code, use it as a reference for learning.

RED=\033[0;31m
GREEN=\033[0;32m
RESET=\033[0m
BKGRAY=\033[47;90m
BKGRAYGREEN=\033[1;92m
BKGRAYRED=\033[1;91m

################################################################################
# 									Executable	 	 						   #
################################################################################

NAME = libft.a

################################################################################
# 						Compiler and Flags	Variables						   #
################################################################################
CC = cc
CFLAGS = -Wall -Wextra -Werror -I inc
AR = ar rcs
RM = rm -f
RMD = rm -rf

################################################################################
# 							Dir	Path	Variables 							   #
################################################################################

SRC_STRING_DIR = src/string
SRC_MEMORY_DIR = src/memory
SRC_UTIL_DIR = src/util
SRC_LIST_DIR = src/list
OBJ_DIR = obj

################################################################################
# 							File	Variables		 						   #
################################################################################

SRCS_STRING = 	$(addprefix $(SRC_STRING_DIR)/, ft_strlen.c ft_strlcpy.c \
				ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
				ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
				ft_strmapi.c ft_striteri.c)
SRCS_MEMORY = 	$(addprefix $(SRC_MEMORY_DIR)/, ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c)
SRCS_UTIL = 	$(addprefix $(SRC_UTIL_DIR)/, ft_isalpha.c ft_isdigit.c \
				ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
				ft_atoi.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c)
SRCS_LIST = 	$(addprefix $(SRC_LIST_DIR)/, ft_lstnew.c ft_lstadd_front.c\
				ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c)

SRCS_MAND = $(SRCS_STRING) $(SRCS_MEMORY) $(SRCS_UTIL)
SRCS_BONUS = $(SRCS_LIST)

OBJS_MAND = $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(SRCS_MAND)))
OBJS_BONUS = $(patsubst %.c,$(OBJ_DIR)/%.o,$(notdir $(SRCS_BONUS)))

################################################################################
# 							Manual	Targets		 							   #
################################################################################

all: $(NAME)

bonus: $(OBJS_BONUS) $(NAME)

clean:
	@$(RM) $(OBJS_MAND) $(OBJS_BONUS) 
	@if [ -d "$(OBJ_DIR)" ]; then $(RMD) $(OBJ_DIR); fi
	@echo "${BKGRAY}Libft:${BKGRAYRED}- Obj${RESET}"

fclean: clean
	@$(RM) $(NAME)
	@echo "${BKGRAY}Libft: ${BKGRAYRED}- Exec${RESET}"
#	@if [ -d "../libft-unit-tests" ]; then cd ../libft-unit-tests && make fclean; fi
#	@if [ -d "../libft-unit-tests" ]; then $(RMD) "../libft-unit-tests"; fi

re: fclean all

################################################################################
# 						 Targets Test by @alelievr	 						   #
################################################################################

#test: bonus
#	@if [ ! -d "../libft-unit-tests" ]; then \
#		git clone https://github.com/alelievr/libft-unit-test ../libft-unit-tests; \
#	else \
#		cd ../libft-unit-tests && git pull; \
#	fi
#	@cd ../libft-unit-tests && make && sleep 5 && ./run_test


################################################################################
# 							Automatic	Targets  							   #
################################################################################

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_STRING_DIR)/%.c | $(OBJ_DIR)
#	@echo "Compiling $(notdir $<) from dir <$(SRC_STRING_DIR)>"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_MEMORY_DIR)/%.c | $(OBJ_DIR)
#	@echo "Compiling $(notdir $<) from dir <$(SRC_MEMORY_DIR)>"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_UTIL_DIR)/%.c | $(OBJ_DIR)
#	@echo "Compiling $(notdir $<) from dir <$(SRC_UTIL_DIR)>"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_LIST_DIR)/%.c | $(OBJ_DIR)
#	@echo "Compiling $(notdir $<) from dir <$(SRC_LIST_DIR)>"
	@$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS_MAND)
	@LINK_CMD=""; \
	VAR=""; \
	\
	if ls $(OBJS_BONUS) >/dev/null 2>&1; then \
		LINK_CMD="$(AR) $(NAME) $(OBJS_MAND) $(OBJS_BONUS)"; \
		VAR="Libft Bonus"; \
	else \
		LINK_CMD="$(AR) $(NAME) $(OBJS_MAND)"; \
		VAR="Libft"; \
	fi; \
	\
	$$LINK_CMD & \
	./gui_load.sh "$$VAR" # Exibishion of the loading bar
	@wait

################################################################################
# 										PS		 	 						   #
################################################################################

.PHONY: all clean fclean re bonus

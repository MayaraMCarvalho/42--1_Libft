# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 00:40:38 by macarval          #+#    #+#              #
#    Updated: 2022/04/29 19:02:44 by macarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_itoa.c ft_memchr.c ft_memcmp.c  ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_split.c  ft_strchr.c ft_strdup.c ft_striteri.c \
			ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
# Declara todos os arquivos que serão utilizados

FIL_BON		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c
			
# Declara todos os arquivos bônus que serão utilizados

EXE		= $(FILES:.c=.o)
# Cria lista de nomes de arquivos executáveis.
# Substituindo a extenção .c por .o

EXE_BON	= $(FIL_BON:.c=.o)
# Cria lista de nomes de arquivos bônus executáveis.
# Substituindo a extenção .c por .o

NAME		= libft.a
# Declara nome da biblioteca a ser gerada.

NAME_BON		= libft_bonus.a
# Declara nome da biblioteca bonus a ser gerada.

AR			= ar -crs
# Declara comando ar.
# Cria o repositório (mesmo que já exista).
# Substitui ou adiciona arquivo ao repositório (r).

LIB			= ranlib
# Declara o comando ranlib.
# Usado para gerar o índice para o arquivo.

GCC			= gcc
# Declara o nome do programa compilador que será 
# usado no processo de compilação.

CFLAGS		= -Wall -Wextra -Werror
# Declara as flags que serão usadas pelo compilador.

$(NAME):	$(EXE)
			@$(AR) $(NAME) $(EXE)
			@$(LIB) $(NAME)
			@echo "Lifbt created!!"
#$(LIB) $(NAME)
# $(NAME): Nome do arquivo (biblioteca) que será gerado pelo programa.
# $(EXE) : Arquivo que será usado como entrada na criação da bibioteca.
# Restante: Ações que o make executará.

$(NAME_BON):	$(EXE_BON)
				@$(AR) $(NAME) $(EXE_BON)
				@cp $(NAME) $(NAME_BON)
				@echo "Lifbt_bonus created!!"
#$(LIB) $(NAME)
# $(NAME): Nome do arquivo (biblioteca) que será gerado pelo programa.
# $(EXE) : Arquivo que será usado como entrada na criação da bibioteca.
# Restante: Ações que o make executará.

all:		$(NAME)
# Executa libft.a (ver acima)

bonus:		$(NAME_BON)
# Executa libft_bonus.a (ver acima)
			

.c.o:
			@echo "Compile -> $<"
			@$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o)
# Declara regra.
# gcc -Wall -Wextra -Werror -c ...
# -c: compila e converte para a linguagem de máquina sem linkar 
# (não cria o programa executável).
# -o arquivo: nome do arquivo de saída (.out).
# $<: armazena o nome do primeiro pré-requisito da regra.
# <:.c=.o: modifica a extensão do nome do primeiro pré-requisito
# da regra para tornar .o

clean:
			@rm -f $(EXE) $(EXE_BON) $(NAME_BON)
			@echo "clean Done!"
# Remove sem confirmação todos os executáveis.

fclean:		clean
			@rm -f $(NAME)
			@echo "fclean Done!"
# Executa clean (ver acima)
# Remove sem confirmação o arquivo de biblioteca

re:			fclean all
# Executa fclean (ver acima)
# Executa all (ver acima)

.PHONY: all bonus clean fclean re
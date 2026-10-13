NAME = program

CPPFLAGSE = -Wall -Wextra -Werror -std=c++17

INCLUDE = -Iincludes 

SRC = src/FillData.cpp \
      src/student.cpp \
      src/tools.cpp \
      main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	g++ $(CPPFLAGSE)  $(INCLUDE) $(OBJ) -o $(NAME)

%.o:%.cpp
	g++ $(CPPFLAGSE) $(INCLUDE) -c $< -o $@

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : clean all fclean re

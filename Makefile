NAME = layout

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = main.cpp \
		src/Point.cpp \
		src/Rectangle.cpp \
		src/Circle.cpp

OBJS = $(SRCS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
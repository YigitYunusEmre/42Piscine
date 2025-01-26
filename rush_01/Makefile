# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Sources and objects
SRCS = *.c
OBJS = $(SRCS:.c =.o)

# Output file
TARGET = rush-01

# Default target
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

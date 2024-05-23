CC = g++
CFLAGS = -Wall -g

# 目标文件
TARGET = DuLinkListTest

# 源文件
SRCS = DuLinkListTest.cpp DuLinkList.cpp

# 依赖的头文件
HEADERS = DuLinkList.h

# 生成目标文件
OBJS = $(SRCS:.cpp=.o)

# 默认目标
all: $(TARGET)

# 生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# 生成目标文件
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# 清理中间文件和可执行文件
clean:
	rm -f $(OBJS) $(TARGET)
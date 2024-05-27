CC = g++
CFLAGS = -Wall -g

# 目标文件和可执行文件
TARGET_1 = SqStackTest

# 源文件
SRCS_1 = SqStackTest.cpp SqStack.cpp

# 依赖的头文件
HEADERS = SqStack.h

# 生成目标文件
OBJS_1 = $(SRCS_1:.cpp=.o)

# 默认目标
all: $(TARGET_1)

# 生成可执行文件
$(TARGET_1): $(OBJS_1)
	$(CC) $(CFLAGS) $^ -o $@

# 生成目标文件
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# 清理中间文件和可执行文件
clean:
	rm -f $(OBJS_1) $(TARGET_1)
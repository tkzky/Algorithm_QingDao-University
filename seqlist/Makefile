CC = g++
CFLAGS = -Wall -g

# 目标文件和可执行文件
TARGET_1 = DuLinkListTest
TARGET_2 = union

# 源文件
SRCS_1 = DuLinkListTest.cpp DuLinkList.cpp
SRCS_2 = union.cpp LinkList.cpp

# 依赖的头文件
HEADERS = DuLinkList.h LinkList.h

# 生成目标文件
OBJS_1 = $(SRCS_1:.cpp=.o)
OBJS_2 = $(SRCS_2:.cpp=.o)

# 默认目标
all: $(TARGET_1) $(TARGET_2)

# 生成可执行文件
$(TARGET_1): $(OBJS_1)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_2): $(OBJS_2)
	$(CC) $(CFLAGS) $^ -o $@

# 生成目标文件
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# 清理中间文件和可执行文件
clean:
	rm -f $(OBJS_1) $(OBJS_2) $(TARGET_1) $(TARGET_2)
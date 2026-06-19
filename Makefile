# ============================================
# Makefile —— cc 文件夹一键编译
# 用法：
#   make 文件名    编译对应 .c 文件
#   make run_文件名 编译并运行
#   make list      列出所有可编译文件
#   make clean     清理
# ============================================

CC = gcc
CFLAGS = -Wall -Wextra -finput-charset=UTF-8 -fexec-charset=GBK

# 获取所有 .c 文件（不含文件名中的空格）
SRC = $(wildcard *.c)
TARGETS = $(SRC:.c=.exe)

# 编译单个文件
# make hello   → gcc hello.c -o hello
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# 编译并运行
run_%: %.exe
	./$*

%.exe: %.c
	$(CC) $(CFLAGS) $< -o $@

# 列出所有源文件
list:
	@echo "cc 文件夹中的 C 源文件："
	@for f in $(SRC); do \
		echo "  make $$(basename $$f .c)  ← 编译 $$f"; \
	done

# 清理
clean:
	rm -f $(TARGETS) $(TARGETS:.exe=)
	rm -f *.o
	@echo "已清理"

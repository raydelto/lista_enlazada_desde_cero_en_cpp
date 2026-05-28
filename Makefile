VERSION = -std=c++20
TARGET_BASE = lista

ifeq ($(OS),Windows_NT)
EXE_EXT = .exe
RM_CMD = cmd /C del /Q /F
RM_QUIET = >NUL 2>&1
else
EXE_EXT =
RM_CMD = rm -f
RM_QUIET = >/dev/null 2>&1
endif

TARGET = $(TARGET_BASE)$(EXE_EXT)

all: $(TARGET)

$(TARGET): main.o Elemento.o Lista.o
	g++ main.o Elemento.o Lista.o -o $(TARGET)

main.o: main.cpp Lista.h Elemento.h
	g++ $(VERSION) -c main.cpp

Elemento.o: Elemento.h Elemento.cpp
	g++ $(VERSION) -c Elemento.cpp

Lista.o: Lista.cpp Lista.h Elemento.h
	g++ $(VERSION) -c Lista.cpp

.PHONY: all clean

clean:
	@-$(RM_CMD) *.o $(TARGET_BASE) $(TARGET_BASE).exe $(RM_QUIET)

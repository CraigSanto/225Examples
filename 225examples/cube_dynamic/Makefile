EXENAME = cubetest
OBJS = main.o cube.o

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpng -lc++abi

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o : main.cpp  cube.h
	$(CXX) $(CXXFLAGS) main.cpp

cube.o : cube.cpp cube.h
	$(CXX) $(CXXFLAGS) cube.cpp

clean :
	-rm -f *.o $(EXENAME)

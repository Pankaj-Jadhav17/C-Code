CXX = g++
CXXFLAGS = -Wall -std=c++11

all: program

program: main.o Person.o Student.o Teacher.o
	$(CXX) $(CXXFLAGS) -o program main.o Person.o Student.o Teacher.o

main.o: main.cpp Student.h Teacher.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Person.o: Person.cpp Person.h
	$(CXX) $(CXXFLAGS) -c Person.cpp

Student.o: Student.cpp Student.h Person.h
	$(CXX) $(CXXFLAGS) -c Student.cpp

Teacher.o: Teacher.cpp Teacher.h Person.h
	$(CXX) $(CXXFLAGS) -c Teacher.cpp

clean:
	rm -f *.o program
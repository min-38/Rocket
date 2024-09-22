# 컴파일러 지정
CXX = clang++
# 컴파일 옵션
CXXFLAGS = -std=c++11 -Wall -Wextra -O2 -I./action -I./ui -I./utils 

rocket: rocket.o baseUI.o menuUI.o rcktUI.o menuAction.o rcktAction.o main.o
	$(CXX) -o rocket rocket.o baseUI.o menuUI.o rcktUI.o menuAction.o rcktAction.o main.o

# 소스 파일별 컴파일 규칙
rocket.o: rocket.cpp rocket.h
	$(CXX) $(CXXFLAGS) -c rocket.cpp -o rocket.o

# UI
baseUI.o: ui/baseUI.cpp ui/baseUI.h
	$(CXX) $(CXXFLAGS) -c ui/baseUI.cpp -o baseUI.o

menuUI.o: ui/menuUI.cpp ui/menuUI.h ui/baseUI.h
	$(CXX) $(CXXFLAGS) -c ui/menuUI.cpp -o menuUI.o

rcktUI.o: ui/rcktUI.cpp ui/rcktUI.h
	$(CXX) $(CXXFLAGS) -c ui/rcktUI.cpp -o rcktUI.o

# Action
menuAction.o: action/menuAction.cpp action/menuAction.h action/rcktAction.h ui/menuUI.h
	$(CXX) $(CXXFLAGS) -c action/menuAction.cpp -o menuAction.o

rcktAction.o: action/rcktAction.cpp action/rcktAction.h ui/rcktUI.h rocket.h
	$(CXX) $(CXXFLAGS) -c action/rcktAction.cpp -o rcktAction.o

main.o: main.cpp action/menuAction.h action/rcktAction.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

# clean 규칙: 오브젝트 파일 및 실행 파일 삭제
clean:
	rm -f *.o
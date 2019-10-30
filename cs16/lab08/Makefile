CXX = g++
# CXX = clang++

CXXFLAGS= -Wall -Wno-uninitialized

BINARIES= testIsAnagram

COMMON_OBJECTS= tddFuncs.o strFuncs.o recLinkedListFuncs.o 
                

all: ${BINARIES}

tests: ${BINARIES}
	./testIsAnagram 
	./testRecursiveLargestValue 
	./testRecursiveSum 
	./testIsPalindrome

testIsAnagram: testIsAnagram.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@
testIsPalindrome: testIsPalindrome.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@
testRecursiveLargestValue: testRecursiveLargestValue.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@
testRecursiveSum: testRecursiveSum.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o

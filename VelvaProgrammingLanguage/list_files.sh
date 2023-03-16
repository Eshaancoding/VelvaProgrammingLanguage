find ../src -name \*.cpp -print | xargs -I {} printf {}\; | python -c "print(input(
).replace('../src/Driver/TSDriver.cpp;', ''))"
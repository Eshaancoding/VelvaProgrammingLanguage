make: 
	@clang++ main.cpp -o .\build\a.exe
	@.\build\a.exe
clean: 
	@rm .\build\a.exe
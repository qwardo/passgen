build:
	mkdir -p bin/ && cd bin/ && gcc -o passgen ../src/main.c ../src/password_generator.c

install:
	sudo mv bin/passgen /usr/local/bin/ && rmdir bin/

uninstall:
	sudo rm /usr/local/bin/passgen

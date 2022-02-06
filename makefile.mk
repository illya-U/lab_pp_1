.PHONY:build clean rebuild run greet debug realese
greet:
	@echo "Terminating make - please specify target explicitly"
	@echo "    build   : fast rebuild / build"
	@echo "    rebuild : full rebuild"
	@echo "    run     : run after fast rebuild / build"
	@echo "    clean   : perform full clean"
build: create
rebuild:clean create
run:build
	./create

debug: build
	./create -d

realese: build
	./create -r

clean:
	rm -rvf *.o create

main.o:main.c process.h action.h work_with_memory.h
	gcc -c -o main.o main.c
process.o:process.c typedef.h
	gcc -c -o process.o process.c
action.o: action.c input.h process.h pretty_print.h
	gcc -c -o action.o action.c
work_with_memory.o: work_with_memory.c typedef.h
	gcc -c -o work_with_memory.o work_with_memory.c
input.o:input.c typedef.h
	gcc -c -o input.o input.c
pretty_print.o:pretty_print.c typedef.h
	gcc -c -o pretty_print.o pretty_print.c
typedef.o:typedef.c typedef.h
	gcc -c -o typedef.o typedef.c
create:main.o process.o action.o work_with_memory.o input.o pretty_print.o typedef.o
	gcc -o create main.o process.o action.o work_with_memory.o input.o pretty_print.o typedef.o


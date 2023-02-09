all:
#1
	gcc -c hw0301.c
	gcc -c myfunc.c
	gcc hw0301.o myfunc.o -lm -o hw0301
#2
	gcc -c hw0302.c
	gcc -c mystddev.c	
	gcc hw0302.o mystddev.o -lm -o hw0302
#3
	gcc -c Req.c	
	gcc -c hw0303.c
	gcc hw0303.o Req.o -o hw0303
#4
	gcc -c hanoi1.c	
	gcc -c hw0304-1.c
	gcc hw0304-1.o hanoi1.o -o hw0304-1

	gcc -c hanoi2.c	
	gcc -c hw0304-2.c
	gcc hw0304-2.o hanoi2.o -lm -o hw0304-2
#5
	gcc -c smallten.c
	gcc -c hw0305.c
	gcc -c logic.c 
	gcc smallten.o logic.o hw0305.o -o hw0305

clean:
	rm -rf *hw0301 *hw0302 *hw0303 *hw0304-1 *hw0304-2 *.o *hw0305
	rm -rf hw0301.c hw0302.c smallten.c 

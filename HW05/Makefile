all:
	gcc -c rotate.c -o rotate.o
	gcc -c hw0501.c -o hw0501.o
	gcc hw0501.o rotate.o -lm -o hw0501

	gcc -c mymemcmp.c -o mymemcmp.o
	gcc -c hw0502.c -o hw0502.o
	gcc hw0502.o mymemcmp.o -o hw0502

	gcc hw0503.c -o hw0503

	gcc -c hw0504.c -o hw0504.o
	gcc -c division.c -o division.o
	gcc hw0504.o division.o -lm -o hw0504
clean:
	rm *.o *hw0501 *hw0502 


CC=gcc
OPT= -lglut -lGLU -lGL -lm
SRC =
OBJ = $(patsubst %.c, %.o, $(SRC))




all: main clean_object

main: $(OBJ)
	$(CC) $(OBJ) -o $@ $(OPT)


%.o: src/%.c
	$(CC) -o $@ -c $< 


clean_object:
	rm *.o
clean:
	rm main
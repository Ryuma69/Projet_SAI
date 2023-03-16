CC=gcc
OPT= -lglut -lGLU -lGL -lm
SRC = main.c affichage.c
OBJ = $(patsubst %.c, %.o, $(SRC))




all: main cleano

main: $(OBJ)
	@echo "Création de l'executable"
	@$(CC) $(OBJ) -o $@ $(OPT)


%.o: src/%.c
	@echo "Création de $@"
	@$(CC) -o $@ -c $< 


cleano:
	@echo "Suppresion des fichiers objets..."
	@rm *.o
clean:
	@echo "Suppression de l'executable"
	@rm main
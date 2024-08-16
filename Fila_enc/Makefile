all: Fila.o
	@echo 'Criando o "Fila.o"...'
	@ g++ Fila.o  main.cpp -o Fila_encadeada.out

Fila.o:
	@echo 'Compilando Fila.o ...'
	@ g++ -c Fila.cpp
clean:
	@echo 'Removendo lixo...'
	@ rm -rf *.o

run:
	@echo 'Rodando exemplo:'
	@ ./Fila_encadeada.out
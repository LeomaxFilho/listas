all: Lista.o
	@echo 'Criando o "Lista.o"...'
	@ g++ Lista.o main.cpp -o lista_encadeada.out

Lista.o:
	@echo 'Compilando...'
	@ g++ -c Lista.cpp

clean:
	@echo 'Removendo lixo...'
	@ rm -rf *.o

run:
	@echo 'Rodando exemplo:'
	@ ./lista_encadeada.out

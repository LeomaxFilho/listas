all: Lista_enc.o No.o
	@echo 'Criando o "Lista.o"...'
	@ g++ Lista_enc.o No.o main.cpp -o lista_encadeada.out

Lista_enc.o:
	@echo 'Compilando Lista_enc.o ...'
	@ g++ -c Lista_enc.cpp
No.o:
	@echo 'Compilando No.o ...'
	@ g++ -c No.cpp
clean:
	@echo 'Removendo lixo...'
	@ rm -rf *.o

run:
	@echo 'Rodando exemplo:'
	@ ./lista_encadeada.out

all: grafo.o 
	@echo 'Criando o "grafo.o"...'
	@ g++ grafo.o main.cc -o grafo.out

grafo.o:
	@echo 'Compilando grafo.o.o ...'
	@ g++ -c grafo.cc

clean:
	@echo 'Removendo lixo...'
	@ rm -rf *.o
	@ rm -rf *.out

run1:
	@echo 'Rodando exemplo 1:'
	@ ./grafo.out src/pcv4.txt

run2:
	@echo 'Rodando exemplo 1:'
	@ ./grafo.out src/pcv10.txt

run3:
	@echo 'Rodando exemplo 1:'
	@ ./grafo.out src/pcv50.txt

run4:
	@echo 'Rodando exemplo 1:'
	@ ./grafo.out src/pcv177.txt
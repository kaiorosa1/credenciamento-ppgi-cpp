all:
	g++ -Wall -o main main.cpp docente.cpp publicacao.cpp qualis.cpp regras.cpp veiculo.cpp  

clean:
	rm -f main
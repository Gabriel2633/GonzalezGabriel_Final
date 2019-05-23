all: datos.dat  graficas.png 

%.png: %.dat graficas.png 
	python3 graficador.py

%.dat: a.out
	./a.out

a.out: final2019.cpp
	g++ final2019.cpp 

clean:
	rm -rf *.a *.dat *.png
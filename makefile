friccion.png : Ex28.py Ex28.dat
	python Ex28.py

Ex28.dat : Ex28.x
	./Ex28.x > Ex28.dat
	
Ex28.x : Ex28.cpp
	c++ Ex28.cpp -o Ex28.x
	
clean:
	rm Ex28.x Ex28.dat friccion.png

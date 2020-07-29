pd2@VirtualBox:~/lab7$ make  
g++ -c genMino.cpp  
g++ -c tetris.cpp  
g++ -c Mino_I.cpp  
g++ -c Mino_S.cpp  
g++ -c Mino_J.cpp  
g++ -c Mino_L.cpp  
g++ -c Mino.cpp  
g++ -o tetris genMino.o tetris.o Mino_I.o Mino_S.o Mino_J.o Mino_L.o Mino.o  
pd2@VirtualBox:~/lab7$ ./tetris  
0000  
0000  
0011  
0110  
0000  
0100  
0100  
0110  
0000  
0100  
0100  
0110  
0000  
0010  
0010  
0110  
0010  
0010  
0010  
0010  

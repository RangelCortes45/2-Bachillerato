#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
/*Este  programa genera 5 números al azar*/
int main(){
      char matriz[10][10];//Aquí guardamos los números
      int fil,col;
      int longitud;
      int posx,posy;//Posición de la palabra
      char palabra[10];
      char salir;
      int semillita;
      semillita=time(0);
      srand(semillita);//inicializar el generador de letras aleatorias
      //Genero la matriz de letras al azar
      for(fil=0;fil<10;fil++){
         for(col=0;col<10;col++){
            matriz[fil][col]=rand()%25+65;
            std::cout<<matriz[fil][col];
         }
          std::cout<<"\n";
      }
      //generamos al azar posx y posy
      posx=rand()%10;
      posy=rand()%1;
      //Colocamos un asterisco e esa posición
      matriz[posx][posy]='*';
      //Volvemos a sacar la matriz por pantalla
      std::cout<< "Nueva matriz\n\n";
      for(fil=0;fil<10;fil++){
         for(col=0;col<10;col++){
            matriz[fil][col]=rand()%25+65;
            std::cout<<matriz[fil][col];
         }
          std::cout<<"\n";
      }
      //Leemos la apalabra
      std::cout<<"Introduce una palabra: ";
      std::cin>>palabra;
      
      //Medimos la longitud de la palabra
      longitud=strlen(palabra);
      
      //Recorro las posiciones y vuelco letra a letra la palbra
      for(col=posy;col<posy+longitud;col++){
         matriz[posx][col]=palabra[col-posy];
      }
      //Saco nueva matriz con la palabra
       std::cout<< "\n\nMatriz con palabra\n\n";
      for(fil=0;fil<10;fil++){
         for(col=0;col<10;col++){
            matriz[fil][col]=rand()%25+65;
            std::cout<<matriz[fil][col];
         }
          std::cout<<"\n";
      }
      std::cout<<""
      std::cout<<"Toca una tecla para salir ";
      std::cin>>salir;
      return 0; 
}     

#include<iostream>
/*Este programa se llama matrices_1*/
main(){
       int tablero[5][5];//Así se define una matriz
       int fil;
       int col;
       int relleno;
       char salir;
       /*Recorremos la matriz y la relleno*/
       for(fil=0;fil<=4;fil++){
          if(fil%2==0){
             relleno=0;
          }
          else{
             relleno=1;
          }
          for(col=0;col<=4;col++){
             tablero[fil][col]=relleno;
          }
       //ahora repaso la matriz y muestro por pantalla
       //su contenido
       }
       for(fil=0;fil<=4;fil++){
          for(col=0;col<=4;col++){
             std::cout<<tablero[fil][col];
             
             }
        std::cout<<"\n";   
       }
    std::cout<<"Tocar cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}




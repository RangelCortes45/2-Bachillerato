#iclude<iostream>
int main(){
    //Este programa cuenta hasta 10
    int i;
    char salir;
    //los for son poco distintos
    //i++ es lo mismo que i=i+1
    for(i=10;i>0;i--){
        std::cout<<i;
    
    }
    std::cout<<"toca la cualquier tecla:";//instruccion de salida
    std::cin>>salir;//instruccion de entrada
    return 0;
}                

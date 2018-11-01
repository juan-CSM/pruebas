#include<iostream>
#include<vector>

typedef std::vector <int> vector_entero;

int main(){
  int temporal =0;
  vector_entero v;
  v.push_back(3);
  v.push_back(2);
  v.push_back(9);
  std::cout<<"--- Capturar datos en un vector de tamaño dinamico, -1 para salir"<<std::endl;
  while(temporal>= 0){
    std::cout<<std::endl<<"ingresar valor: "<<std::endl;
    std::cin>>temporal;
    if(temporal>= 0){
      v.push_back(temporal);
    }else{
      std::cout<<"Terminando el ciclo"<<std::endl;
    }
  }
  for(int i = 0; i<v.size(); i++){
    std::cout<<"El valor en la posicion ["<<i<<"] es: "<<v[i]<<std::endl;
  }
  std::cout<<"Fueron "<<v.size()<<" valores en total"<<std::endl;
  return 0;
}

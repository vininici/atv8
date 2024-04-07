#include <iostream>
using namespace std;
void ler_vetor(int vet[],int tam){
  for(int i = 0; i < tam; i++){
    cout<<"digite um valor para o vetor ";
    cin>>vet[i];
  }
}
int contarPar(int vet[], int vetPar[], int tam){
  int tamanhoPar = 0;
  for(int i = 0; i<tam;i++){
    if(vet[i]%2==0){
      tamanhoPar++;
    }
  }
  return tamanhoPar;
}
void separar(int vet[], int vetPar[], int vetImpar[], int tam, int tamanhoPar, int tamanhoImpar){
  int contPar = 0, contImpar = 0;
  for(int i = 0; i<tam;i++){
    if(vet[i]%2==0){
      vetPar[contPar] = vet[i];
      contPar++;
    }else{
      vetImpar[contImpar] = vet[i];
    }
  }
}
void imprimir(int vet[], int vetPares[], int vetImpares[], int tam, int tamanhoPar, int tamanhoImpar){
  cout<<"vetor: ";
  for(int i = 0; i < tam; i++){
    cout<<vet[i]<<" ";
  }
  cout<<endl;
  cout<<"vetor par: ";
  for(int i = 0; i < tamanhoPar; i++){
    cout<<vetPares[i]<<" ";
  }
  cout<<endl;
  cout<<"vetor impar: ";
  for(int i = 0; i < tamanhoImpar; i++){
    cout<<vetImpares[i]<<" ";
  }
}
int main(){
  int tam;
  cout<<"digite o tamanho do vetor ";
  cin>>tam;
  int vet[tam], vetPar[tam], vetImpar[tam];
  ler_vetor(vet,tam);
  int tamanhoPar = contarPar(vet, vetPar, tam);
  int tamanhoImpar = tam - tamanhoPar;
  separar(vet, vetPar, vetImpar, tam, tamanhoPar, tamanhoImpar);
  imprimir(vet, vetPar, vetImpar, tam, tamanhoPar, tamanhoImpar);
}
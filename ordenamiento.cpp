#include <iostream>
#define max 5

using namespace std;

class Ordenamiento
{
private:
    int datos[max];
public:
    void llenado();
    void mostrar(string);
    void insercion();
    void burbuja();
    void seleccion();
    Ordenamiento();
    ~Ordenamiento();
};


//Constructor
Ordenamiento::Ordenamiento()
{

}
//Destructor
Ordenamiento::~Ordenamiento()
{

}
void Ordenamiento::llenado()
{
    int i, dato;
    for (i=0;i<=max;i++)
    {
        cout<<"Ingresa el numero ("<<i+1<<"): ";
        cin>>dato;
        datos[i]=dato;
    }
}
void Ordenamiento::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}
void Ordenamiento::insercion()
{
    int i,pos,aux;
    for (i=0;i<=max;i++)
    {
        pos=i;
        aux = datos[i];
        while((pos>0)&&(datos[pos-1]>aux))
        {
            datos[pos]=datos[pos-1];
            pos--;
        }
        datos[pos]=aux;
    }
}

void Ordenamiento::burbuja() 
{
    float temporal;
    int i;
    
	for (int i=0;i<max; i++)
        {
		for (int j = 0; j<max-1; j++) {
			if (datos[j] < datos[j+1]){ 
			temporal = datos[j]; 
			datos[j] = datos[j+1]; 
			datos[j+1] = temporal;
			}
		}
	}
}
    
void Ordenamiento::seleccion() {
    int min,i,j,aux;
    for (i=0; i<max-1; i++) 
        {
              min=i;
              for(j=i+1; j<max; j++) {
                    if(datos[j] < datos[min])
                       min=j;
              aux=datos[min];
              datos[min]=datos[i];
              datos[i]=aux ;
              }
        }
   
}  





int main() {
Ordenamiento objeto1;
    objeto1.llenado();
    objeto1.mostrar("desordenados");
    objeto1.insercion();
    objeto1.mostrar("ordenados");
    objeto1.llenado();
    objeto1.mostrar("desordenados");
    objeto1.burbuja();
    objeto1.mostrar("ordenados");
    objeto1.llenado();
    objeto1.mostrar("desordenados");
    objeto1.seleccion();
    objeto1.mostrar("ordenados");
    return 0;
}


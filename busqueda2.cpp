
#include <iostream>
#define max 5
using namespace std;

class Busqueda {
private: 
    int datos[5] = {3,1,33,4,2};
    public:
    void secuencial(int);
    void ordenado ();
    int binaria();
    void mostrar(string);
    
    Busqueda();
    ~Busqueda();
};
//Constructor
Busqueda::Busqueda()
{

}
//Destructor
Busqueda::~Busqueda()
{

}
void Busqueda::secuencial(int dato)
{
    int i;
    char flag = 'F';
    i = 0;
    while ((flag=='F')&&(i<5))
    {
        if (datos[i]==dato)
        {
            flag='V';
        }
        else (datos[i]>=dato); {
            
        }
       
        i++;
    }
    if (flag=='F')
    {
        cout<<"El dato: "<<dato<<" no existe en el arreglo";
    }
    else
    {
        cout<<"El dato: "<<dato<<" se encuentra en la posicion ["<<i-1<<"] del arreglo";
    }
}

void Busqueda::ordenado()
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

int Busqueda::binaria()
{
 
   int mitad;
   int izq;
   int der;
   int n;
   int t;
   
    izq=0;der=n-1;
    while(izq<=der)
    {
        mitad = (izq+der)/2;
        if (t>datos[mitad])izq = mitad+1;
        else if(t<datos[mitad]) der = mitad-1;
        else return mitad;
    }
    return -1;
}

void Busqueda::mostrar(string _estado)
{
    int i;
    cout<<"Los valores "<<_estado<<" del arreglo son : {";
    for (i=0;i<max;i++)
    {
        cout<<datos[i]<<", ";
    }
    cout<<datos[max]<<"}"<<endl;
}

int main(int argc, char** argv) {

    Busqueda objeto1;
    int numero;
    cout<<"Que dato deseas buscar?";
    cin>>numero;
    objeto1.secuencial(numero);
  objeto1.mostrar("desordenados");
    objeto1.ordenado();
    objeto1.mostrar("ordenados");
    cout<<"Elemento a buscar";
    cin>>numero;
    objeto1.binaria();
    
   
    
    
    
    return 0;
}


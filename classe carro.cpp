 #include <iostream>
using namespace std;
class Carro
{
    public:
    
    string Cor;
    string Modelo;
    float VelMax;
    void Buzinar ();
};

int main() {
    
    Carro MeuCarro;
    
    MeuCarro.Cor = "Cinza";
    MeuCarro.Modelo = "Logan";
    MeuCarro.VelMax = 164.0f;
    
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
}

void Carro::Buzinar(){
    cout << "Bi, Bi!!!" << endl;
}

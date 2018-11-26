#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename tipo1, typename tipo2>
class Setor{
protected:
    tipo1 codigoGen;
    vector<tipo2*> membros;
public:
    tipo1 getCodigo(){
    return this -> codigoGen;
    }

    void setCodigo(tipo1 _codigoGen){
    this -> codigo = _codigoGen;
    }

    tipo2 getMembros(){
    return this -> membros;
    }

    void setMembros(tipo2 _membros){
    this -> membros = _membros;
    }

    void criaMembro(tipo2 membro){
    membros.push_back(membro);
    }

    void removeMembro(){
    vector.pop_back();
    }
}

class Funcionario{
private:
string nome;
int matricula, salario, CH;
public:
    void setNome(string _nome){
    this -> nome = _nome;
    }

    string getNome(){
    return this -> nome;
    }

    void setMatricula(int _matricula){
    this -> matricula = _matricula;
    }

    int getMatricula(){
    return this -> matricula;
    }

    void setSalario(int _salario){
    this -> salario = _salario;
    }

    int getSalario(){
    return this -> salario;
    }

    void setCH(int _CH){
    this -> CH = _CH;
    }

    int getCH(){
    return this -> CH;
    }

    virtual void imprimeInformacoes() = 0{
    cout << this -> nome << endl << cout << this -> matricula << endl << cout << this -> salario << endl << cout << this -> CH << endl;
    }

    virtual void Funcao() = 0{
    //imprimir função
    }
}

class Analista: public Funcionario{
virtual void imprimeInformacoes() = 0{
    cout << this -> nome << endl << cout << this -> matricula << endl << cout << this -> salario << endl << cout << this -> CH << endl;
    }

    virtual void Funcao() = 0{
    //imprimir função
    }
}

class Desenvolvedor: public Funcionario{
virtual void imprimeInformacoes() = 0{
    cout << this -> nome << endl << cout << this -> matricula << endl << cout << this -> salario << endl << cout << this -> CH << endl;
    }

    virtual void Funcao() = 0{
    //imprimir função
    }
}

class Testador: public Funcionario{
virtual void imprimeInformacoes() = 0{
    cout << this -> nome << endl << cout << this -> matricula << endl << cout << this -> salario << endl << cout << this -> CH << endl;
    }

    virtual void Funcao() = 0{
    //imprimir função
    }
}

int main(){

}

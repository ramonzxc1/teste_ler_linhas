#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream arquivo;
    arquivo.open("arquivos para leitura/funcoes.txt", ios::in);
    string linha;
    while(getline(arquivo, linha))
    {
        cout << "\nLinha a ser testada: " << linha << endl;

        if(linha == "carregarEmpresa()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "carregarAsg()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "carregarVendedor()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "carregarGerente()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "carregaDono()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "imprimeAsgs()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "imprimeVendedores()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "imprimeGerentes()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "imprimeDono()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "buscaFuncionario()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "calculaSalarioFuncionario()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "calculaTodoOsSalarios()")
            cout << "O teste com '" << linha << "' funcionou.\n";
        if(linha == "calcularRecisao()")
            cout << "O teste com '" << linha << "' funcionou.\n";
    }
    arquivo.close();
    return 0;
}
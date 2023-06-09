#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    //int matricula = stoi("6515651");
    //cout << "stoi(\"matricula\"): " << matricula << endl;
    vector<string> v;

    fstream arquivo;
    arquivo.open("arquivos para leitura/funcoes.txt", ios::in);
    string linha;
    while(getline(arquivo, linha))
    {
        v.push_back(linha);
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

    cout << "\nImprimindo o conteudo de v: \n";
    for(auto i : v)
        cout << i << endl;
    

    fstream arquivo2;
    arquivo2.open("arquivos para escrita/funcoes_salvas.txt", ios::out);
    for(auto i : v)
    {
        arquivo2 << i << endl;
    }
    arquivo2.close();
    
    return 0;
}
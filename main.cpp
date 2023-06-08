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
        cout << "Linha antes do teste: " << linha << endl;

        if(linha == "carregarEmpresa()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "carregarAsg()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "carregarVendedor()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "carregarGerente()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "carregaDono()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "imprimeAsgs()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "imprimeVendedores()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "imprimeGerentes()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "imprimeDono()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "buscaFuncionario()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "calculaSalarioFuncionario()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "calculaTodoOsSalarios()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
        if(linha == "calcularRecisao()")
            cout << "O teste com: '" << linha << "' funcionou.\n\n";
    }
    arquivo.close();
    return 0;
}
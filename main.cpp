#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    //Variável que define as opções do menu nível 0
    int opcao1 = -1, opcao2 = -1;
    while (opcao1 != 9) {
        //Escreve o menu de opções do nível 1
        cout << endl << ">> Menu Nível 0 <<"
                << endl << " 1 - Opção 1"
                << endl << " 2 - Opção 2"
                << endl << " 3 - Opção 3"
                << endl << " 9 - Sair"
                << endl << " Digite uma opção:";
        //Lê a opção de entrada do nível 1
        cin >> opcao1;
        switch (opcao1) {
            case 1:
                //Variável que define as opções do menu nível 2
                opcao2 = -1;
                while (opcao2 != 9) {
                    //Escreve o menu de opções do nível 2
                    cout << endl << ">> Menu Nível 0.1 <<"
                            << endl << " 1 - Opção 1.1"
                            << endl << " 2 - Opção 1.2"
                            << endl << " 9 - Voltar ao nível 0"
                            << endl << " Digite uma opção:";

                    //Lê a opção de entrada do nível 2
                    cin >> opcao2;
                    switch (opcao2) {
                        case 1:
                            cout << endl << "Executando opção 1.1";
                            break;
                        case 2:
                            cout << endl << "Executando opção 1.2";
                            break;

                            //Outras opções vão aqui

                        case 9:
                            cout << endl << "Voltando ao nível 0";
                            break;
                        default:
                            cout << endl << "Opção inválida";
                    }
                }
                break;
            
            case 2:
                //Variável que define as opções do menu nível 2
                opcao2 = -1;
                while (opcao2 != 9) {
                    //Escreve o menu de opções do nível 2
                    cout << endl << ">> Menu Nível 0.2 <<"
                            << endl << " 1 - Opção 2.1"
                            << endl << " 2 - Opção 2.2"
                            << endl << " 9 - Voltar ao nível 0"
                            << endl << " Digite uma opção:";

                    //Lê a opção de entrada do nível 2
                    cin >> opcao2;
                    switch (opcao2) {
                        case 1:
                            cout << endl << "Executando opção 2.1";
                            break;
                        case 2:
                            cout << endl << "Executando opção 2.2";
                            break;

                            //Outras opções vão aqui

                        case 9:
                            cout << endl << "Voltando ao nível 0";
                            break;
                        default:
                            cout << endl << "Opção inválida";
                    }
                }
                break;
            
                //Outras opções vão aqui

            case 9:
                cout << endl << "Saindo do sistema";
                break;
            default:
                cout << endl << "Opção inválida";
        }
    }
    return EXIT_SUCCESS;
}

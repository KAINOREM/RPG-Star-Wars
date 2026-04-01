#include <iostream>

int main() {
    srand(time(0));

    int escolha;
    int vidaJogador = 10;
    int vidaMonstro = 8;
    bool defendendo = false;
    bool venceu = false;

    cout << "====================================\n";
    cout << " STAR WARS - A CAVERNA DO ORBE\n";
    cout << "====================================\n";

    cout << "\nVoce pousa sua nave em um planeta remoto.\n";
    cout << "A sua frente existe uma caverna misteriosa.\n";
    cout << "Dentro dela pode estar o Orbe Ancestral.\n";

    // ESCOLHA 1
    cout << "\nO que voce deseja fazer?\n";
    cout << "1 - Entrar na caverna\n";
    cout << "2 - Ir embora\n";
    cout << "Opcao: ";
    cin >> escolha;

    if (escolha == 2) {
        cout << "\nVoce decidiu abandonar a missao.\n";
        cout << "GAME OVER\n";
        return 0;
    }

    cout << "\nVoce entra na caverna e avanca com cuidado.\n";

    // ESCOLHA 2
    cout << "\nDois caminhos aparecem:\n";
    cout << "1 - Caminho iluminado por cristais\n";
    cout << "2 - Tunel escuro e silencioso\n";
    cout << "Opcao: ";
    cin >> escolha;

    if (escolha == 1) {
        cout << "\nOs cristais ativaram uma armadilha.\n";
        cout << "Voce perdeu 2 de vida.\n";
        vidaJogador -= 2;
    } 
    else if (escolha == 2) {
        cout << "\nVoce passou pelo tunel sem ser visto.\n";
    } 
    else {
        cout << "\nVoce ficou confuso e se machucou no caminho.\n";
        cout << "Voce perdeu 1 de vida.\n";
        vidaJogador -= 1;
    }

    if (vidaJogador <= 0) {
        cout << "\nVoce nao resistiu aos perigos da caverna.\n";
        cout << "GAME OVER\n";
        return 0;
    }

    // ESCOLHA 3
    cout << "\nMais a frente, voce encontra uma ponte de pedra quebrada.\n";
    cout << "1 - Tentar atravessar rapido\n";
    cout << "2 - Procurar outro caminho\n";
    cout << "Opcao: ";
    cin >> escolha;

    if (escolha == 1) {
        int dadoPonte = rolarDado();
        cout << "\nVoce rolou um dado: " << dadoPonte << endl;

        if (dadoPonte >= 4) {
            cout << "Voce conseguiu atravessar a ponte.\n";
        } else {
            cout << "Voce escorregou e perdeu 2 de vida.\n";
            vidaJogador -= 2;
        }
    } 
    else if (escolha == 2) {
        cout << "\nVoce encontrou um caminho alternativo.\n";
        cout << "Mas o barulho acordou o guardiao da caverna.\n";
    } 
    else {
        cout << "\nNa duvida, voce tentou passar mesmo assim.\n";
        cout << "Voce perdeu 1 de vida.\n";
        vidaJogador -= 1;
    }

    if (vidaJogador <= 0) {
        cout << "\nVoce nao resistiu a jornada.\n";
        cout << "GAME OVER\n";
        return 0;
    }
}
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>

using namespace std;

void sinal();
void caverna();

// Funcao para rolar um dado de 6 lados
int rolarDado() {
    return rand() % 6 + 1;
}

int main(){
    int escolha;

    cout << "====================================\n";
    cout << " UMA AVENTURA STAR WARS\n";
    cout << "====================================\n";

    cout << "\nVocê é um Jedi Rebelde, encarregado de viajar até o gélido planeta Hoth em busca de um artefato ancestral.\n";
    cout << "Dizem que esse artefato possui uma energia antiga, capaz de ajudar na luta contra o Império.\n";
    cout << "Sua missão é simples… encontrar o artefato antes que ele caia nas mãos erradas.\n";

    cout << "\nA caminho do seu destino, você recebe um sinal estranho no comunicador.\n";
    cout << "Isso significaria um pequeno desvio da sua missão.\n";

    cout << "Você decide investigar?\n";
    cout << "1 - Investigar sinal desconhecido\n";
    cout << "2 - Seguir com a sua missão.\n";
    cout << "Resposta: ";
    cin >> escolha;
    if(escolha == 1) {
        sinal();
    } else if (escolha == 2) {
        caverna();
    }
}

void sinal() {
    int escolha;

    system("clear");

    cout << "====================================\n";
    cout << " O SINAL DESCONHECIDO\n";
    cout << "====================================\n";

    cout << "\nVocê decide investigar o sinal desconhecido.\n";
    cout << "À medida que se aproxima de sua origem, o vazio do espaço revela uma presença ameaçadora:\n";
    cout << "Um Destroyer Imperial, oculto entre os fragmentos gelados do cinturão de asteroides de Hoth.\n\n";
    cout << "Percebendo o perigo, você tenta recuar silenciosamente, movendo sua nave com cautela para não chamar atenção.\n";
    cout << "Mas é tarde demais - dois caças imperiais surgem no seu encalço.\n";

    
    cout << "\nA perseguição começa.\n";

    cout << "\nDesviando por entre os asteroides em alta velocidade, você luta para escapar, mas um erro de cálculo é tudo o que basta.\n";
    cout << "Sua nave colide violentamente contra um dos blocos de gelo.\n";
    cout << "O impacto é brutal.\n";
    cout << "Sua visão escurece… e tudo fica em silêncio.\n";
    cout << "Continuar\n";
    cin >> escolha;
    
    system("clear");

    this_thread::sleep_for(chrono::seconds(1));
    cout << ".\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "..\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "...\n";
    this_thread::sleep_for(chrono::seconds(1));
    system("clear");

    cout << "Você desperta com a cabeça latejando.\n";
    cout << "\nSeus pulsos estão presos por algemas, e seu corpo, pesado — completamente desarmado. \n";
    cout << "Ao olhar em volta, você reconhece o ambiente:\n";
    cout << "Uma cela metálica, provavelmente dentro do Destroyer Imperial.\n";
    
    cout << "\nDo lado de fora, dois guardas conversam em voz baixa. Você se concentra, tentando captar cada palavra.\n";
    
    cout << "\nEles mencionam sua captura… e algo pior.\n";

    cout << "\nO alto comando já está sendo notificado e que provavelmente irão enviar um Inquisidor.\n";
    
    cout << "\nVocê percebe que conseguiria destruir a porta usando a força, mas isso te deixaria exausto, porém é questão de tempo até enviarem um inquisidor.\n";

    cout << "\nO que você faz?\n";
    cout << "1 - Destruir a porta usando a Força\n";
    cout << "2 - Procurar outra saída.\n";
    cout << "Resposta: ";
    cin >> escolha;
    if(escolha == 1) {
        system("clear");

        cout << "Você decidide destruir a porta\n";
        cout << "Concentrando a Força, você consegue arrancar a porta da cela e arremessá-la para frente.\n";
        cout << "Ela voa alguns metros e bate na cela oposta, mas não atinge nenhum dos guardas.\n";
        cout << "— Droga, o Jedi escapou! Atirem! — grita um deles.\n";
        cout << "Exausto e desarmado, você nem consegue reagir.\n";
        cout << "Os disparos de blaster atingem você em cheio.\n";
        cout << "Tudo escurece.\n";
        cout << "\nGAME OVER";
        
        return;
    } else if (escolha == 2) {
        system("clear");

        cout << "Olhando em volta, você percebe um duto de ventilação. Usando a Força, consegue soltá-lo e abrir passagem.\n";
        cout << "Você entra no duto e logo encontra uma bifurcação: um caminho à direita e outro à esquerda.\n";
        cout << "Ao ouvir as vozes dos soldados, você entende a situação. Eles já perceberam sua fuga.\n";
        cout << "Pelas conversas, você descobre:\n";
        cout << "  •O caminho da esquerda leva à sala de armas\n";
        cout << "  •O da direita aparenta ser os aposentos do Capitão\n";

        cout << "\nQual caminho você escolhe?\n";
        cout << "1 - Aposentos do Capitão\n";
        cout << "2 - Sala de Armas\n";
        cout << "Resposta: ";
        cin >> escolha;

        if(escolha == 1) {
            system("clear");

            cout << "Você decide seguir pelo caminho da direita.\n";
            cout << "Ao chegar aos aposentos do Capitão, percebe que a sala está vazia.\n";
            cout << "Em cima da mesa, como um troféu, está o seu sabre de luz.\n";
            cout << "Você sai do duto, se aproxima e pega o sabre.\n";
            cout << "No mesmo instante, a porta se abre.\n";
            cout << "Um Stormtrooper entra e para ao te ver.\n";
            cout << "\n— Então você é o Jedi… perfeito. Você não viverá para ver o dia de amanhã.\n";
            cout << "Eu vou te derrubar aqui e agora, sozinho, e mostrar a todos do que sou capaz.\n";
            cout << "\nEle corre em sua direção, com seu bastão eletrificado.\n";
            cout << "Entrar em Combate\n";
            cin >> escolha;
            
            system("clear");
            cout << "====================================\n";
            cout << "!!COMBATE!!";
            cout << "\n====================================\n";
            cout << "\nINIMIGO: Vanderlei, o cara da Manutenção\n";

            cout << "\nAções Disponíveis\n";
            cout << "1 - Atacar com seu sabre de luz\n";
            cout << "2 - Utilizar a força\n";
            cout << "3 - Esperar o Stormtrooper atacar para contra-atacar\n";
            cout << "Resposta: ";
            cin >> escolha;
            
            if(escolha == 1) {
                system("clear");

                cout << "Você ativa seu sabre de luz e parte para o ataque.\n";
                cout << "Vanderlei tenta se defender com o bastão, mas não entende com o que está lidando.\n";
                cout << "O sabre atravessa o metal como se fosse nada.\n";
                cout << "O bastão é cortado ao meio… e Vanderlei também.";
                cout << "Continuar\n";
                cin >> escolha;

            } else if (escolha == 2) {
                system("clear");

                cout << "Você decide usar a força\n";
                cout << "Vanderlei é arremessado com violência contra a parede.\n";
                cout << "Ele bate a cabeça com força e cai no chão, desacordado.\n";
                cout << "Continuar\n";
                cin >> escolha;

            } else if (escolha == 3) {
                system("clear");

                cout << "Você decide apenas desviar do ataque\n";
                cout << "Vanderlei avança com tudo, mas se atrapalha no próprio movimento.\n";
                cout << "Ele tropeça, perde o controle do bastão e acaba se eletrocutando.\n";
                cout << "O choque o derruba imediatamente.\n";
                cout << "Continuar\n";
                cin >> escolha;
            }

            system("clear");

            cout << "Após derrotar Vanderlei, você sai rapidamente da sala.\n";
            cout << "No caminho, encontra a sala de comando… completamente vazia,\n";
            cout << "Provavelmente por causa do alvoroço que você causou.\n";
            cout << "Seguindo pelo corredor, você avista o hangar onde sua nave está.\n";
            cout << "Para sua sorte, também parece estar vazio.\n";
            cout << "Você tem pouco tempo.\n";
            cout << "Pode tentar sabotar os sistemas do Destroyer antes de fugir…\n";
            cout << "Ou simplesmente correr até sua nave e sair dali o mais rápido possível.\n";
            cout << "\nO que você faz?\n";
            cout << "1 — Sabotar os sistemas da nave\n";
            cout << "2 — Correr até a sua nave\n";
            cout << "Resposta: ";
            cin >> escolha;

            if(escolha == 1) {
                system("clear");

                cout << "Você decide sabotar os sistemas da nave.\n";
                cout << "Sem saber exatamente o que está fazendo e com pouco tempo, você começa a apertar todos os botões que encontra.\n";
                cout << "Vê palavras como 'sobrecarga', 'armas' e 'comunicação', e ativa tudo sem pensar muito.\n";
                cout << "Saindo da sala, satisfeito com o caos que causou, você logo lembra onde está.\n";
                cout << "Um exército de stormtroopers aparece no corredor, correndo na sua direção, todos com os blasters apontados para você.\n";
                cout << "Você corre como nunca, desviando dos tiros com a ajuda do seu sabre.\n";
                cout << "Ao chegar no hangar, entra na sua nave, liga tudo às pressas e decola o mais rápido possível.\n";
                cout << "\nMesmo com os escudos danificados pelo impacto anterior, eles ainda conseguem aguentar alguns disparos de blasters.";
                cout << "\nCom o coração acelerado, você sabe que é só questão de tempo até usarem os canhões do Destroyer.";
                cout << "\nE acontece.";
                cout << "\nO Destroyer abre fogo contra você.";
                cout << "\nO primeiro tiro passa longe.";

                cout << "\nContinuar\n";
                cin >> escolha;
                system("clear");
                this_thread::sleep_for(chrono::seconds(1));
                cout << ".\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "..\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "...\n";
                this_thread::sleep_for(chrono::seconds(1));
                system("clear");
                cout << "O segundo quase acerta.\n";

                this_thread::sleep_for(chrono::seconds(2));
                cout << ".\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "..\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "...\n";
                this_thread::sleep_for(chrono::seconds(1));
                system("clear");
                cout << "Você já tinha aceitado seu destino…\n";
                cout << "Quando, de repente, o Destroyer explode.\n";
                cout << "A explosão lança sua nave para longe, mas você ainda está inteiro.\n";
                cout << "Você conseguiu escapar.\n";
                cout << "Com a nave danificada, você decide retornar à base para descansar.\n";
                
                cout << "\nVOCÊ SOBREVIVEU!\n";
                return;
            } else if (escolha == 2) {
                system("clear");

                cout << "Você decide escapar do Destroyer o mais rápido possível, antes que mais reforços cheguem.\n";
                cout << "Ao entrar na sua nave, tudo está exatamente como você deixou.\n";
                cout << "Você decola a tempo de ver os stormtroopers chegando na plataforma.\n";
                cout << "Por um momento, parece que você conseguiu.\n";
                cout << "Mas, ao criar certa distância da nave, o Destroyer abre fogo.\n";
                cout << "Com os danos do impacto anterior, sua nave não consegue ganhar velocidade suficiente.\n";
                cout << "Os tiros atingem em cheio.\n";
                cout << "Sua nave explode com você dentro.\n";
                cout << "\nGAME OVER\n";
                
                return;
            }



        } else if (escolha == 2) {
            system("clear");

            cout << "Você decide seguir para a sala de armas, esperando encontrar seu equipamento, principalmente seu sabre de luz.\n";
            cout << "Ao chegar, o duto de ventilação cede e se quebra. Você cai no chão com um barulho alto, bem no meio da sala.\n";
            cout << "Quando levanta o olhar, percebe a situação.\n";
            cout << "O que parece ser um esquadrão inteiro está ali… todos olhando para você, com os blasters apontados.\n";
            cout << "Nem tem o que fazer.\n";
            cout << "O barulho dos blasters é a última coisa que você ouve. \n";
            cout << "\nGAME OVER";
            
            return;
        }
    }

    return;
}


void caverna() {
    srand(time(0));

    int escolha;
    int vidaJogador = 10;
    int vidaMonstro = 8;
    bool defendendo = false;
    bool venceu = false;

    cout << "====================================\n";
    cout << " A CAVERNA DO ORBE\n";
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
        return;
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
        return;
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
        return;
    }
}
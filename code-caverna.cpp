#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;

void sinal();
void caverna();

// Funcao para rolar um dado de 6 lados
int rolarDado() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

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
    cout << "2 - Seguir com a sua missão\n";
    cout << "Resposta: ";
    cin >> escolha;

    if (escolha == 1) {
        sinal();
    } else if (escolha == 2) {
        caverna();
    } else {
        cout << "\nOpcao invalida.\n";
    }

    return 0;
}

void sinal() {
    int escolha;


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


    this_thread::sleep_for(chrono::seconds(1));
    cout << ".\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "..\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "...\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "Você desperta com a cabeça latejando.\n";
    cout << "\nSeus pulsos estão presos por algemas, e seu corpo, pesado — completamente desarmado.\n";
    cout << "Ao olhar em volta, você reconhece o ambiente:\n";
    cout << "Uma cela metálica, provavelmente dentro do Destroyer Imperial.\n";

    cout << "\nDo lado de fora, dois guardas conversam em voz baixa. Você se concentra, tentando captar cada palavra.\n";
    cout << "\nEles mencionam sua captura… e algo pior.\n";
    cout << "\nO alto comando já está sendo notificado e que provavelmente irão enviar um Inquisidor.\n";
    cout << "\nVocê percebe que conseguiria destruir a porta usando a força, mas isso te deixaria exausto, porém é questão de tempo até enviarem um inquisidor.\n";

    cout << "\nO que você faz?\n";
    cout << "1 - Destruir a porta usando a Força\n";
    cout << "2 - Procurar outra saída\n";
    cout << "Resposta: ";
    cin >> escolha;

    if (escolha == 1) {
        system("cls");

        cout << "Você decide destruir a porta.\n";
        cout << "Concentrando a Força, você consegue arrancar a porta da cela e arremessá-la para frente.\n";
        cout << "Ela voa alguns metros e bate na cela oposta, mas não atinge nenhum dos guardas.\n";
        cout << "— Droga, o Jedi escapou! Atirem! — grita um deles.\n";
        cout << "Exausto e desarmado, você nem consegue reagir.\n";
        cout << "Os disparos de blaster atingem você em cheio.\n";
        cout << "Tudo escurece.\n";
        cout << "\nGAME OVER\n";
        return;
    } 
    else if (escolha == 2) {
        system("cls");

        cout << "Olhando em volta, você percebe um duto de ventilação. Usando a Força, consegue soltá-lo e abrir passagem.\n";
        cout << "Você entra no duto e logo encontra uma bifurcação: um caminho à direita e outro à esquerda.\n";
        cout << "Ao ouvir as vozes dos soldados, você entende a situação. Eles já perceberam sua fuga.\n";
        cout << "Pelas conversas, você descobre:\n";
        cout << "  • O caminho da esquerda leva à sala de armas\n";
        cout << "  • O da direita aparenta ser os aposentos do Capitão\n";

        cout << "\nQual caminho você escolhe?\n";
        cout << "1 - Aposentos do Capitão\n";
        cout << "2 - Sala de Armas\n";
        cout << "Resposta: ";
        cin >> escolha;

        if (escolha == 1) {
            system("cls");

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

            cout << "====================================\n";
            cout << "!!COMBATE!!\n";
            cout << "====================================\n";
            cout << "\nINIMIGO: Vanderlei, o cara da Manutenção\n";

            cout << "\nAções Disponíveis\n";
            cout << "1 - Atacar com seu sabre de luz\n";
            cout << "2 - Utilizar a força\n";
            cout << "3 - Esperar o Stormtrooper atacar para contra-atacar\n";
            cout << "Resposta: ";
            cin >> escolha;

            if (escolha == 1) {
                system("cls");

                cout << "Você ativa seu sabre de luz e parte para o ataque.\n";
                cout << "Vanderlei tenta se defender com o bastão, mas não entende com o que está lidando.\n";
                cout << "O sabre atravessa o metal como se fosse nada.\n";
                cout << "O bastão é cortado ao meio… e Vanderlei também.\n";

            } else if (escolha == 2) {
                system("cls");

                cout << "Você decide usar a Força.\n";
                cout << "Vanderlei é arremessado com violência contra a parede.\n";
                cout << "Ele bate a cabeça com força e cai no chão, desacordado.\n";

            } else if (escolha == 3) {
                system("cls");

                cout << "Você decide apenas desviar do ataque.\n";
                cout << "Vanderlei avança com tudo, mas se atrapalha no próprio movimento.\n";
                cout << "Ele tropeça, perde o controle do bastão e acaba se eletrocutando.\n";
                cout << "O choque o derruba imediatamente.\n";
              
            }

            system("cls");

            cout << "Após derrotar Vanderlei, você sai rapidamente da sala.\n";
            cout << "No caminho, encontra a sala de comando… completamente vazia,\n";
            cout << "provavelmente por causa do alvoroço que você causou.\n";
            cout << "Seguindo pelo corredor, você avista o hangar onde sua nave está.\n";
            cout << "Para sua sorte, também parece estar vazio.\n";
            cout << "Você tem pouco tempo.\n";
            cout << "Pode tentar sabotar os sistemas do Destroyer antes de fugir…\n";
            cout << "Ou simplesmente correr até sua nave e sair dali o mais rápido possível.\n";

            cout << "\nO que você faz?\n";
            cout << "1 - Sabotar os sistemas da nave\n";
            cout << "2 - Correr até a sua nave\n";
            cout << "Resposta: ";
            cin >> escolha;

            if (escolha == 1) {
                system("cls");

                cout << "Você decide sabotar os sistemas da nave.\n";
                cout << "Sem saber exatamente o que está fazendo e com pouco tempo, você começa a apertar todos os botões que encontra.\n";
                cout << "Vê palavras como 'sobrecarga', 'armas' e 'comunicação', e ativa tudo sem pensar muito.\n";
                cout << "Saindo da sala, satisfeito com o caos que causou, você logo lembra onde está.\n";
                cout << "Um exército de stormtroopers aparece no corredor, correndo na sua direção, todos com os blasters apontados para você.\n";
                cout << "Você corre como nunca, desviando dos tiros com a ajuda do seu sabre.\n";
                cout << "Ao chegar no hangar, entra na sua nave, liga tudo às pressas e decola o mais rápido possível.\n";
                cout << "\nMesmo com os escudos danificados pelo impacto anterior, eles ainda conseguem aguentar alguns disparos de blasters.\n";
                cout << "Com o coração acelerado, você sabe que é só questão de tempo até usarem os canhões do Destroyer.\n";
                cout << "E acontece.\n";
                cout << "O Destroyer abre fogo contra você.\n";
                cout << "O primeiro tiro passa longe.\n";

                system("cls");

                this_thread::sleep_for(chrono::seconds(1));
                cout << ".\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "..\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "...\n";
                this_thread::sleep_for(chrono::seconds(1));
                
                system("cls");

                cout << "O segundo quase acerta.\n";

                this_thread::sleep_for(chrono::seconds(1));
                cout << ".\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "..\n";
                this_thread::sleep_for(chrono::seconds(1));
                cout << "...\n";
                this_thread::sleep_for(chrono::seconds(1));
                
                system("cls");

                cout << "Você já tinha aceitado seu destino…\n";
                cout << "Quando, de repente, o Destroyer explode.\n";
                cout << "A explosão lança sua nave para longe, mas você ainda está inteiro.\n";
                cout << "Você conseguiu escapar.\n";
                cout << "Com a nave danificada, você decide retornar à base para descansar.\n";

                cout << "\nVOCÊ SOBREVIVEU!\n";
                return;

            } else if (escolha == 2) {
                system("cls");

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
            system("cls");

            cout << "Você decide seguir para a sala de armas, esperando encontrar seu equipamento, principalmente seu sabre de luz.\n";
            cout << "Ao chegar, o duto de ventilação cede e se quebra. Você cai no chão com um barulho alto, bem no meio da sala.\n";
            cout << "Quando levanta o olhar, percebe a situação.\n";
            cout << "O que parece ser um esquadrão inteiro está ali… todos olhando para você, com os blasters apontados.\n";
            cout << "Nem tem o que fazer.\n";
            cout << "O barulho dos blasters é a última coisa que você ouve.\n";
            cout << "\nGAME OVER\n";
            return;
        }
    }

    return;
}

void caverna() {
    int escolha;
    int vidaJogador = 10;
    int vidaMonstro = 10;
    bool defendendo = false;
    bool venceu = false;

    system("cls");
    cout << "====================================\n";
    cout << " A CAVERNA DO ORBE ANCESTRAL\n";
    cout << "====================================\n";

    cout << "\nVocê ignora o sinal desconhecido e segue firme em sua missão.\n";
    cout << "Depois de algum tempo viajando pelo hiperespaço, sua nave finalmente alcança o destino.\n";
    cout << "Diante de você, um planeta remoto e silencioso se revela.\n";
    cout << "Segundo antigos registros da Ordem Jedi, é aqui que repousa o Orbe Ancestral.\n";

    this_thread::sleep_for(chrono::seconds(1));
    cout << "\n...\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nVocê pousa sua nave sobre um terreno gelado e irregular.\n";
    cout << "À sua frente existe uma enorme caverna, escura e misteriosa.\n";
    cout << "De dentro dela sopra um vento frio, como se o próprio lugar estivesse vivo.\n";
    cout << "Você sente pela Força que há algo poderoso ali dentro.\n";

    cout << "\nO que você deseja fazer?\n";
    cout << "1 - Entrar na caverna\n";
    cout << "2 - Ir embora\n";
    cout << "Opcao: ";
    cin >> escolha;

    if (escolha == 2) {
        system("cls");
        cout << "Você observa a entrada da caverna por alguns instantes.\n";
        cout << "O medo fala mais alto, e você decide voltar para a nave.\n";
        cout << "Talvez o artefato nunca devesse ser encontrado.\n";
        cout << "\nGAME OVER\n";
        return;
    } 
    else if (escolha != 1) {
        system("cls");
        cout << "Sem conseguir se decidir, você hesita por tempo demais.\n";
        cout << "A oportunidade escapa das suas mãos.\n";
        cout << "\nGAME OVER\n";
        return;
    }

    system("cls");
    cout << "====================================\n";
    cout << " A ENTRADA DA CAVERNA\n";
    cout << "====================================\n";

    cout << "\nVocê respira fundo e entra na caverna com cautela.\n";
    cout << "Cada passo ecoa pelas paredes de pedra.\n";
    cout << "A luz da entrada vai ficando para trás, e a escuridão toma conta do ambiente.\n";
    cout << "Logo adiante, dois caminhos se revelam.\n";

    cout << "\nQual caminho você escolhe?\n";
    cout << "1 - Caminho iluminado por cristais\n";
    cout << "2 - Túnel escuro e silencioso\n";
    cout << "Opcao: ";
    cin >> escolha;

    if (escolha == 1) {
        system("cls");
        cout << "Você segue pelo brilho dos cristais, acreditando que aquele seja o caminho mais seguro.\n";
        cout << "Por um breve momento, a caverna parece bela… quase hipnotizante.\n";
        cout << "Mas então, ao tocar o chão errado, uma armadilha antiga é ativada.\n";
        cout << "Fragmentos de pedra despencam do teto.\n";
        cout << "Você consegue escapar, mas sai ferido.\n";
        cout << "\nVocê perdeu 2 de vida.\n";
        vidaJogador -= 2;
    } 
    else if (escolha == 2) {
        system("cls");
        cout << "Você escolhe o túnel escuro, confiando mais nos seus instintos do que na visão.\n";
        cout << "O silêncio é absoluto.\n";
        cout << "Com passos lentos e mão firme, você avança sem chamar atenção.\n";
        cout << "Por enquanto, tudo parece sob controle.\n";
    } 
    else {
        system("cls");
        cout << "Confuso diante da bifurcação, você demora demais para decidir.\n";
        cout << "Ao tentar mudar de direção rapidamente, acaba escorregando entre as pedras.\n";
        cout << "\nVocê perdeu 1 de vida.\n";
        vidaJogador -= 1;
    }

    if (vidaJogador <= 0) {
        cout << "\nOs perigos da caverna foram demais para você.\n";
        cout << "\nGAME OVER\n";
        return;
    }

    this_thread::sleep_for(chrono::seconds(1));
    cout << "\n...\n";
    this_thread::sleep_for(chrono::seconds(1));

    system("cls");
    cout << "====================================\n";
    cout << " A PONTE DE PEDRA\n";
    cout << "====================================\n";

    cout << "\nApós seguir mais fundo, você encontra uma antiga ponte de pedra.\n";
    cout << "Ela cruza um abismo estreito, mas profundo o bastante para ser fatal.\n";
    cout << "As rachaduras mostram que ela pode não aguentar por muito tempo.\n";

    cout << "\nO que você faz?\n";
    cout << "1 - Tentar atravessar rápido\n";
    cout << "2 - Procurar outro caminho\n";
    cout << "Opcao: ";
    cin >> escolha;

    if (escolha == 1) {
        system("cls");
        cout << "Você toma impulso e corre sobre a ponte.\n";
        cout << "As pedras rangem sob seus pés.\n";

        int dadoPonte = rolarDado();
        cout << "\nTeste de travessia...\n";
        this_thread::sleep_for(chrono::seconds(1));
        cout << "Dado rolado: " << dadoPonte << "\n";

        if (dadoPonte >= 4) {
            cout << "\nVocê consegue atravessar antes que a estrutura ceda.\n";
        } else {
            cout << "\nNo meio do percurso, seu pé escorrega.\n";
            cout << "Você se segura por pouco, mas se machuca ao subir de volta.\n";
            cout << "Você perdeu 2 de vida.\n";
            vidaJogador -= 2;
        }
    } 
    else if (escolha == 2) {
        system("cls");
        cout << "Você decide não arriscar.\n";
        cout << "Seguindo por uma passagem lateral estreita, encontra uma rota alternativa.\n";
        cout << "Mas o som das pedras se movendo desperta algo adormecido nas profundezas.\n";
    } 
    else {
        system("cls");
        cout << "Na dúvida, você tenta avançar mesmo sem um plano claro.\n";
        cout << "O terreno instável cobra seu preço.\n";
        cout << "Você perdeu 1 de vida.\n";
        vidaJogador -= 1;
    }

    if (vidaJogador <= 0) {
        cout << "\nSeu corpo não resiste aos desafios da caverna.\n";
        cout << "\nGAME OVER\n";
        return;
    }

    this_thread::sleep_for(chrono::seconds(1));
    cout << "\n.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "..\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "...\n";
    this_thread::sleep_for(chrono::seconds(1));

    system("cls");
    cout << "====================================\n";
    cout << " O GUARDIÃO DO ORBE\n";
    cout << "====================================\n";

    cout << "\nNo centro da caverna, uma enorme câmara se abre diante de você.\n";
    cout << "No meio dela, envolto por uma energia azulada, está o Orbe Ancestral.\n";
    cout << "Mas você não está sozinho.\n";
    cout << "Das sombras surge uma criatura colossal, antiga, agressiva e corrompida pela energia do artefato.\n";
    cout << "O Guardião do Orbe ruge, e a batalha começa.\n";

    while (vidaJogador > 0 && vidaMonstro > 0) {
        cout << "\n====================================\n";
        cout << " SUA VIDA: " << vidaJogador << "\n";
        cout << " VIDA DO GUARDIÃO: " << vidaMonstro << "\n";
        cout << "====================================\n";

        cout << "\nEscolha sua ação:\n";
        cout << "1 - Atacar com o sabre\n";
        cout << "2 - Defender\n";
        cout << "Opcao: ";
        cin >> escolha;

        int dadoJogador = rolarDado();
        int dadoMonstro = rolarDado();

        cout << "\n--- RESULTADO DO TURNO ---\n";
        cout << "Seu dado: " << dadoJogador << "\n";
        cout << "Dado do Guardião: " << dadoMonstro << "\n\n";

        if (escolha == 1) {
            if (dadoJogador >= 4) {
                cout << "Você avança com precisão e acerta o Guardião.\n";
                cout << "Seu golpe causa 3 de dano.\n";
                vidaMonstro -= 3;
            } else {
                cout << "Você tenta atacar, mas o Guardião recua a tempo.\n";
                cout << "Seu golpe erra o alvo.\n";
            }
            defendendo = false;
        } 
        else if (escolha == 2) {
            cout << "Você assume uma posição defensiva e se prepara para o impacto.\n";
            defendendo = true;
        } 
        else {
            cout << "Você hesita no momento errado e perde a vez.\n";
            defendendo = false;
        }

        if (vidaMonstro > 0) {
            if (dadoMonstro >= 4) {
                if (defendendo) {
                    cout << "O Guardião atinge você, mas sua defesa reduz o impacto.\n";
                    cout << "Você perdeu 1 de vida.\n";
                    vidaJogador -= 1;
                } else {
                    cout << "O Guardião acerta um golpe brutal.\n";
                    cout << "Você perdeu 2 de vida.\n";
                    vidaJogador -= 2;
                }
            } else {
                cout << "O Guardião investe contra você, mas falha no ataque.\n";
            }
        }
    }

    venceu = (vidaJogador > 0);

    system("cls");

    if (venceu) {
        cout << "====================================\n";
        cout << " O ORBE ANCESTRAL\n";
        cout << "====================================\n";

        cout << "\nCom um último golpe, o Guardião cai diante de você.\n";
        cout << "O silêncio retorna à caverna.\n";
        cout << "Você se aproxima lentamente do centro da câmara, onde o Orbe flutua diante dos seus olhos.\n";
        cout << "Ao tocá-lo, uma onda de energia percorre todo o ambiente.\n";
        cout << "Você sente que a missão foi cumprida.\n";
        cout << "\nPARABÉNS! Você venceu a aventura.\n";
    } else {
        cout << "====================================\n";
        cout << " FIM DA JORNADA\n";
        cout << "====================================\n";

        cout << "\nMesmo lutando com coragem, você é derrotado pelo Guardião do Orbe.\n";
        cout << "A caverna silencia mais uma vez, escondendo o artefato de todos que ousarem procurá-lo.\n";
        cout << "\nGAME OVER\n";
    }
}
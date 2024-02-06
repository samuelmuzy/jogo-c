#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#include<windows.h>


/*NOME: LUÍS GUSTAVO SANTOS CARDOZO
        SAMUEL MUZY FERNANDES
        GABRIEL BIANQUINI
        JOÃO VITOR façanha
        JORGE Augusto Vitorio
*/

/*------------------------------------------FUNÇÃO-----------------------------------------------------------------------*/
 int aleatorioCura(int cura, int min, int max){
 srand(time(0));
 int num = (rand() % (max - min + 1)) + min;
 return num+cura;
 }
 int aleatorioDano(int dano,int min,int max){
 srand(time(0));
 int num = (rand() % (max - min + 1)) + min;
 return dano-num;
 }
 
 int aleatorioRandom(int alet,int min,int max){   
 srand(time(0));
 int nume = (rand() % (max - min + 1)) + min; 
 return alet = nume; 
 }
 int sub(int menos){
 int treco = 1;
 return menos - treco;
 }
 void pontilhar(){
  printf("------------------------------------------------------------------------------------------------");
 }
 void caverna(){
   printf("voce encontrou um novo caminho");
   printf("\nA decisão é sua, aventureiro! \n");
   printf("1 - para o primeiro caminho  2 - para o segundo caminho\n");
   
   }
   void mudarCor(int cor){
   
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),cor);
   }
   void textoDevagar(char texto[], int atraso) {
    int i = 0;
    while (texto[i] != '\0') {
        printf("%c", texto[i]);
        fflush(stdout);
        Sleep(atraso); // Atraso em milissegundos
        i++;
    }
   }

/*------------------------------------------APRESENTAÇÃO-----------------------------------------------------------------------*/
 void mensagem(){
  char name[100];
  char *vetorStrings[10];
   mudarCor(12);
   setlocale(LC_ALL,"portuguese");
   
   vetorStrings[0] = "Na escuridão profunda de uma misteriosa caverna, um jogo de sobrevivência aguarda corajosos aventureiros. ";
   vetorStrings[1] = "Criaturas sinistras, desafios implacáveis e mistérios ocultos são apenas algumas das provações ";
   vetorStrings[2] = "que esperam por aqueles que se atrevem a entrar. O medo será constante, mas as recompensas prometem ";
   vetorStrings[3] = "momentos de pura adrenalina e descobertas fascinantes. A jornada é solitária, ";
   vetorStrings[4] = "exigindo coragem e determinação para superar os perigos. A escolha de embarcar nesta aventura assustadora é sua, ";
   vetorStrings[5] = "mas uma vez que você entrar, não haverá retorno.";
   vetorStrings[6] = "Prepare-se para enfrentar a escuridão e descobrir até onde sua bravura pode levá-lo. ";
   vetorStrings[7] = "\nPara continuar digite seu nome :";
   
   for (int i = 0; i < 8; i++) {
         textoDevagar(vetorStrings[i],10);
         printf("\n");
    }
   scanf("%s",&name);
   system("cls");
   printf("Olá %s",name);
   vetorStrings[8] = " Bem-vindo ao incrível mundo deste jogo, onde você será o herói da sua própria história. Enfrente desafios emocionantes, descubra segredos e torne-se uma lenda. Junte-se a aliados e prepare-se para uma jornada repleta de aventura e triunfos. Abrace o desconhecido e deixe sua marca neste mundo extraordinário. Aventura aguarda por você! \n";
   textoDevagar(vetorStrings[8],10);
   system("PAUSE");//pausei para ler o nome de usuário
   system("cls");
  }
 
/*------------------------------------------SEGUIR OU NÃO O JOGO-----------------------------------------------------------------------*/
  int entrada(){
  int opcao;
  char *mensagem[50];
  
  mensagem[0] = "Antes de continuar, faço uma pergunta crucial: você está preparado para embarcar nesta missão desafiadora? ";
  mensagem[1] = "Este jogo testará sua coragem e habilidades, enfrentando perigos e desafios intensos. ";
  mensagem[2] = "A jornada promete recompensas emocionantes, mas requer dedicação e determinação. ";
  mensagem[3] = "Agora, a escolha está em suas mãos. Está pronto para seguir em frente ou prefere esperar por uma aventura diferente? ";
  mensagem[4] = "A decisão é sua, e respeitaremos sua escolha. ";
  mensagem[5] = "\n1- Continuar. \n2- Sair.\n";
  for(int i = 0; i < 6; i++) {
         textoDevagar(mensagem[i],10);
         printf("\n");
    }
  scanf("%d",&opcao);
  
  
  switch(opcao){
  //CASO FOR 1, JOGADOR CONTINUARÁ O JOGO/
  case 1 :
    system("cls");
    mensagem[6] = "voce entrou na caverna ";
    textoDevagar(mensagem[6],100);
   
    
    break;
  //CASO FOR 2, JOGADOR SAIRÁ DO JOGO, LOGO SERA FECHADO/
  case 2:
    printf("voce não esta preparado para este desafio!!!\n");
    system("pause");
    exit(0);//fechar programa
    return 0;
    }
    
  }    
//<conio.h>
//getchar()
//FUNÇAO DOS BOSS, INIMIGOS/
int main(){

int vidaBoss = 120,vidaBoss1 = 150,vidaPersonagem = 100,escolha,soma,div,opcao[10],morte,dano,baus[10],moeda=0,potes=0,graveto = 0,decisao,placaAco=1,espada = 0,arco=0,arcoFlecha=0;
int salas = 1,vidaBoss2 = 200,escolha2;
char *texto[30];

   mensagem();
   entrada();
  
  
    texto[0] = "Agora que você aceitou a missão, prepare-se para a verdadeira jornada. Dois caminhos se estendem à sua frente, ";
    texto[1] = "cada um com desafios únicos. Um é repleto de enigmas e segredos, enquanto o outro é marcado por batalhas intensas. ";
    texto[2] = "A escolha é sua. Em qual caminho você embarcará? Sua decisão moldará sua jornada rumo à aventura emocionante que está por vir. ";
    texto[3] = "\n1 - Caminho com enigmas e segredos. \n2 - Caminho marcado por batalhas e monstro.\n";
    for(int i = 0; i <= 3; i++) {
        textoDevagar(texto[i],10);
         printf("\n");
    }
    
    scanf("%d",&opcao[0]);
    system("CLS");

switch(opcao[0]){
  case 1:
    salas = salas + 1;
    texto[4] = "voce encontrou uma espada de madeira, PARABÉNS! \n";
    texto[5] = "\nolhe um bau na sua frente!";
    texto[6] = "deseje abrir?";
    texto[7] = "1- SIM \n";
    texto[8] = "2- NÃO \n";
    for(int i = 4; i <= 8; i++){
        textoDevagar(texto[i],10);
        printf("\n");
    }
    scanf("%d",&baus[0]);
    
    if(baus[0] == 1){
        baus[1] = aleatorioRandom(baus[1],1,3);
        system("cls");
    }
    if(baus[1] == 1){
        moeda = aleatorioRandom(moeda,50,100);
        printf("voce encontrou %d moedas\n",moeda);
        system("pause");
    }
    else if(baus[1] == 2){
        potes = aleatorioRandom(potes,1,5);
        printf("voce encontrou %d potes de cura \n",potes);
        system("pause");
    }
    else if(baus[1] == 3){
        graveto = aleatorioRandom(graveto,10,50);
        printf("voce encontrou %d graveto \n",graveto);
        system("pause");
    }
  break;
    
  case 2:
    salas = salas + 1;
    texto[9] = "voce encontrou uma espada de madeira, PARABÉNS! \n";
    texto[10] = "\ne um bau deseja abrir ";
    texto[11] = "\n1 - abrir 2 - nao abrir\n";
    for(int i = 9; i <= 11; i++) {
        textoDevagar(texto[i],10);
         printf("\n");
    }
    scanf("%d",&morte);
    system("cls");
  
  if(morte==1){
    system("cls");
    texto[12] = "o bau era um mostro \n";
    textoDevagar(texto[12],100);
    vidaPersonagem = aleatorioDano(vidaPersonagem,5,30);
    printf("\nsua vida atual e %d\n",vidaPersonagem);
    system("pause");
    }
  }
    
    //perguntar em qual caminho seguir.
    system("cls");
    texto[13] = "Chegou o momento crucial na aventura! ";
    texto[14] ="Agora, você se encontra diante de 2 caminhos dentro da caverna, cada um com desafios e segredos únicos. ";
    texto[15] = "Para prosseguir no jogo, é necessário escolher um desses caminhos como seu próximo destino. ";
    texto[16] = "Cada opção reserva experiências emocionantes e perigos iminentes, ";
    texto[17] = "e a escolha que você fizer moldará sua jornada. Reflita sobre suas habilidades, coragem e intuição, ";
    texto[18] = "e escolha sabiamente o caminho que mais ressoa com você.";
    texto[19] = "Prepare-se para enfrentar desafios emocionantes e desvendar os mistérios que aguardam nas profundezas da caverna. ";
    texto[20] = "A decisão é sua, aventureiro! \n";
    texto[21] = "1 - para o primeiro caminho  2 - para o segundo caminho\n";
    for(int i = 13; i <= 21; i++) {
        textoDevagar(texto[i],10);
         printf("\n");
    }
    scanf("%d",&opcao[1]);
    system("cls");
    
    
    
    texto[22] = "Voce encontrou um boss\n";
    texto[23] = "Enfrente esse monstro com bravura e inteligência, \n";
    texto[24] = "e colha as recompensas que aguardam aqueles que se mostram dignos. \n";
    for(int i = 22; i <= 24; i++) {
        textoDevagar(texto[i],10);
         printf("\n");
    }
    system("pause");
    system("cls");
    
    switch(opcao[1]){
    case 1:
    salas = salas + 1;
    
    while(vidaBoss > 1){
    
   
    printf("\nKing bat : ");
    printf("%d\n\n\n",vidaBoss);
    printf("sua vida : %d ",vidaPersonagem);
    printf("\nsuas moedas : %d    suas potes de vida : %d",moeda,potes);
    printf("\n\nqual ataque deseja\n");
    
    printf("\n1 - Espada de madeira ");
    
    printf("\n\n2 - cura das cerejeiras\n");
    scanf("%d",&escolha);

    switch(escolha){
    case 1 :
        vidaBoss = aleatorioDano(vidaBoss,20,40);
        if(vidaBoss >= 0){
        vidaPersonagem = aleatorioDano(vidaPersonagem,15,25);
        }
        
    break;
    
    case 2:
    if(potes >= 1){
        
        vidaPersonagem = aleatorioCura(vidaPersonagem,10,20);
         potes = potes -1;
    }
    break;
    
    default:
    system("cls");
    printf("invalido");
    break;
    }
    
    if(escolha == 1 || escolha == 2){
        system("cls");
    }
    if(escolha==1){
        printf("ele te atacou");
    }
    
    if(escolha == 2 && potes >= 1){
        printf("voce se curou");
    }
    if(vidaPersonagem <= 0 ){
        mudarCor(4);
        texto[25] = "\nYOU DIED\n";
        textoDevagar(texto[25],100);
        printf("voce passou por %d salas",salas);
        printf("\nvoce pegou %d moedas",moeda);
        printf("\nvoce pegou %d gravetos\n",graveto);
        system("pause");
        exit(0);
        break;
    }
    
}
    system("cls");
    texto[26] = "Parabéns, aventureiro! Você derrotou o Chefe  e conquistou a vitória absoluta!\n";
    texto[27] = "\nvoce recebeu a renconpesa de uma linha de corda\n\n";
    textoDevagar(texto[26],10);
    textoDevagar(texto[27],10);
    arcoFlecha = arcoFlecha + 1;
    system("pause");
    system("cls");
break;

case 2:
    salas = salas + 1;
   while(vidaBoss > 1){
    
    printf("\nGigante de pedra : ");
    printf("%d\n\n\n",vidaBoss);
    printf("sua vida : %d ",vidaPersonagem);
    printf("\nsuas moedas : %d  suas potes de vida : %d  seus gravetos : %d",moeda,potes,graveto);
    printf("\n\nqual ataque deseja\n");
    printf("\n1 - Espada de madeira ");
    printf("\n\n2 - cura das cerejeiras\n");
    scanf("%d",&escolha);
    

    switch(escolha){
    case 1 :
        vidaBoss = aleatorioDano(vidaBoss,15,25);
        if(vidaBoss >= 0){
        vidaPersonagem = aleatorioDano(vidaPersonagem,10,20);
        }
    break;
    
    case 2:
    if(potes >= 1){
        vidaPersonagem = aleatorioCura(vidaPersonagem,10,20);
         potes = potes -1;
    }
    break;
    
    default:
    system("cls");
    printf("invalido");
    break;
    }
    
    if(escolha == 1 || escolha == 2){
        system("cls");
    }
    if(escolha==1){
        printf("ele te atacou");
    }
    if(escolha == 2 && potes >= 1){
        printf("voce se curou");
        
    }
    
    
    if(vidaPersonagem <= 0 ){
        mudarCor(4);
        printf("\nYOU DIED\n");
        printf("voce passou por %d salas",salas);
        printf("\nvoce pegou %d moedas",moeda);
        printf("\nvoce pegou %d gravetos\n",graveto);
        system("pause");
        exit(0);
        break;
    }
    
}
    system("cls");
    texto[28] = "Parabéns, aventureiro! Você derrotou o Chefe  e conquistou a vitória absoluta!\n";
    texto[29] = "\nvoce recebeu a renconpesa de uma placa de aço\n\n";
    textoDevagar(texto[28],10);
    textoDevagar(texto[29],10);
    espada = espada + 1;
    system("pause");
    system("cls");
break;

}

    
    texto[30] = "voce encontrou um novo caminho";
    texto[31] = "\n1 - Caminho com reconpensas. 2 - Caminho com inimigos.\n";
    textoDevagar(texto[30],10);
    textoDevagar(texto[31],10);
    scanf("%d",&opcao[2]);
    system("CLS");

switch(opcao[2]){
  case 2:
  salas = salas + 1;
    texto[32] = "Voce achou um bau deseja abrir ";
    texto[33] = "\n1 - abrir 2 - nao abrir\n";
    textoDevagar(texto[32],10);
    textoDevagar(texto[33],10);
    scanf("%d",&baus[3]);
    
    if(baus[3] == 1){
        baus[4] = aleatorioRandom(baus[4],1,5);
        system("cls");
    }
    if(baus[4] == 1 || baus[4] == 2){
        moeda = aleatorioRandom(moeda,50,100);
        printf("voce encontrou %d moedas \n",moeda);
        system("pause");
    }
    else if(baus[4] == 3){
        potes = aleatorioRandom(potes,1,5);
        printf("voce encontrou potes de cura %d \n",potes);
        system("pause");
    }
    else if(baus[4] == 4 || baus[4] == 5){
        graveto = aleatorioRandom(graveto,10,20);
        printf("voce encontrou um graveto %d \n",graveto);
        system("pause");
    }
  break;
  
  case 1: 
  salas = salas + 1;
    texto[34] = "Voce achou um bau deseja abrir ";
    texto[35] = "\n1 - abrir 2 - nao abrir\n";
    textoDevagar(texto[34],10);
    textoDevagar(texto[35],10);
    scanf("%d",&morte);
    system("cls");
  
  if(morte==1){
    system("cls");
    texto[36] = "o bau era um mostro \n";
    textoDevagar(texto[36],100);
    vidaPersonagem = aleatorioDano(vidaPersonagem,90,100);
    printf("\nsua vida atuel e %d",vidaPersonagem);
    
    }
  if(vidaPersonagem <= 0 ){
     mudarCor(4);
     texto[37] = "\nYOU DIED\n";
     textoDevagar(texto[37],100);
     printf("voce passou por 4 salas");
     printf("\nvoce pegou %d moedas",moeda);
     printf("\nvoce pegou %d gravetos\n",graveto);
     system("pause");
     exit(0);
    }
    break;
    
  }
  
  system("cls");
  printf("voce encontrou um caminho para uma loja");
  printf("\n1 - entrar   ");
  printf("\n2 - não entrar  \n");
  scanf("%d",&opcao[3]);
  system("cls");

  


  
  
  switch(opcao[3]){
  
  case 1:
  salas = salas + 1;
     while(opcao[4] != 5){
  
  printf("sua vida : %d ",vidaPersonagem);
  printf("\nsuas moedas : %d    suas potes de vida : %d  seus gravetos : %d ",moeda,potes,graveto);
  
  
  printf("\n\nvoce encontrou um ferreiro ");
  printf("\nele oferece as seguintes ofertas");
  
  
  printf("\n\n1 - 3 POTES DE VIDA");
  printf("\nPreço 30 moedas");
  
  printf("\n\n2 - ESPADA DE AÇO");
  printf("\nnessecita de 5 gravestos e uma placa de aço");
  
  printf("\n\n 3 - ARCO E FLECHA");
  printf("\nnessecita de 5 gravetos e um fio de corda");
  
  if(espada == 0){
  printf("\n\n4 - comprar placa de aço");
  printf("\npreço 20 moedas");
  }
  if(arcoFlecha == 0){
  printf("\n\n4 - comprar linha de arco");
  printf("\npreço 20 moedas");
  }
  
  printf("\n\n5 - sair da loja\n");
  
  scanf("%d",&opcao[4]);
    
    if(opcao[4] == 1 && moeda >= 30){
      moeda =  moeda - 30;
      potes = potes + 3; 
      printf("\nVoce recebeu %d potes e gastou %d moedas\n",potes,moeda);
      system("pause");
    }else if(opcao[4] == 1 && moeda < 30){
    printf("VOCE N TEM DIHEIRO\n");
    system("pause");
    }
    
    if(opcao[4] == 2 && graveto >= 5 && espada == 1){
    graveto = graveto - 5;
    espada = espada + 1;
    printf("\nVoce constuiu espada de aco ");
    system("pause");
    }else if(opcao[4] == 2 && graveto < 5){
    printf("\nVOCE N TEM recursos\n");
    system("pause");
    }else if(opcao[4] == 2 && espada > 1){
    printf("sem placa de aco");
    }
    
    if(opcao[4] == 3 && graveto >= 5 && arcoFlecha == 1){
    graveto = graveto - 5;
    arcoFlecha = arcoFlecha + 1;
    arco = arco + 5;
    printf("\nVoce criou um arco e %d flechas",arco);
    system("pause");
    }else if(opcao[4] == 3 && graveto < 5){
    printf("\nVOCE N TEM Recursos");
    system("pause");
    }else if(opcao[4] == 3 && arcoFlecha >1 ){
    printf("\nvoce esta sem fio");
    system("pause");
    }
    
    if(opcao[4] == 4 && moeda >= 20 && espada == 0){
      moeda =  moeda - 20;
      espada = espada + 1;
      printf("\nVoce comprou uma placa de aço ");
      system("pause");
      printf("\ngastou %d moedas\n",moeda);
      system("pause");
      }else if(opcao[4] == 4 && moeda < 20 && espada == 0){
      printf("VOCE N TEM DIHEIRO\n");
      system("pause");
    }
    
    if(opcao[4] == 4 && moeda >= 20 && arcoFlecha == 0){
      moeda =  moeda - 20;
      arcoFlecha = arcoFlecha  + 1;
      printf("\nVoce constuiu uma linha de arco ");
      system("pause");
      printf("\n gastou %d moedas\n",moeda);
      system("pause");
      }else if(opcao[4] == 4 && moeda < 20 && arcoFlecha == 0){
      printf("VOCE N TEM DIHEIRO\n");
      system("pause");
    }
    
    if(opcao[4] == 5){
    system("cls");
    printf("voce saiu da loja\n");
    system("pause");
    }
    system("cls");
   }
   break;
    case 2 :
     printf("seguindo para a proxima carverna\n"); 
     break;
    }
    
   
   
 
  
   caverna();
   scanf("%d",&opcao[5]);
   system("cls");
   switch(opcao[5]){
   
  case 1 :
  salas = salas + 1;
  
  printf("Voce encontrou um boss\n");
  printf( "Enfrente esse monstro com bravura e inteligência, \n");
  printf( "e colha as recompensas que aguardam aqueles que se mostram dignos. \n");
  
  while(vidaBoss1 > 1){
    
    printf("\nGigante de aço : "); //boss mais forte
    printf("%d\n\n\n",vidaBoss1);
    printf("sua vida : %d ",vidaPersonagem);
    printf("\nsuas moedas : %d  suas potes de vida : %d  seus gravetos : %d",moeda,potes,graveto);
    if(arcoFlecha > 1){
    printf("\nnumeros de flechas : %d  ",arco);
    }
    printf("\n\nqual ataque deseja\n");
    printf("\n1 - Espada de madeira ");
    printf("\n\n2 - cura das cerejeiras");
    if(espada > 1){
    printf("\n\n3 - espada de aco");
    }
    if(arcoFlecha > 1){
    printf("\n\n4 - arco e flecha\n");
    }
    
    scanf("%d",&escolha);

    switch(escolha){
    case 1 :
        vidaBoss1 = aleatorioDano(vidaBoss1,10,25);
        if(vidaBoss1 >= 0){
        vidaPersonagem = aleatorioDano(vidaPersonagem,15,30);                                        /*boss teste */
        }
    break;
    
    case 2:
    if(potes >= 1){
        
        vidaPersonagem = aleatorioCura(vidaPersonagem,10,20);
         potes = potes -1;
    }
    break;
    
    case 3:
    if(espada > 1){
        vidaBoss1 = aleatorioDano(vidaBoss1,30,50);
    }
    if(vidaBoss1 >= 0){
        vidaPersonagem = aleatorioDano(vidaPersonagem,15,30);
    }
    break;
    
    case 4:
    if(arcoFlecha > 1 && arco >= 1){
        arco = arco -1;
        vidaBoss1 = aleatorioDano(vidaBoss1,30,50);
        vidaPersonagem = aleatorioDano(vidaPersonagem,15,30);
    }
    
    break;
    
    default:
    system("cls");
    printf("invalido");
    break;
    

    
    
    }
    
    
    if(escolha == 1 || escolha == 2 || escolha == 3 || escolha ==4){
        system("cls");
    }
    if(escolha==1 || escolha == 3 || escolha ==4){
        printf("ele te atacou");
    }
    if(escolha == 2 && potes >= 1){
        printf("voce se curou");
    }
    if(vidaPersonagem <= 0 ){
        mudarCor(4);
        printf("\nYOU DIED\n");
        printf("voce passou por %d salas",salas);
        printf("\nvoce pegou %d moedas",moeda);
        printf("\nvoce pegou %d gravetos\n",graveto);
        system("pause");
        exit(0);
        break;
    }
    }
    system("cls");
    printf("Parabéns, aventureiro! Você derrotou o Chefe  e conquistou a vitória absoluta!\n");
    printf("\nvoce recebeu a renconpesa de 200 moedas\n\n",moeda);
    printf("\ne uma placa de diamante\n");
    moeda = moeda + 200;
    espada = espada + 1;
    system("pause");
    system("cls");
   break;
   
   case 2:
   salas = salas + 1;
     system("cls");
     printf("você encontrou um fonte de cura\n");
     printf("ao entrar você pode recuperar vida\n");
     printf("1 - entrar  2 - não entrar");
     scanf("%d",&opcao[6]);
     if(opcao[6] == 1){
      vidaPersonagem = aleatorioCura(vidaPersonagem,50,60);
      printf("\nsua vida :%d",vidaPersonagem);
      system("pause");
      }   
  }
  
  
  
  
  system("cls");
  caverna();//outro switch
  scanf("%d",&opcao[7]);  
  
  switch(opcao[7]){
  case 1:
  salas = salas + 1;
   system("cls");
   printf("Voce achou um bau deseja abrir ");
   printf("\n1 - abrir 2 - nao abrir\n");
   scanf("%d",&baus[5]);
   
  
   if(baus[5] == 1){
   system("cls");
   printf("OPS! PARA ACESSAR ESTE BAU, VOCE PRECISA DESVENDAR UM ENIGMA!!! HAHA! \n");
   printf("Eu sou um número entre 1 e 10. Se você me multiplica por 2 e adiciona 5, o resultado é 15.  \n");
   printf("Então sou =  ");
   scanf("%d",&decisao);
    if(decisao==5){
      system("cls");
      printf("Voce abriu o bau, PARABÉNS GUERREIRO. \n");
      printf("Boa sorte na sua jornada!!! \n");
      
    if(baus[5] == 1){
        baus[6] = aleatorioRandom(baus[6],1,3);
        
    }
        if(baus[6] == 1){
        moeda = aleatorioRandom(moeda,50,100);
        printf("voce encontrou %d moedas\n",moeda);
        system("pause");
    }
        else if(baus[6] == 2){
        arco = aleatorioRandom(arco,1,5);
        printf("voce encontrou %d flechas \n",arco);
        system("pause");
    }
        else if(baus[6] == 3){
        graveto = aleatorioRandom(graveto,10,50);
        printf("voce encontrou %d graveto \n",graveto);
        system("pause");
        }
    }
    }
    if(decisao != 5){
    system("cls");
    printf("voce errou hahahaha");
    vidaPersonagem = aleatorioDano(vidaPersonagem,90,100);
    printf("\nsua vida atuel e %d",vidaPersonagem);
    }
    if(vidaPersonagem <= 0 ){
    mudarCor(4);
    printf("\nYOU DIED\n");
    printf("voce passou por %d salas",salas);
    printf("\nvoce pegou %d moedas",moeda);
    printf("\nvoce pegou %d gravetos\n",graveto);
    system("pause");
    exit(0);
    }
      break;
      
    case 2:
    salas = salas + 1;
    system("cls");
    caverna();//outro switch
    scanf("%d",&opcao[8]); 
    
   system("cls");
   printf("Voce achou um bau deseja abrir ");
   printf("\n1 - abrir 2 - nao abrir\n");
   scanf("%d",&baus[7]);
   
   if(baus[7] == 1){
        baus[8] = aleatorioRandom(baus[6],1,3);
        
    }
        if(baus[8] == 1){
        moeda = aleatorioRandom(moeda,50,100);
        printf("voce encontrou %d moedas\n",moeda);
        system("pause");
    }
        else if(baus[8] == 2){
        arco = aleatorioRandom(arco,1,5);
        printf("voce encontrou %d flechas \n",arco);
        system("pause");
    }
        else if(baus[8] == 3){
        graveto = aleatorioRandom(graveto,10,50);
        printf("voce encontrou %d graveto \n",graveto);
        system("pause");
        }
    }
    
    system("cls");
  printf("voce encontrou um caminho para uma loja");
  printf("\n1 - entrar   ");
  printf("\n2 - não entrar  \n");
  scanf("%d",&opcao[5]);
  system("cls");

  


  
  
  switch(opcao[5]){
  
  case 1:
  salas = salas + 1;
     while(opcao[6] != 6){
  
  printf("sua vida : %d ",vidaPersonagem);
  printf("\nsuas moedas : %d    suas potes de vida : %d  seus gravetos : %d ",moeda,potes,graveto);
  
  
  printf("\n\nvoce encontrou um ferreiro ");
  printf("\nele oferece as seguintes ofertas");
  
  
  printf("\n\n1 - 3 POTES DE VIDA");
  printf("\nPreço 30 moedas");
  
  printf("\n\n2 - ESPADA DE AÇO");
  printf("\nnessecita de 5 gravestos e uma placa de aço");
  
  printf("\n\n3 - ARCO E FLECHA");
  printf("\nnessecita de 5 gravetos e um fio de corda");
  
  if(espada == 3){
  printf("\n\n4 - espada de diamante");
  printf("\nnessecita de 5 gravetos e placa de diamnate");
  }
  
  
  if(espada == 2){
  printf("\n\n4 - comprar placa de diamante");
  printf("\npreço 30 moedas");
  }
  
  if(espada == 0){
  printf("\n\n4 - comprar placa de aço");
  printf("\npreço 20 moedas");
  }
  if(arcoFlecha == 0){
  printf("\n\n5 - comprar linha de arco");
  printf("\npreço 20 moedas");
  }
  
  printf("\n\n6 - sair da loja\n");
  
  scanf("%d",&opcao[6]);
    
    if(opcao[6] == 1 && moeda >= 30){
      moeda =  moeda - 30;
      potes = potes + 3; 
      printf("\nVoce recebeu %d potes e gastou %d moedas\n",potes,moeda);
      system("pause");
    }else if(opcao[6] == 1 && moeda < 30){
    printf("VOCE N TEM DIHEIRO\n");
    system("pause");
    }
    
    if(opcao[6] == 2 && graveto >= 5 && espada == 1){
    graveto = graveto - 5;
    espada = espada + 1;
    printf("\nVoce constuiu espada de aco ");
    system("pause");
    }else if(opcao[4] == 2 && graveto < 5){
    printf("\nVOCE N TEM recursos\n");
    system("pause");
    }else if(opcao[4] == 2 && espada > 1){
    printf("sem placa de aco");
    }
    
    if(opcao[6] == 4 && graveto >= 5 && espada == 3){
    graveto = graveto - 5;
    espada = espada + 1;
    printf("\nVoce constuiu espada de diamante");
    system("pause");
    }else if(opcao[4] == 2 && graveto < 5){
    printf("\nVOCE N TEM recursos\n");
    system("pause");
    }else if(opcao[4] == 2 && espada > 3){
    printf("sem placa de diamate");
    }
    
    if(opcao[6] == 3 && graveto >= 5 && arcoFlecha == 1){
    graveto = graveto - 5;
    arcoFlecha = arcoFlecha + 1;
    arco = arco + 5;
    printf("\nVoce criou um arco e %d flechas",arco);
    system("pause");
    }else if(opcao[6] == 3 && graveto < 5){
    printf("\nVOCE N TEM Recursos");
    system("pause");
    }else if(opcao[6] == 3 && arcoFlecha >1 ){
    printf("\nvoce esta sem fio");
    system("pause");
    }
    
    if(opcao[6] == 4 && moeda >= 20 && espada == 0){
      moeda =  moeda - 20;
      espada = espada + 1;
      printf("\nVoce comprou uma placa de aço ");
      system("pause");
      printf("\ngastou %d moedas\n",moeda);
      system("pause");
      }else if(opcao[6] == 4 && moeda < 20 && espada == 0){
      printf("VOCE N TEM DIHEIRO\n");
      system("pause");
    }
    
    if(opcao[6] == 4 && moeda >= 30 && espada == 2){
      moeda =  moeda - 30;
      espada = espada + 1;
      printf("\nVoce comprou uma placa de diamante ");
      system("pause");
      printf("\ngastou %d moedas\n",moeda);
      system("pause");
      }else if(opcao[6] == 4 && moeda < 30 && espada == 100){
      printf("VOCE N TEM DIHEIRO\n");
      system("pause");
    }
    
    if(opcao[6] == 5 && moeda >= 20 && arcoFlecha == 0){
      moeda =  moeda - 20;
      arcoFlecha = arcoFlecha  + 1;
      printf("\nVoce constuiu uma linha de arco ");
      system("pause");
      printf("\n gastou %d moedas\n",moeda);
      system("pause");
      }else if(opcao[6] == 4 && moeda < 20 && arcoFlecha == 0){
      printf("VOCE N TEM DIHEIRO\n");
      system("pause");
    }
    
    if(opcao[6] == 6){
    system("cls");
    printf("voce saiu da loja\n");
    system("pause");
    }
    system("cls");
   }
   break;
    case 2 :
     printf("seguindo para a proxima carverna\n"); 
     break;
    }
    
    printf("voce encontrou uma fonte deseja entrar ?");
    printf("\n1 - entrar\n 2 - não entrar");
    scanf("%d",&opcao[9]);
    if(opcao[9] == 1){
      salas = salas + 1;
      printf("\nvoce se curou");
      vidaPersonagem = aleatorioCura(vidaPersonagem,50,100);
      printf("\nsua vida :%d\n",vidaPersonagem);
      system("pause");
      }
      if(opcao[9] == 2){
      printf("voce seguiu em frente");
      system("pause");
      }
        system("cls");
        printf("Voce encontrou um boss\n");
        printf( "Enfrente esse monstro com bravura e inteligência, \n");
        printf( "e colha as recompensas que aguardam aqueles que se mostram dignos. \n");
        system("pause");
        system("cls");
  
  while(vidaBoss2 > 1){
    
    printf("\nGigante de aço : "); //boss mais forte
    printf("%d\n\n\n",vidaBoss2);
    printf("sua vida : %d ",vidaPersonagem);
    printf("\nsuas moedas : %d  suas potes de vida : %d  seus gravetos : %d",moeda,potes,graveto);
    if(arcoFlecha > 1){
    printf("\nnumeros de flechas : %d  ",arco);
    }
    printf("\n\nqual ataque deseja\n");
    printf("\n1 - Espada de madeira ");
    printf("\n\n2 - cura das cerejeiras");
    if(espada == 2 || espada == 3){
    printf("\n\n3 - espada de aco");
    }
    if(espada == 4){
    printf("\n\n3 - espada de diamante");
    }
    if(arcoFlecha > 1){
    printf("\n\n4 - arco e flecha\n");
    }
    
    scanf("%d",&escolha2);

    switch(escolha2){
    case 1 :
        vidaBoss1 = aleatorioDano(vidaBoss2,10,25);
        if(vidaBoss2 >= 0){
        vidaPersonagem = aleatorioDano(vidaPersonagem,15,30);                                        /*boss teste */
        }
    break;
    
    case 2:
    if(potes >= 1){
        
        vidaPersonagem = aleatorioCura(vidaPersonagem,10,20);
         potes = potes -1;
    }
    break;
    case 3:
    if(espada == 2 || espada == 3){
        vidaBoss2 = aleatorioDano(vidaBoss2,30,50);
    }
    if(espada == 4){
        vidaBoss2 = aleatorioDano(vidaBoss2,40,80);
        }
    if(vidaBoss1 >= 0){
        vidaPersonagem = aleatorioDano(vidaPersonagem,15,30);
    }
    break;
    
    case 4:
    if(arcoFlecha > 1 && arco >= 1){
        arco = arco -1;
        vidaBoss2 = aleatorioDano(vidaBoss2,30,50);
        vidaPersonagem = aleatorioDano(vidaPersonagem,15,30);
    }
    
    
    
    break;

    default:
    system("cls");
    printf("invalido");
    break;
    }
    if(escolha2 == 1 || escolha2 == 2 || escolha2 == 3 || escolha2 ==4){
        system("cls");
    }
    if(escolha2 ==1 || escolha2 == 3 || escolha2 ==4){
        printf("ele te atacou");
    }
    if(escolha2 == 2 && potes >= 1){
        printf("voce se curou");
    }
    if(vidaPersonagem <= 0 ){
        mudarCor(4);
        printf("\nYOU DIED\n");
        printf("voce passou por %d salas",salas);
        printf("\nvoce pegou %d moedas",moeda);
        printf("\nvoce pegou %d gravetos\n",graveto);
        system("pause");
        exit(0);
        break;
    }
    
    }
    system("cls");
    printf("Parabéns, aventureiro! Você derrotou o Chefe  e conquistou a vitória absoluta!\n");
    
    
        
   
   
    
 
  
  


  
  
 system("pause");
 return 0;
 }

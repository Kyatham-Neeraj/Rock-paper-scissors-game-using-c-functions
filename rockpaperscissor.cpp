#include<iostream>
#include<ctime>
             /*Kyatham Neeraj*/
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player , char computer );
int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"Neeraj's choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<"Computer's choice: ";
    showChoice(computer);

    chooseWinner(player , computer);
             /*Kyatham Neeraj*/
    return 0;
}
char getUserChoice(){
    char player;
    std::cout<<"  **************Neeraj's Rock-Paper-Scissors Game******************\n";
    do{
        std::cout<<"Neeraj choose one of the following\n";
        std::cout<<"********************************\n";
        std::cout<<"'r' forRock\n";
        std::cout<<"'p' for paper\n";
        std::cout<<"'s' for scissors\n";
        std::cin>>player;


    } while (player !='r' && player !='p' && player !='s');
    
     return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = rand()%3 + 1;
    switch (num)
    {
    case 1:return 'r';
    case 2:return 'p';
    case 3:return 's';
    }

     return 0;
}
void showChoice(char choice){
     switch (choice)
     {
     case 'r':
        std::cout<<"Rock\n";
        break;
     case 'p':
        std::cout<<"Paper\n";
        break;
     case 's':
        std::cout<<"scissors\n";
        break;
     }
     }
void chooseWinner(char player , char computer ){
     switch (player)
     {
     case 'r': if (computer == 'r') {
        std::cout<<"It's a Tie\n";
       }
       else if (computer == 'p')
       {
        std::cout<<"Neeraj Loose\n";
       }
       else{
       std::cout<<"Neeraj WOn\n";
       }
     
        break;
     case 'p': if (computer == 'p') {
        std::cout<<"It's a Tie\n";
       }
       else if (computer == 's')
       {
        std::cout<<"Neeraj Loose\n";
       }
       else{
       std::cout<<"Neeraj WOn\n";
       }
     
        break;
     case 's': if (computer == 's') {
        std::cout<<"It's a Tie\n";
       }
       else if (computer == 'r')
       {
        std::cout<<"Neeraj Loose\n";
       }
       else{
       std::cout<<"Neeraj WOn\n";
       }
     
        break;
     }
}
                  /*Kyatham Neeraj*/
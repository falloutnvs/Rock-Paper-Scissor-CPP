//Rock Paper Scissor
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    string comp_hand [] = {"rock","paper","scissor"};
    string human_hand;
    char play_again;
    bool game_on = true;
    bool rerun;
    int comp_point = 0;
    int human_point = 0;
    while (game_on)
    {
        rerun = true;
        int random_num = rand()%3;
        cout<<"Please pick your choice (lowercase): ";
        cin >> human_hand;
        if (human_hand == "rock")
        {
            cout<<"You choose rock!"<<endl;
        }
        else if (human_hand == "paper")
        {
            cout << "You choose paper"<<endl;
        }
        else if (human_hand == "scissor")
        {
            cout << "You chose scissor"<<endl;
        }
        else
        {
            cout<<"Sorry Wrong Input!"<<endl;
            continue;
        }

        if (comp_hand[random_num]==human_hand)
        {
            cout << "DRAW" <<endl;
            cout<<"Comp draw: "<<comp_hand[random_num];
        }
        if (comp_hand[random_num]=="rock" && human_hand == "paper" || comp_hand[random_num]=="paper" && human_hand == "scissor" || comp_hand[random_num]=="scissor" && human_hand == "rock")
        {
            cout<< "HUMAN WIN!"<<endl;
            cout<<"Comp draw: "<<comp_hand[random_num];
            human_point +=1;
        }
        if (comp_hand[random_num]=="paper" && human_hand == "rock" || comp_hand[random_num]=="scissor" && human_hand == "paper" || comp_hand[random_num]=="rock" && human_hand == "scissor")
        {
            cout << "COMP WIN!"<<endl;
            cout<<"Comp draw: "<<comp_hand[random_num];
            comp_point +=1;
        }
        cout<<endl;
        cout<<"Your Point: "<<human_point<<endl;
        cout << "Comp Point: " << comp_point<<endl;
        cout<<endl;
        while (rerun)
        {
            cout<<"Do you want to play again? (y/n): ";
            cin>>play_again;
            if (play_again == 'y')
            {
                cout<<"Good! We play again!"<<endl;
                rerun = false;
            }
            else if (play_again =='n')
            {
                cout<<"Alright See You Next Time!"<<endl;
                rerun = false;
                game_on = false;
            }
            else
            {
                cout << "Sorry not defined answer!"<<endl;
                continue;
            }
        }
    }
    return 0 ;
}

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    cout<<"Welcome to the Number Guessing Game"<<endl;
    cout<<endl;
    cout<<"You'll have to choose a number from 1 to 100 ,You'll have limited choices based on the level you choose. Good Luck!"<<endl;

    // choosing the difficulty of the game
    while(true)
    {
        cout<<"\n\t\t Please define your Difficulty :"<<endl;
        cout<<" type 1 for Beginners Level"<<endl;
        cout<<" type 2 for Intermediate Level"<<endl;
        cout<<" type 3 for Expert Level"<<endl;

        int Difficulty_lev;
        cout<<"enter the level : "<<" ";
        cin>>Difficulty_lev;

        // iniitialize the sran() for the different random number
        srand(time(0));
        int secret_num = 1+(rand()%100);
        int playerchoices;

        //difficulty level : easy
        if(Difficulty_lev==1)
        {
            cout<<"you have slected the level easy , you will be given 10 chances to guess the number"<<endl;
            int guessesleft=10;

            for(int i=1;i<=10;i++)
            {
                cout<<"enter the number : "<<endl;
                cin>>playerchoices;

                if(playerchoices==secret_num)
                {
                    cout<<"well palyed ,you've won the game "<<playerchoices<<" was the secret number"<<endl;
                    cout<<"thanks for playing"<<endl;
                    cout<<"please play the game with us again"<<endl;
                    break;
                }
    
                else if(playerchoices<secret_num)
                {
                    cout<<"nope "<<playerchoices<<"is not the right number"<<endl;
                    cout<<"the secret number is higher "<<endl;
                }
                else if(playerchoices>secret_num)
                {
                    cout<<"nope "<<playerchoices<<"is not the right number"<<endl;
                    cout<<"the secret number is lower "<<endl;
                }
                guessesleft--;
                cout<<guessesleft<<" are the guesses left"<<endl;
                if(guessesleft==0)
                {
                    cout<<"oops , you run out of guesses , Please try again in next game .";
                }
            }
        }

        //difficulty level : Medium
        if(Difficulty_lev==2)
        {
            cout<<"you have slected the level medium , you will be given 7 chances to guess the number"<<endl;
            int guessesleft=7;

            for(int i=1;i<=7;i++)
            {
                cout<<"enter the number : "<<endl;
                cin>>playerchoices;

                if(playerchoices==secret_num)
                {
                    cout<<"well palyed ,you've won the game "<<playerchoices<<" was the secret number"<<endl;
                    cout<<"thanks for playing"<<endl;
                    cout<<"please play the game with us again"<<endl;
                    break;
                }
    
                else if(playerchoices<secret_num)
                {
                    cout<<"nope "<<playerchoices<<"is not the right number"<<endl;
                    cout<<"the secret number is higher "<<endl;
                }
                else if(playerchoices>secret_num)
                {
                    cout<<"nope "<<playerchoices<<"is not the right number"<<endl;
                    cout<<"the secret number is lower "<<endl;
                }
                guessesleft--;
                cout<<guessesleft<<" are the guesses left"<<endl;
                if(guessesleft==0)
                {
                    cout<<"oops , you run out of guesses , Please try again in next game .";
                }
            }
        }

        //difficulty level : Hard
        if(Difficulty_lev==3)
        {
            cout<<"you have slected the level hard , you will be given 5 chances to guess the number"<<endl;
            int guessesleft=5;

            for(int i=1;i<=5;i++)
            {
                cout<<"enter the number : "<<endl;
                cin>>playerchoices;

                if(playerchoices==secret_num)
                {
                    cout<<"well palyed ,you've won the game "<<playerchoices<<" was the secret number"<<endl;
                    cout<<"thanks for playing"<<endl;
                    cout<<"please play the game with us again"<<endl;
                    break;
                }
    
                else if(playerchoices<secret_num)
                {
                    cout<<"nope "<<playerchoices<<"is not the right number"<<endl;
                    cout<<"the secret number is higher "<<endl;
                }
                else if(playerchoices>secret_num)
                {
                    cout<<"nope "<<playerchoices<<"is not the right number"<<endl;
                    cout<<"the secret number is lower "<<endl;
                }
                guessesleft--;
                cout<<guessesleft<<" are the guesses left"<<endl;
                if(guessesleft==0){
                    cout<<"oops , you run out of guesses , Please try again in next game .";
                }
            }
        }
        // to end the game
        else if(Difficulty_lev==0)
        {
            exit(0);
            cout<<"thank you for playing game with us ,oping to see you soon"<<endl;
        }
        else
        {
            cout<<"wrong choice ,please select between the (0,1,2,3) to play the game "<<endl;
        }
    }
    return 0;

}
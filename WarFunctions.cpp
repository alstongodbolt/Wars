//
//  WarFunctions.cpp
//  Wars
//
//  Created by Alston Godbolt on 11/11/15.
//  Copyright © 2015 Alston Godbolt. All rights reserved.
//

#include "WarFunctions.hpp"
#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class War
{
private:
    string player1; //change to Player1Name
    string player2; //change to Player2Name
    int p1; //change to onePlayer
    int p2; //change to twoPlayer
    int player1Count;
    int player2Count;
public:
    string introduction();
    string faceCards();
    void setPlayerNames(string, string);
    string getPlayerNames();
    void setOneTwoPlayer(int, int);
    int getOneTwoPlayer();
    void TheGame(int, int, string, string);
    
};

int main(){
    string first, second;
    War war;
    war.introduction();
    war.faceCards();
    war.setPlayerNames(first, second);
    war.getPlayerNames();
    war.TheGame();
    
    cout << war.introduction();
    cout << war.faceCards();
    
    cout << endl << "Enter the name of player one: ";
    cin >> first;
    cout << endl << "Enter the name of player two: ";
    cin >> second;
    
    
    return 0;
}





string War::introduction(){
   return "This is the game of war!\n"
    "\nAnd much like the card game, person with the highest card wins the round\n"
    "\nIf there is a tie, then you will go to war. And if you tie again, a draw will be declared\n";
}

string War::faceCards(){
    return "\nFor now: \n"
    "11 = Jack\n"
    "12 = Queen\n"
    "13 = King\n"
    "14 = Ace\n";
}

void War::setPlayerNames(string one, string two)
{

    player1 = one;
    player2 = two;
}

string War::getPlayerNames()
{
    
    return player1;
    return player2;
}

void War::setOneTwoPlayer(int oNe, int tWo)
{
    p1 = oNe;
    p2 = tWo;
}
int War::getOneTwoPlayer(){
    return p1 = (rand() % 14) + 1;
    return p2 = (rand() % 14) + 1;
}

void War::TheGame(int, int, int, int, string, string){
    int play = 0;
    int count = 1;
    while ((play !=99) || (count < 1))
    { //loop to exit the game and count # of games played
        
        cout << endl << player1 << ": " << p1 << endl;
        cout << player2 << ": " << p2 << endl;
        
        
        if(p1 > p2)
        { //if statement to determines who wins and loses
            cout << player1 << " wins." << endl;
            player1Count++;
        }
        else if (p1 < p2)
        {
            cout << player2 << " wins." << endl;
            player2Count++;
        }
        else if (p1 == p2) //war if statement
        {
            cout << "lets go to war!" << endl;
            
            p1 = (rand() % 14) + 1;
            p2 = (rand() % 14) + 1;
            cout << endl << player1 << ": " << p1 << endl;
            cout << player2 << ": " << p2 << endl;
            if(p1 > p2){
                cout << player1 << " wins." << endl;
                player1Count++;
            }
            else if (p1 < p2)
            {
                cout << player2 << " wins." << endl;
                player2Count++;
            }
            else if (p1 == p2)
                cout << "It's a tie!" << endl;
        }
        cout << player1 << " Wins: " <<player1Count << "  " << player2 << " Wins: " << player2Count << endl;
        
        cout << "Games played: " << count << endl;
        
        cout << "Enter 99 to quit, any other number to keep playing: ";
        cin >> play; //statement to end the game
        
        count++; //keeps track the total number of games played.
        
        
    }
}

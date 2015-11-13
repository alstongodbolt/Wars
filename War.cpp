//
//  War.cpp
//  War
//
//  Created by Alston Godbolt on 11/3/15.
//  Copyright © 2015 Alston Godbolt. All rights reserved.
//

/*
#include <sstream>
#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int play = 0;
    srand(time(0));
    cout << "This is the game of war!" << endl;
    cout << endl << "And much like the card game, person with the highest card wins the round" << endl;
    cout << endl << "If there is a tie, then you will go to war. And if you tie again, a draw will be declared" << endl;
    
    cout << endl << "For now: " << endl;
    cout << "11 = Jack" << endl;
    cout << "12 = Queen" << endl;
    cout << "13 = King" << endl;
    cout << "14 = Ace" << endl;
    
    string player1;
    string player2;
    cout << endl << "Enter the name of player one: ";
    cin >> player1;
    cout << endl << "Enter the name of player two: ";
    cin >> player2;
    
    int p1;
    int p2;
    int player1Count;
    int player2Count;
    int count = 1;
    while ((play !=99) || (count < 1))
    { //loop to exit the game and count # of games played
    p1 = (rand() % 14) + 1; //random # generator for numbers 2 - 14
    p2 = (rand() % 14) + 1;
            
    cout << endl << player1 << ": " << p1 << endl;
    cout << player2 << ": " << p2 << endl;
    
    
    if(p1 > p2){ //if statement to determines who wins and loses
        cout << player1 << " wins." << endl;
        player1Count++;
        }
    else if (p1 < p2){
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
        else if (p1 < p2){
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
    
    return 0;
}*/

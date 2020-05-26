// Author: Chris Van Hanswyk
// A simple, terminal-based Blackjack game written in C++

#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<ctime>

using namespace std;

int main() {

  cout << "\n\n          Welcome to...\n\n\n";
  Sleep(5000);

  cout << "##################################################################################################" << endl;
  cout << "#                                 #" << endl;
  cout << "#                                 #" << endl;
  cout << "#          ____    ___                    __                             __             #" << endl;
  cout << "#         /\\  _`\\ /\\_ \\                  /\\ \\        __                 /\\ \\                     #" << endl;
  cout << "#         \\ \\ \\L\\ \\//\\ \\      __      ___\\ \\ \\/'\\   /\\_\\     __      ___\\ \\ \\/'\\                 #" << endl;
  cout << "#          \\ \\  _ <'\\ \\ \\   /'__`\\   /'___\\ \\ , <   \\/\\ \\  /'__`\\   /'___\\ \\ , <                 #" << endl;
  cout << "#           \\ \\ \\L\\ \\\\_\\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\  \\ \\ \\/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\               #" << endl;
  cout << "#            \\ \\____//\\____\\ \\__/.\\_\\ \\____\\ \\\\_\\ \\_\\_\\ \\ \\ \\__/.\\_\\ \\____\\ \\_\\ \\_\\              #" << endl;
  cout << "#             \\/___/ \\/____/\\/__/\\/_/\\/____/\\/_/\\/_/\\ \\_\\ \\/__/\\/_/\\/____/ \\/_/\\/_/              #" << endl;
  cout << "#                                      \\ \\____/                             #" << endl;
  cout << "#                                                    \\/___/  Created by Chris Van Hanswyk        #" << endl;
  cout << "#                               #" << endl;
  cout << "#                               #" << endl;
  cout << "##################################################################################################" << endl;

  Sleep(4000);

  // For to perhaps seed a random number to generate random cards from the deck
  int seed = time(0);
  srand(seed);

  char response;

  cout << "\n\n          Ready to play? (Y=Yes, N=No): ";
  cin >> response;
  

  while (response != 'Y' & response != 'y' & response != 'N' & response != 'n'){
    cout << "\n\n          Please enter 'Y' for Yes or 'N' for 'No': ";
    cin >> response;
  }
    
  if(response == 'Y' || response == 'y'){
    //play_game();
    cout << "\n\n          Game playing..." << endl;
  }
  else if (response == 'N' || response == 'n'){
    cout << "\n\n          :(... Okay! Goodbye!\n";
    return 0;
  }
  else{
    return 0;
  }
  
  Sleep(1000);
  cout << "\n\n          Would you like to play again? (Y=Yes, N=No): ";
  cin >> response;

  while (response != 'Y' & response != 'y' & response != 'N' & response != 'n'){
    cout << "\n\n          Please enter 'Y' for Yes or 'N' for 'No': ";
    cin >> response;
  }

  while (response == 'Y' || response == 'y'){
    //play_game();
    cout << "\n\n          Playing game...\n";
    cout << "\n\n          Play again? (Y=Yes, N=No): ";
    cin >> response;
    Sleep(1000);
  }

  cout << "\n\n          Thank you for playing!\n\n";

  return 0;
}
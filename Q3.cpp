#include <iostream>

int main(){
 int min = 0;
 int max = 100;
 int check = 0;
 std::string number = " ";
 std::cout << "I want to play a game."<< std::endl;
 std::cout << "Think of a number between 1 and 100."<< std::endl;

 while(check == 0){
     std::cout << "Is the number bigger, smaller, or equal to "<<(min + max)/2<<"? Enter 'b' for bigger, 's' for smaller, or 'e' equal." <<std::endl;
     std::cin >> number;
     if(number == "s"){
         max = (max + min)/2;
     }
     else if(number == "b"){
         min = (max + min)/2;
     }
     else if(number == "e"){
         std::cout << "Your number is " <<(max + min)/2<< ". You lose. The room will now fill with gas."<< std::endl;
         check = 1;
     }

 }
    
}
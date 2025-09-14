/******************************************************************************

Goal: Create a program that calculates the total cost of movie tickets for a group outing.
Group Work: Students will work in groups of 2-3 to develop the program.
Word Problem: The program should consider:
Number of Adults (18+): Adult tickets cost a fixed price (e.g., $12).
Number of Children (under 18): Child tickets have a discounted price (e.g., $8).
Discount (Optional): There might be a group discount applied to the total cost if the group size exceeds a certain number (e.g., 10% discount for groups of 5 or more).
Functionality:
The program should prompt the user to enter the number of adults and children.
It should calculate the total cost based on individual ticket prices and the number of attendees.
(Optional) Implement a discount functionality based on group size.
The program should display the final cost for the movie tickets.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
  int adultTickets, childTickets;
  double adultPrice = 12.00; 
  double childPrice = 8.00; 
  double totalCost = 0.0;
  int discountThreshold = 5; 
  double discountRate = 0.10;
    
  cout << "Welcome to the Movie Ticket Price Calculator!" << endl;

  std::cout << "Enter the number of adults: ";
  std::cin >> adultTickets;
  
  std::cout << "Enter the number of children: ";
  std::cin >> childTickets;
  
  int totalTickets = adultTickets + childTickets;

  std::cout << "Adults = " << adultTickets << endl;
  std::cout << "Children = " << childTickets << endl;
  std::cout << "Total Tickets = " << totalTickets << endl;
  
  totalCost = (adultTickets*adultPrice) + (childTickets*childPrice);
  
  std::cout << "Total Cost = " << totalCost << " dollars." << endl;
  
  if (totalTickets >= discountThreshold) {
      std::cout << "Congrats! You are eligible for the discount." << endl;
      std::cout << "Discount Applicable: 10%. Apply Discount?:\n y/n" << endl;
      
      string choice;
    std::cin >> choice;
  
     if (choice == "y") {
           totalCost = totalCost * (1-discountRate);
            std::cout << "Discount Applied. Final Cost = " << totalCost << " dollars.";
     } 
     else { 
            std::cout << "No Discount Applied. Final Cost = " << totalCost << " dollars.";
     }
  } else {
      std::cout << "Sorry. You are not eligible for the discount. Your final cost is " << totalCost << " dollars." << endl;
  }

/****************************
  double finalCost = 0.0; 
    if (totalTickets >= discountThreshold) {
    finalCost = totalCost -(totalCost * discountRate); 
    } else {
    
    finalCost = totalCost; 
}
std::cout << "Your total cost (considering discounts) is: " << finalCost << " dollars." << endl; 
****************************/
  
  return 0;
}

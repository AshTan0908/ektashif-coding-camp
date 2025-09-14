/******************************************************************************
Exercise 2
Problem: Khalid is baking cookies! 
He has a special recipe that requires 2 cups of flour and 3/4 cups of sugar per batch. 
He also has a bag of 50 chocolate chips. Each batch of cookies makes 12 cookies, 
but Khalid only wants to bake cookies if he has enough chocolate chips for at least half 
the total cookies.
He has 10 cups of flour available.
Does Khalid have enough chocolate chips for at least half the total cookies possible with the flour?
If he does have enough chocolate chips, calculate how many batches he can bake and the total number of cookies.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
  // Variables
  int flourPerBatch = 2;             // Cups of flour per batch
  double sugarPerBatch = 3.0 / 4.0;   // Cups of sugar per batch
  int totalFlourNeeded = 10;         // Total cups of flour needed
  int numBatches;                    // Number of batches John can bake
  int cookiesPerBatch = 12;           // Cookies per batch
  int totalCookies;                  // Total number of cookies John can bake
  int chocolateChips = 50;           // Number of chocolate chips
  bool enoughChocolate = false;     // Flag to check if enough chocolate chips

  // Calculate number of possible batches (without chocolate check)
  numBatches = totalFlourNeeded / flourPerBatch;

  // Calculate total possible cookies (without chocolate check)
  totalCookies = numBatches * cookiesPerBatch;

  // Check if enough chocolate chips for half the cookies
  enoughChocolate = (totalCookies / 2) <= chocolateChips;  // Integer division rounds down

  // Update number of batches and total cookies if enough chocolate
  if (enoughChocolate) {
    numBatches = min(numBatches, (chocolateChips / cookiesPerBatch));  // Use min to limit by chocolate chips
    totalCookies = numBatches * cookiesPerBatch;

    cout << "Khalid has enough chocolate chips!" << endl;
    cout << "He can bake " << numBatches << " batches." << endl;
    cout << "This will make a total of " << totalCookies << " cookies." << endl;
  } else {
    cout << "Unfortunately, Khalid doesn't have enough chocolate chips." << endl;
  }
  
  //int chipsPerCookie = chocolateChips / totalCookies;
  //printf("%d",chipsPerCookie);

  return 0;
}

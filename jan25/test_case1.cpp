//The Farmer store 20 apples , 20 orange and 10 mangoes in basket.
// The price of each piece of apple is 5.56 , orange is 7.85 and mango is 4.23
// The farmer travel from home town to city which approx 5 km and paid Rs 2per kilometer
// Calculate the total price of basket so the farmer earn 10% profit.

#include <iostream>
using namespace std;

int main() {
    // Given data
    int apples = 20, oranges = 20, mangoes = 10;
    double price_apple = 5.56, price_orange = 7.85, price_mango = 4.23;
    double travel_distance = 5, travel_cost_per_km = 2;
    
    // Calculate total cost of fruits
    double total_fruit_cost = (apples * price_apple) + (oranges * price_orange) + (mangoes * price_mango);
    
    // Calculate total travel cost
    double total_travel_cost = travel_distance * travel_cost_per_km;
    
    // Calculate total cost
    double total_cost = total_fruit_cost + total_travel_cost;
    
    // Calculate selling price with 10% profit
    double selling_price = total_cost * 1.10;
    
    cout << "Total cost of basket: Rs " << total_cost << endl;
    cout << "Selling price with 10% profit: Rs " << selling_price << endl;
    
    return 0;
}

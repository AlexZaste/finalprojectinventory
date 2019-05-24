#include <iostream>
using namespace std;
float overallstockworthP = 0;
class Perishables {
  private:
      string name;
      double price;
      int quantity;

  public:
    void inventoryStock()
    {
    Perishables items[100];
    int   numItems   = 0;
    float total      = 0;
    float StockWorthperishables = 0;

    cout << "How many items you want to enter: ";
    cin  >> numItems;

    for(int i = 0; i < numItems; i++)
    {
            cout << endl;

            cout << "Enter name of item " << (i + 1) << ": ";

            cin >> items[i].name;

            cout << "Enter price of item " << (i + 1) << ": $";

            cin >> items[i].price;

            cout << "Enter quantity of item " << (i + 1) << ": ";

            cin >> items[i].quantity;

            float StockWorthperishables= items[i].quantity * items[i].price;

            float total = StockWorthperishables + total;

            cout << "Total stocks are $" << StockWorthperishables << endl;

            overallstockworthP= overallstockworthP+StockWorthperishables;

    }

    cout << endl << endl;

    for(int i = 0; i < numItems; i++)
    {
            cout << "For the item " << items[i].name << ", \n\nthe price is: $" << items[i].price << " \n\nand the quantity is: " << items[i].quantity << endl;

            float StockWorthperishables = items[i].quantity * items[i].price;

            float total = StockWorthperishables + total;

            cout << "\nThe total stock worth of this item is $" << StockWorthperishables << endl;
    }
   cout << "\nthe over all worth of perishables stock is :"<< overallstockworthP << "$";
   }
};
float overallstockworthNP = 0;
class Nonperishables{
  private:
      string name;
      double price;
      int quantity;

  public:
    void inventoryStock(){
    Nonperishables items[100];
    int   numItems   = 0;
    float total      = 0;
    float StockWorthNonperishables = 0;

    cout << "How many items you want to enter: ";
    cin  >> numItems;

    for(int i = 0; i < numItems; i++){

            cout << endl;

            cout << "Enter name of item " << (i + 1) << ": ";

            cin >> items[i].name;

            cout << "Enter price of item " << (i + 1) << ": $";

            cin >> items[i].price;

            cout << "Enter quantity of item " << (i + 1) << ": ";

            cin >> items[i].quantity;

            float StockWorthNonperishables = items[i].quantity * items[i].price;

            float total = StockWorthNonperishables + total;

            cout << "Total stocks are $" << StockWorthNonperishables << endl;

            overallstockworthNP= overallstockworthNP+StockWorthNonperishables;
                                    }

    cout << endl << endl;

    for(int i = 0; i < numItems; i++){

            cout << "For the item " << items[i].name << ", \n\nthe price is: $" << items[i].price << " \n\nand the quantity is: " << items[i].quantity << endl;

            float StockWorthNonperishables = items[i].quantity * items[i].price;

            float total = StockWorthNonperishables + total;

            cout << "\nThe total stock worth of this item is $" << StockWorthNonperishables << endl;
    }
   cout << "\nthe over all worth of perishables stock is :$"<< overallstockworthNP;
   }
};
int choice = 0;
class Accountant {

  private:

    float OverallStockWorth;

  public:
    //function will add the two totals from Perishable and Nonperishables
    void firstmessage(){
      cout << "Choose a function by entering a number:";

      cout << "\n1) Perishables";

      cout << "\n2) Nonperishables";

      cout << "\n3) Both" << endl;

      cin  >> choice;
    }

    void StoreTotal()
    {

       OverallStockWorth=overallstockworthNP+overallstockworthP;

       cout << "\nThe overall stock worth of the entire store  :$"<< OverallStockWorth;

    }
};

int main(){

Accountant bb;
bb.firstmessage();


// 1 will run a function that allows user to input stock
  if (choice == 1){
    cout << "\nPerishables" << endl <<
            "-----------" << endl;
    Perishables ab;
    ab.inventoryStock();

  }
  //2 will run a function that allows user to input missing stock
  else if (choice == 2){
    cout << "\nNonperishables" << endl <<
            "--------------" << endl;
    Nonperishables mb;
    mb.inventoryStock();


  }
  //3 will run both functions
  else if (choice == 3){
    cout << "\nPerishables" << endl <<
            "-----------" << endl;
    Perishables ab;
    ab.inventoryStock();
    cout << "\nNonperishables" << endl <<
            "--------------" << endl;
    Nonperishables mb;
    mb.inventoryStock();

  }
  else{
      cout << "Sorry, try again" << endl;
  }

bb.StoreTotal();
  // print out total loss and gain of perishable stock

        return 0;
}

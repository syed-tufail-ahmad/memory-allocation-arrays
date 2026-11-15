#include <iostream>
#include <string>
using namespace std;

class shop
{
    int itemid[50];
    int itemprice[50];
    int counter;

public:
    void initcounter() { counter = 0; };
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter your id of your item" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int m = 0; m < counter; m++)
    {
        cout << "the price of the item eith id  " << itemid[m] << "is   " << itemprice[m] << endl;
    }
}
int main()
{
    shop pachadokan;
    pachadokan.initcounter();
    pachadokan.setprice();
    pachadokan.setprice();
    pachadokan.setprice();
    pachadokan.displayprice();

    return 0;
}

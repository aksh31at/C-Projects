#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>

using namespace std;

class Bill{
    private:
        string Item;
        int Rate, Quantity;
    public:
        Bill():Item(""), Rate(0), Quantity(0){ }
        
        void setItem(string item){
            Item=item;
        }
        void setRate(int rate){
            Rate=rate;
        }
        void setQuantity(int quantity){
            Quantity=quantity;
        }

        string getItem(){
            return Item;
        }
        int getRate(){
            return Rate;
        }
        int getQuantity(){
            return Quantity;
        }       

};

void addItem(Bill b){
    bool close=0;
    while(!close){
        int choice;
        cout<<"\t1.Add"<<endl;
        cout<<"\t2.Close"<<endl;
        cout<<"\tEnter Choice: ";
        cin>>choice;

        if(choice==1){
            string item;
            int rate, quantity;

            cout<<"\tEnter Item Name: ";
            cin>>item;
            b.setItem(item);

            cout<<"\tEnter Rate: ";
            cin>>rate;
            b.setRate(rate);
            
            cout<<"\tEnter Quantity: ";
            cin>>quantity;
            b.setQuantity(quantity);
        }

        ofstream out("C:/Users/as625/OneDrive/Desktop/C++Projects/Bill.txt", ios::app);

    }
}

int main(){
    Bill b;
    bool exit=0;
    while(!exit){
        system("cls");
        int val;
        cout<<"\tWelcome To Super Market Billing System"<<endl;
        cout<<"\t**************************************"<<endl;
        cout<<"\t\t1.Add Item"<<endl;
        cout<<"\t\t2.Print Bill"<<endl;
        cout<<"\t\t3.Exit"<<endl;
        cout<<"\t\tEnter Choice: ";
        cin>>val;

        if(val==1){

        }

    }
}
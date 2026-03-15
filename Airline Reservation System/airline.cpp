#include <iostream>
#include <sstream>
#include <windows.h>
#include <fstream>

using namespace std;


class Airline{
    private:
        string Flight, Dest, Dep;
        int Seats;
    public:
        Airline(string flight, string dest, string dep, int seats){
            Flight=flight;
            Dest=dest;
            Dep=dep;
            Seats=seats;            
        }   

        string getFlight(){
            return Flight;
        }
        string getDest(){
            return Dest;
        }
        string getDep(){
            return Dep;
        }
        int getSeats(){
            return Seats;
        }
};

int main(){
    Airline flight1("F101", "USA", "India", 50);
    Airline flight2("F102", "USA", "Canada", 50);
    Airline flight3("F103", "USA", "China", 50);

    ofstream out("C:/Users/as625/OneDrive/Desktop/C++Projects/Airline Reservation System/Flight.txt");
    if(!out) cout<<"Error: File Can't Open!"<<endl;
    else{
        out<<flight1.getFlight()<<" : "<<flight1.getDest()<<" : "<<flight1.getDep()<<" : "<<flight1.getSeats()<<endl<<endl;
        out<<flight2.getFlight()<<" : "<<flight2.getDest()<<" : "<<flight2.getDep()<<" : "<<flight2.getSeats()<<endl<<endl;
        out<<flight3.getFlight()<<" : "<<flight3.getDest()<<" : "<<flight3.getDep()<<" : "<<flight3.getSeats()<<endl<<endl;
        cout<<"Data Saved Successfully!"<<endl;
        out.close();
    } 
}

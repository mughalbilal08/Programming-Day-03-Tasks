#include <iostream>
using namespace std;
main(){
float bagsize;
float bagcost;
float bagarea;
float fertilizerPerPound;
float fertilizingareaPerSquare;
cout << "Enter bag size in Pounds: ";
cin >> bagsize;
cout << "Enter cost of the Bag: ";
cin >> bagcost;
cout << "enter area covered by each bag in square feet: ";
cin >> bagarea;
   fertilizerPerPound = bagcost/bagsize;
   fertilizingareaPerSquare = bagcost/bagarea;
cout<<" ___________________________________________________________"<<endl;
cout<< "Cost of fertilizer per pound: " << fertilizerPerPound <<endl;
cout<< "Cost of fertilizing the area per square feet: " << fertilizingareaPerSquare; 
   
    

}
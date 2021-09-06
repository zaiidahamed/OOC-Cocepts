
#include <iostream>
#include "Distance.h"
using namespace std;

int main()
{   /*

    Distance d1;
    d1.printDistance();
    
    Distance d2(11, 6.25);
    d2.printDistance();
   
        
    Distance* dist1 = new Distance();
    dist1->printDistance();
    delete dist1;

    cout << "********************************************\n";

    Distance* dist2 = new Distance(11, 6.25);
    dist2->printDistance();
     
    
    delete dist2;  */

    Distance dist1, dist2;
    Distance dist3(11, 6.25);

    dist1.inputDistance();
    dist3.addDistance(dist1, dist2);

    cout << endl << "--------- dist 1 --------" << endl;
    dist1.printDistance();

    cout << endl << "--------- dist 2 --------" << endl;
    dist2.printDistance();

    cout << endl << "--------- dist 3 --------" << endl;
    dist3.printDistance();

    return 0;
}

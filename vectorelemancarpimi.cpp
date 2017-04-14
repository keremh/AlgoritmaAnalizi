#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    int j;
    double toplam = 0;
    std::vector<int> myvector1 (5);
    std::vector<int> myvector2 (5);
    
    for (unsigned i=0; i<myvector1.size(); i++){
        myvector1.at(i)=i;
        myvector2.at(i)=i;
        }
    
    for (unsigned i=0; i<myvector1.size(); i++)
        std::cout << ' ' << myvector1.at(i);
    std::cout << '\n';
    
    for (unsigned i=0; i<myvector2.size(); i++)
        std::cout << ' ' << myvector2.at(i);
    std::cout << '\n';

    for(j=0; j<myvector1.size();j++){
             toplam = toplam + (myvector1.at(j)*myvector2.at(j));         
    }        
    
    cout << "Toplam: " << toplam << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

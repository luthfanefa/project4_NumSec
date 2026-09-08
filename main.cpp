/* 
    program : number sequencer
    author : luthfan f achmadi
    description : simple program sortir number 
*/
#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector <int> num ;
    int prenum, exit = 0 ;
    cout << "--NUMBER SEQUENCER--" << endl << endl ;
    cout << "enter multiply number : " << endl
         << "-" ;
    cin >> prenum ; 
    num.push_back(prenum);
    cout << endl ;
 
    for (int i = 0 ; i < num.size() ; i ++) {
        
            cout << "attempt : " << i+1 << endl ;
        
        }

  return 0 ;

}
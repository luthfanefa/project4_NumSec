/* 
    program : number sequencer
    author : luthfan f achmadi
    description : simple program sortir number 
*/
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main () {

    vector <int> num ;
    string prenum ;
    cout << "NUMBER SEQUENCER-BUBBLE SORT METHOD" << endl;
    cout << "-";
    getline(cin, prenum);


    stringstream convert(prenum);
    int tempt ;
    while (convert >> tempt){
        num.push_back(tempt);
    }

    cout << endl << "PROCCESS" << endl << endl ;

    int total_attempt = 0 ;
    int n = num.size() ;

    for (int i = 0 ; i < n-1 ; i++ ) {

        bool s_swap = false ;

        for (int j = 0 ; j < n - i - 1 ; j++) {

            if (num[j] > num[j + 1]) {
                swap(num[j], num[j + 1]);
                s_swap = true ;
            }
        }
        if (s_swap) {
                total_attempt++ ;
                cout << "attempt : " << total_attempt << endl;
                for (int j = 0 ; j < n ; j++) {
                    cout << num [j] << " ";
                }
                cout << endl ;
            }
    }
    cout << endl << "total attempt : " << total_attempt ;


  return 0 ;

}
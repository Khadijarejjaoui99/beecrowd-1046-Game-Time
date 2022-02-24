// beecrowd  1046 Game Time
#include <iostream>
using namespace std;

int main() {
    int start, end, d=0;
    cin >> start >> end;
    if(start <0 || start >24 || end<0 ||end >24){
        cout<<"Please enter a valid input:"<< endl;
        cin >> start >> end;
    }
    if(start == end){
       d = 24;
       cout << "O JOGO DUROU " << d << " HORA(S)" << endl;
    }else if(start > end){
        d = 24 - (start-end);
        cout << "O JOGO DUROU " << d << " HORA(S)" << endl;
    }else{
        d = end - start;
        cout << "O JOGO DUROU " << d << " HORA(S)" << endl;
      } 
    system("pause");
    return 0;
}
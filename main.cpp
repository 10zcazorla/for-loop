#include <iostream>

using namespace std;

int main()
{
    cout << "forloop1 \n";
    for (int a=1; a<=10; a++){
        cout <<a<<endl;
    }
    cout << "forloop2 \n";
    for (int a=1; a<=10; a+=2){
        cout <<a<<endl;
    }
    cin.get();
    return 0;
}

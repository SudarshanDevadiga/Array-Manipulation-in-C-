#include <iostream>
using namespace std;
int  main() {
int numbers[] = {1,2,3,4,5};
cout << "First Element: "<<numbers[0]<<endl;
cout << "Last Element: "<<numbers[4]<<endl;
numbers[2]=10;
cout<<"Modified arryay: ";
for (int i=0;i<5;i++) {
    cout << numbers[i]<<" ";
}
cout << endl;
return 0;
}

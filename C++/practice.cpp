#include<bits/stdc++.h>
using namespace std;
int main() {
    int* dyn = new int(50);  // Dynamically allocate memory for an integer
    cout<<"Dynamic Integer: "<<*dyn<<endl;
    delete dyn;  // Deallocate the dynamically allocated memory
    return 0;
}
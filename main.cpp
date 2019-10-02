#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout << (n%2==0) ? "es" : "no es";
    return 0;
    int x= multiploDe2(7);
    cout <<x;
}

bool multiploDe2(int n){
    return ((n%2==0) ? true : false);

}

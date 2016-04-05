#include <fstream>

using namespace std;

ifstream f("adunare.in");
ofstream g("adunare.out");

int main()
{
    int a,b;
    f>>a>>b;
    g<<a+b;
    g.close();
    return 0;
}

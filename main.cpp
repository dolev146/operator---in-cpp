#include <iostream>
#include <string>

using namespace std;
class myClass
{
public:
    char cr;
    myClass(char cr) : cr(cr)
    {
    }

    operator char()
    {
        return cr;
    }
};

int main()
{
    myClass yakov{'a'};
    cout << yakov << endl;
}
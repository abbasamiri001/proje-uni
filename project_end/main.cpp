#include <iostream>

using namespace std;

class date
{
    private:
    int years , month , days ;
public:
    void get_date(int y , int m , int d ){
        years = y ;
        month = m ;
        days = d ;
    }
};
class wikend
{
private:
    string a ;
public:
    void get_wikend (string name_wikend){
        a =name_wikend ;
    }
};

int main()
{

    return 0;
}

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
class id_student{
private:
    int id ;
    string name ;
public:
    void set_id (int a ){ id = a ;}
    void set_name_stu(string n ){ name = n  ;}
    int get_id (){return id ;}
    void get_name_stu (){cout <<"name:"<< name<< " id : " << id << endl  ;}
};

int main()
{

    return 0;
}

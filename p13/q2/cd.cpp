#include "cd.h"
#include <iostream>
#include <cstring>
namespace
{
    using std::cout;
    using std::endl;
} // namespace

Cd::Cd()
{
    selections = 0;
    playtimes = 0;
    performer[0] = '\0';
    lable[0] = '\0';
}

Cd::Cd(const char *s1, const char*s2, int n, double x){
    selections = n;
    playtimes = x;
    strcpy(performer,s1);
    strcpy(lable,s2);
}

Cd::~Cd() {}

void Cd::Report() const
{
    if(selections == 0){
        return;
    }
    cout << "Performers: " << performer << endl
         << "Label: " << lable << endl
         << "selections: " << selections << endl
         << "playtimes" << playtimes << endl;
}

Cd &Cd::operator=(const Cd &d)
{
    selections = d.selections;
    playtimes = d.playtimes;
    strcpy(lable, d.lable);
    strcpy(performer, d.performer);
    return *this;
}

Classic::Classic()
{
    program_list = nullptr;
    program_counts = 0;
}

Classic::Classic(const char *s1, const char *s2, int n, double x, std::initializer_list<const char *> il) : Cd(s1, s2, n, x)
{
    program_counts = il.size();
    program_list = new char *[il.size()];
    int counts = 0;
    for (const char *i : il)
    {
        program_list[counts] = new char(strlen(i));
        strcpy(program_list[counts], i);
        counts++;
    }
}

void Classic::Report() const
{
    Cd::Report();
    for (int i = 0; i < program_counts; i++)
    {
        cout<<"program"<<i<<": "<<program_list[i] <<endl;
    }
}

 Classic &Classic::operator=(const Classic &d){
        ((Cd *) this)->operator=(d);
        for (int i = 0; i < program_counts; i++)
        {
            delete[] program_list[i];
        }
        delete[] program_list;
        program_list = new char*[d.program_counts];
        program_counts = d.program_counts;
        for (int i = 0; i < d.program_counts; i++)
        {
            program_list[i] = new char[strlen(d.program_list[i])];
            strcpy(program_list[i], d.program_list[i]);
        }
        return *this;
 }

 Classic::~Classic(){
     for (int i = 0; i < program_counts; i++)
     {
         delete[] program_list[i];
     }
     delete[] program_list;
 }

/*
 * @Date: 2021-11-29 23:33:41
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-11-30 12:01:19
 * @Description: q1 in sesction 4;
 */
#include <iostream>
#include<cstring>
using namespace std;

struct Person
{
    /* data */
    char *fristName;
    char *lastName;
    char letterGrad;
    int age;
};
char guoDuqu[20];

int main()
{
    Person *person = new Person;
    cout << "What is your frist name?";
    cin.getline(guoDuqu,20);
    person->fristName = new char[strlen(guoDuqu)+1];
    strcpy(person->fristName, guoDuqu);
    cout << endl
         << "What is your last name?";
    cin.getline(guoDuqu,20);
    person->lastName = new char[strlen(guoDuqu)+1];
    strcpy(person->lastName, guoDuqu);
    cout << endl
         << "What letter grade do you deserver?";
    cin >> guoDuqu;
    guoDuqu[0]++;
    person->letterGrad = guoDuqu[0];
    cout << endl
         << "What is your age?";
    cin >> person->age;
    cout << endl
         << "Name: " << person->lastName << ", " << person->fristName << endl
         << "Grade: " << person->letterGrad << endl
         << "Age: " << person->age;
     delete person;
}
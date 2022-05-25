/*
 * @Date: 2021-11-30 12:12:54
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-11-30 12:38:44
 * @Description: None
 */
#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
    /* data */
    string company;
    double diameter;
    double weight;
};

int main()
{
    Pizza *pizza;
    int numOfPizza;
    cout << "Enter the num of pizza:";
    cin >> numOfPizza;
    pizza = new Pizza[numOfPizza];
    for (int i = 0; i < numOfPizza; i++)
    {
        cout << i + 1 << endl
             << "Enter the company name:";
        cin.get();
        getline(cin, pizza[i].company);
        cout << endl
             << "Enter the diameter of pizza: ";
        cin >> pizza[i].diameter;
        cout << endl
             << "Enter the weight of pizza: ";
        cin >> pizza[i].weight;
    }
    for (int i = 0; i < numOfPizza; i++)
    {
        cout << i + 1 << endl
             << "The weight of the pizza is " << pizza[i].weight << endl
             << "The company of the pizza is " << pizza[i].company << endl
             << "The diameter of the pizza is " << pizza[i].diameter << endl;
    }
}
/*
 * @Date: 2021-12-14 16:55:11
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-14 18:24:13
 * @Description: None
 */
#include <iostream>

using namespace std;



auto calculateAverage = [](double *_scores, int *_count)
{
    double sum;
    for (int i = 0; i < *_count; ++i)
    {
        sum += _scores[i];
    }
    cout<<"the average scores is "<<sum / *_count;     
};
auto inputScores = [](double *_scores, int *_count)
{
    *_count = 10;
    for (int i = 0; i < 10; ++i)
    {
        cout<<endl<<"please inter the scores:";
        cin >> _scores[i];
        if (_scores[i] == 0)
        {
            *_count = i;
            break;
        }
    }
};
auto printScores(double *_scores, int *_count){
    cout<<"print your scroes"<<endl;
    for(int i =0;i<*_count; ++i){
        cout<<_scores[i]<<endl;
    }
}
void (*pa[3])(double *, int *) = {inputScores, printScores, calculateAverage};

int main()
{
    cout << "please enter your golf scorces for 10 at max, and you can inter '0' to exit" << endl;
    double scores[10];
    int count;
    for(auto i : pa){
        i(scores, &count);
    }
}
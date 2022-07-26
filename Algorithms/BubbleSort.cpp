#include <iostream>
#include <vector>

using namespace std;
void SortVector(vector<int>& a);
void printVector(vector<int> a);

int main(int argc, char const *argv[])
{
    vector<int> a;
    int n;
    int number;
    cin>>n;
    for(int i=0; i<n; i++){
        //input vector here
        cin>>number;
        a.push_back(number);
    }

    SortVector(a);
    printVector(a);
}

void SortVector(vector<int>& a)
{
    bool swap = true;
    while(swap)
    {
        swap = false;
        for (size_t i = 0; i < a.size()-1; i++)
        {
            if (a[i]>a[i+1] )
            {
                a[i] += a[i+1];
                a[i+1] = a[i] - a[i+1];
                a[i] -=a[i+1];
                swap = true;
            }
        }
    }
}

void printVector(vector<int> a)
{
    for (size_t i=0;  i <a.size();  i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
#include<iostream>

#include<vector>

#include <chrono>

using std::vector;

using namespace std;

using namespace std::chrono;

void tri_selection(vector<int>&V);

int main(){

   

    vector <int> V;

    int n;

    cout<<"donner la taille du tableau";

    cin>>n;

    int i=n;

    while (i>0)

    {

        V.push_back(i);

        i--;

    }

    auto start = high_resolution_clock::now();

    tri_selection(V);

    auto stop = high_resolution_clock::now();

 

    cout << "Time taken by function: "

         << duration_cast<nanoseconds>(stop - start).count() << " nanoseconds" << endl;

   

   return (0);

}

void tri_selection(vector<int>&V){

    int temp;

    int j;

    for (int i=1; i <V.size() ; i++)

    {

        temp = V[i];

        j=i;

        while((j>0)&&(V[j-1]>temp)){

        V[j] = V[j-1];

        j=j-1;

        }

      V[j]=temp; 

    }

}


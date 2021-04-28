#include <bits/stdc++.h>
using namespace std;
#define MAX 10

class Inser_sort{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sort();
};


void Inser_sort :: getdata(){
    cout<<"Enter the number of data element to be sorted: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void Inser_sort :: showdata(){
    int comp;
    cout<<"\n--Display--\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "<<endl;
}
void Inser_sort :: sort(){
    int temp,min,j,comp=0;
    for(int i=1;i<n;i++){
        temp = arr[i];
        comp++;
        for(j=i;j>0 && arr[j-1]>temp;j--){ 
            arr[j] = arr[j-1];
            comp++;
        }
        arr[j] = temp;
    }
    cout<<"No. of comparisions :"<<comp;
}

int main(){
    cout<<"\n*****Insertion Sort*****\n";
    Inser_sort obj;
    obj.getdata();
    obj.sort();
    obj.showdata();
    return 0;
}

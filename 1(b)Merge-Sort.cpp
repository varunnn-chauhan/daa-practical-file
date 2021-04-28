#include <iostream>
#include <stdio.h>
using namespace std;
int count = 0; 
int n = 0;
const int MAX_ITEMS = 100;
void merge(int values[], int lFirst, int lLast, int rFirst, int rLast);
void printarray( int a[], int n);
void mergesort(int a[], int start, int end){ 
    if(start < end){
        int mid = (start+end)/2; 
        mergesort(a,start, mid);
        mergesort(a,mid+1,end);
        merge(a, start,mid, mid+1, end); 
    }
}
void merge(int values[], int lFirst, int lLast, int rFirst, int rLast){
    int temparray[MAX_ITEMS];
    int index = lFirst;
    int saveFirst = lFirst;
    while((lFirst <= lLast) && ( rFirst <= rLast)){
        if(values[lFirst] < values[rFirst]){
            temparray[index] = values[lFirst]; 
            lFirst++;
        }else{
            temparray[index] = values[rFirst];
            rFirst++;
        }
        index++; count++; 
    }
 
    while(lFirst <= lLast){ 
        temparray[index] = values[lFirst];
        lFirst++;
        index++;
    }
    while(rFirst <= rLast){
        temparray[index] = values[rFirst];
        rFirst++;
        index++;
    }
 
    for(index = saveFirst; index <= rLast; index++){
        values[index] = temparray[index];
        printarray(values,n);
        cout << endl;
    }
}

    void printarray( int a[], int n){
        for (int i=0; i < n; i++)
        cout << a[i] << " ";
    }
int main(){
    cout << "Enter number of elements to be sorted : ";
    cin >>n;
    int a[MAX_ITEMS];
    for (int i=0; i < n; i++){
        if(i==0)
            cout << "Enter the first element: ";
        else
            cout << "Enter the next element: "; cin >>a[i];
    }
    
    int start = 0;
    int end = n-1;
    mergesort(a, start, end);
    printarray(a, n);
    cout << endl;
    cout << "Number of comparisons : "<< count << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,target;
    cout<<"Enter size of vector: ";
    cin>>n;
    

    vector <int> vec(n);
    cout<<"Enter a sorted array:";
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }

    cout<<"Enter Target: ";
    cin>>target;

    cout<<"You Entered: ";
    for(int i=0;i<n;i++){
        cout << vec[i]<<" ";
    }
    cout<<" "<<endl;
    
    
    int vect_mid,temp_vect_size,vect_start,vect_end;
    vect_start=0;
    vect_end=n-1;
    bool signal = false;
    while(vect_start <= vect_end){
        vect_mid=(vect_start+vect_end)/2;
        if (target == vec[vect_mid]){
            cout<<"Target is found at index: "<<vect_mid<<endl;
            signal = true;
            break;
        } else if(vec[vect_mid]<target){
            vect_start = vect_mid+1;
        } else if(vec[vect_mid]>target){
            vect_end = vect_mid-1;
        }
    }
    if (signal==false){
        cout <<"The number doesnt exist"<<endl;
    }
    

    return 0;
}

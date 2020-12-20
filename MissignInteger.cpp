#include<iostream>
#include<algorithm>

using namespace std;

int main(){
int A[]={-3,-2,2,-5,4};
int sizeA=sizeof(A)/sizeof(A[0]);
int* p;
int* k;
k=max_element(A,A+sizeA);
for(int i=1;i<=*k;i++){
    p=find(A,A+sizeA,i);
    if(p!=A+sizeA){
        cout<<i<<endl;
    }
    else{
        cout<<"Missing element: "<<i<<endl;
    }
}


return 0;
}

#include <iostream>
using namespace std;


class safeArray{
public:int *array;
           int length;
public:safeArray(int n);
           ~safeArray();
           void setarray(int value,int pos);
           int getarray(int pos);
           bool issafe(int pos);
};


bool safeArray::issafe(int pos){
        return(pos<this->length&&pos>=0);
}


safeArray::safeArray(int n){
        this->array=new int[n-1];
        this->length=n;
};


safeArray::~safeArray(){
        delete array;
};


void safeArray::setarray(int value,int pos){
        if(this->issafe(pos)){
                this->array[pos]=value;
        }else
        { 
                cout<<"wrong"<<endl;
        }
};


int safeArray::getarray(int pos){
        if(this->issafe(pos)){
                cout<<this->array[pos];
                return(this->array[pos]);
        }else
        {
                cout<<"your position is illegal"<<endl;
                return 0;
        }
};




int main(){
        int number,index;
        safeArray a(2);
        cout<<a.length<<endl;
        cout<<"get in 2 numbers"<<endl;
        for(int i=0;i<3;i++){
        cin>>number>>index;
        a.setarray(number,index);
        }
    a.getarray(1);
        cout<<endl;
        a.getarray(7);
        system("pause");
        return 0;
}

#include <iostream>

using namespace std;

 void swapValues(int& a,int& b){
   a = 9,b = 3;

   int temp = a;
   a = b;
   b = temp;
   cout<<a<<" "<<b<<endl;

 }


 void reset(int& x){
      x = 0;

    }
int main()
{
    int x=15;
    int* ptr= &x;
    int& r= x;

    cout << x << endl;
    cout << &x << endl;
    cout << *ptr << endl;
    cout << r << endl;
    cout << ptr << endl;
    *ptr = 40;
    cout << x << endl;
    r = 12;
    cout << x << endl;



    int num = 99;
    reset(num);
    cout<<num<<endl;
    int h=9;
    int k=3;

    swapValues(h,k);


    int arr[6]={5,8,9,7,6,3};
    for(int i=0;i<6;i++){

            cout<<arr[i]<<endl;
    }
    for(int i=5;i>=0;i--){

        cout<<arr[i]<<endl;
    }
    int n;
    cin>>n;
    if(n<0){
        cout<<"invalid"<<endl;
    }
    else{
        cout<<"rightly called"<<endl;
    }
    int* ar = new int[n]{};
    for(int i=0;i<n;i++){

        cout<<"Enter"<<" "<<i;
        cin>>ar[i];



    }
    int sum = 0;
    for(int i=0;i<n;i++){


        sum = sum + ar[i];


    }

    cout<<sum<<endl;

    delete[]  ar;
    ar = nullptr;

    int a[4
    ]={3,6,9,12};
    int* p = a;

        cout<<"Elements are as given"<<endl;
        cout<<*p<<endl;
        cout<<*(p+1)<<endl;

    int m;
    cout<<"Enter array size"<<endl;
    cin>>m;
    if(m<=0){
        cout<<"Not valid"<<endl;
    }
    int* b = new int[m]{};
    int Sum =0;
    for(int i=0;i<m;i++){
        cin>>b[i];
        Sum += b[i];
    }

    int max = b[0];
    for(int i=1;i<m;i++){

       if(b[i]>max){
         max = b[i];
       }

    }
    cout<<"max is"<<max<<endl;
    cout<<"Sum is:"<<Sum<<endl;
    delete[] b;
    b = nullptr;



    return 0;


}

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<windows.h>
using namespace std;



long long int fibonacci(long long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(long long int num){

    if(num > 1){
    num = fibonacci(num-1) + fibonacci(num-2);
    
    }else if(num == 1){
      return 1;
      }
      else{return 0;}
    return num;
}
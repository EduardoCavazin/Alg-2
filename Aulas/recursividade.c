#include <stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int pg(int n, int q, int a1){
    if(n == 1){ 
        return a1; 
    }else{
        return q * pg(n-1, q, a1);
    }
}

int summation(int n){
    if(n == 1){
        return 1;
    }else{
        return n + summation(n-1);
    }
}

int powerof(int n, int e){
    if(e == 0){
        return 1;
    }else{
        return n * powerof(n, e-1);
    }
}

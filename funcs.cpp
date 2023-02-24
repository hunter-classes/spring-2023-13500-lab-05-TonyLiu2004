#include <iostream>
#include "funcs.h"

//Input integers n and d, returns true if n is divisible by d and false otherwise
bool isDivisibleBy(int n, int d){
    if(d==0){
        return false;
    }
    if(n%d == 0){
        return true;
    }
    return false;
}

//Input integer n, returns true if n is prime and false otherwise
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i =2;i <n-1;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

//Input integer n, returns the next prime number greater than n
int nextPrime(int n){
    int temp = n;
    while(true){
        temp++;
        if(isPrime(temp)){
            return temp;
        }
    }
    return -1;
}

//input integers a and b, returns the number of primes found between a and b
int countPrimes(int a, int b){
    int count = 0;
    for(int i = a;i<=b;i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

//Input integer n, returns true if n is a twin prime and false otherwise
bool isTwinPrime(int n){
    if(isPrime(n) && (isPrime(n-2) || isPrime(n+2))){
        return true;
    }
    return false;
}

//Input integer n, returns the next twin prime greater than n
int nextTwinPrime(int n){
    int temp = n;
    while(true){
        temp++;
        if(isTwinPrime(temp)){
            return temp;
        }
    }
    return -1;
}

//Input integers a and b, returns the largest twin prime between a and b
int largestTwinPrime(int a, int b){
    for(int i = b; i > a;i--){
        if(isTwinPrime(i)){
            return i;
        }
    }
    return -1;
}
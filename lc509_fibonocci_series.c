int fib(int N){
 
    if (!N) {
        return N;
    } else if ((N == 1) || (N == 2)){
        return 1;
    } else {
        return fib(N - 2) + fib(N - 1);
    }
}

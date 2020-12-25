// DP 를 사용하지 않고 구현한 피보나치 수열
int Fibonacci(int n) {
	if (n == 0)
		return 0;

	if (n == 1 || n == 2)
		return 1;

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// DP 를 사용해서 구현한 피보나치 수열
int cache[100];   // cache 배열의 모든 값은 -1 로 초기화 된 상태라고 가정한다.
int Fibonacci_dp(int n) {
	if (cache[n] != -1)  
		return cache[n];

	if (n == 0)
		return cache[n] = 0;

	if (n == 1 || n == 2)
		return cache[n] = 1;

	return cache[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
}

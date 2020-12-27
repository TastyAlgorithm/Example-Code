int Fibonacci(int n) {
	// 기저 사례 처리 1
	if (n == 0)
		return 0;
	// 기저 사례 처리 2
	if (n == 1)
		return 1;

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

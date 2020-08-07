
unsigned long int fibonaciSum(int N){
    unsigned long int num1 = 0;
    unsigned long int num2 = 1;
    unsigned long int next(0);
    
    unsigned long int fibsum(num1+num2);
    
    for (int n(2);n<=N;n++){
        next = num1%1000000007+num2%1000000007;
        num1 = num2;
        num2 = next;
        fibsum+=next;
    }
    return fibsum%1000000007;
    
}

int main() {
	int tc;
	int N;
	cin>>tc;
	for (int t(0);t<tc; t++){
	    cin>>N;
	    cout<<fibonaciSum(N)<<endl;
	}
	return 0;
}

using namespace std;

signed int f(int N, vector<signed int> &memo){
    if(memo.at(N-1)==-1){
        signed int n = (f(N-1,memo) + f(N-2,memo))%1000000007;
        memo.at(N-1) = n;
    }
    return memo.at(N-1);
    
}
int main() {
	//code
	int tc(0);
	cin>>tc;
	for(int i(0);i<tc;i++){
	    int N;
	    cin>>N;
	    std::vector<signed int> memo(1000,-1);
	    memo.at(0)=1%1000000007;
	    memo.at(1)=1%1000000007;
	    signed int fn = f(N,memo);
	    cout<<fn<<endl;
	}
	return 0;
}
template <typename var> void ThrowGreaterNumber(var a, var b){
	a>b?throw a:throw b;
}

void TryCatch(int a, int b){
	try{
		ThrowGreaterNumber(a,b);
	}catch( int Exception){
		cout<<"Exception"<<endl;
		cout<<Exception<<endl;
	}
}
void TryCatch(){
	TryCatch(3,2);
}

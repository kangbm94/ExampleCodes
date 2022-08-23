#include "../ROOTSharedLibs/CMatrix.hh"
template <typename var>var Max(var a, var b){
	return (a>b?a:b);
}
void Template(){
	int SmallI = 2,BigI = 3;
	double SmallD = 2.5, BigD= 3.5;
	cout<<Max(SmallI,BigI)<<endl;
	cout<<Max(SmallD,BigD)<<endl;
}

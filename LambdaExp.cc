
class LC{
	public:
		LC(double a_){
			a=a_;
		}
		string oneStr = "hello";
		function<double(double*)> filePath = [this](double* b)
  {
		//	string tt = to_string(b[1]);
  //    return oneStr.append(tt);
//      return oneStr;
			return a+b[1]*b[0];
  };
    
		double a;
/*
		double kk = [&](double b){
			return a*b;
		}(3.);
*/
};
double ldtest(int npar,function<double(double*)>f,double* pars){
	return f(pars);
}
void LambdaExp(){
	auto cl = LC(2);
	double b[2]={1,7};
	auto rt = ldtest(3,cl.filePath,b);
	auto rt2 = ldtest(3,cl.filePath,b);
//	auto rt = cl.filePath;
	cout<<rt<<endl;
	cout<<rt2<<endl;
	double a[2]={4,2};
	auto k = [](double* a){return a[0]+a[1];};
	cout<<k(a)<<endl;
}

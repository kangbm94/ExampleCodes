
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
			return a+b[1];
  };
    
		double a;
/*
		double kk = [&](double b){
			return a*b;
		}(3.);
*/
};
double ldtest(){
	return 1;
}
void LambdaExp(){
	auto cl = LC(5);
	double b[2]={1,3};
	auto rt = cl.filePath(b);
//	auto rt = cl.filePath;
	cout<<rt<<endl;
	double a[2]={4,2};
	auto k = [](double* a){return a[0]+a[1];};
	cout<<k(a)<<endl;
}

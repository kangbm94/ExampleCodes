#include "DaughterClass.hh"
//#include "MotherClass.hh"
void ClassInheratance(){
	Mother M;
	M.EchoDummy();

	cout<<"Daughter"<<endl;	
	Daughter D;
	D.EchoDummy();
	D.Method();
	D.EchoDummy();
	
}

#include "MotherClass.hh"
class Daughter:public Mother{
	public:
		Daughter():Mother(){}
		void Method();
};
void Daughter::Method(){
	dummy=3;
}

class Mother{
	protected:
		int dummy = 0;
	public:
		Mother(){}
		void SayHello(){cout<<"Hello"<<endl;}
		virtual void Method(){};
		void EchoDummy(){cout<<dummy<<endl;}
};

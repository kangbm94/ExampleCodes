void test(){
	for(int i=0;i<10;++i){
		if(i>5){
		cout<<i*i<<endl;
			if(i>7){
				continue;
			}
		}
		cout<<i<<endl;
	}
}

void FileIO(){
	ifstream file("text.txt");
	if(!file.is_open()){
		cout<<"not open"<<endl;
	}
	TString line;
	double pd[10];
	int pi[10];
	int pb[10];
	while(file.good()&&line.ReadLine(file)){
		cout<<"line"<<endl;
		line.ReplaceAll(",","");
		line.ReplaceAll("\"","");
    std::istringstream iss(line.Data());
    std::istream_iterator<std::string> begin(iss);
    std::istream_iterator<std::string> end;
    std::vector<TString> v(begin, end);
    int nl = v.size();
		cout<<nl<<endl;
		cout<<"#####"<<endl;
		for(int i=0;i<nl;++i){
			cout<<v[i]<<endl;
			cout<<v[i].Atoi()<<endl;
		}
	}
}

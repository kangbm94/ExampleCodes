void TreeBranch(){
	TFile* file = new TFile("dum.root","RECREATE");
	TTree* tree = new TTree("tree","tree");
	double data[2];
	double datum;
	tree->Branch("data",data,"data[2]/D");
	tree->Branch("datum",&datum,"dataum/D");
	for(int i=0;i<100;++i){
		data[0]=i;
		data[1]=-i;
		datum=i*i;
		tree->Fill();
	}
	file->Write();
}

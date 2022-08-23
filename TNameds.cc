void TNameds(){
	TFile* file = new TFile("test.root","recreate");
	TString str = "title";
	auto n = new TNamed("name",str.Data());
	TString str2 = "title2";
	n->Write();
	auto n2 = new TNamed("name2",str2.Data());
	n2->Write();
	file->Write();
}

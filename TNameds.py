import ROOT
file = ROOT.TFile.Open("hello.root","recreate")
name="name"
title="title"
tag1 = ROOT.TNamed(name,title);
tag1.Write()
file.Write()


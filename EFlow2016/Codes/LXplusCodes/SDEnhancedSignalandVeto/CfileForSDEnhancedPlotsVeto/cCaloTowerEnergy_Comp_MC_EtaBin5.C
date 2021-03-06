{
//=========Macro generated from canvas: cCaloTowerEnergy_Comp_MC_EtaBin5/cCaloTowerEnergy_Comp_MC_EtaBin5
//=========  (Wed Aug 17 13:00:49 2016) by ROOT version5.34/30
   TCanvas *cCaloTowerEnergy_Comp_MC_EtaBin5 = new TCanvas("cCaloTowerEnergy_Comp_MC_EtaBin5", "cCaloTowerEnergy_Comp_MC_EtaBin5",50,72,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cCaloTowerEnergy_Comp_MC_EtaBin5->Range(-85.71429,-5.9,628.5714,1.6);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetFillColor(0);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetBorderMode(0);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetBorderSize(2);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetLogy();
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetTickx(1);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetTicky(1);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetLeftMargin(0.12);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetRightMargin(0.04);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetTopMargin(0.08);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetBottomMargin(0.12);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetFrameFillStyle(0);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetFrameBorderMode(0);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetFrameFillStyle(0);
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetFrameBorderMode(0);
   
   TH1F *EnergyDist_Data_EtaBin4 = new TH1F("EnergyDist_Data_EtaBin4","EnergyDist_Data_EtaBin4",600,0,600);
   EnergyDist_Data_EtaBin4->SetBinContent(5,0.01559124);
   EnergyDist_Data_EtaBin4->SetBinContent(9,0.0007285626);
   EnergyDist_Data_EtaBin4->SetBinContent(10,0.000291425);
   EnergyDist_Data_EtaBin4->SetBinError(5,0.001507262);
   EnergyDist_Data_EtaBin4->SetBinError(9,0.0003258231);
   EnergyDist_Data_EtaBin4->SetBinError(10,0.0002060686);
   EnergyDist_Data_EtaBin4->SetMinimum(1e-05);
   EnergyDist_Data_EtaBin4->SetMaximum(10);
   EnergyDist_Data_EtaBin4->SetEntries(114);
   EnergyDist_Data_EtaBin4->SetStats(0);
   EnergyDist_Data_EtaBin4->SetLineStyle(0);
   EnergyDist_Data_EtaBin4->SetMarkerStyle(20);
   EnergyDist_Data_EtaBin4->SetMarkerSize(0.5);
   EnergyDist_Data_EtaBin4->GetXaxis()->SetTitle("Energy");
   EnergyDist_Data_EtaBin4->GetXaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin4->GetXaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin4->GetXaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin4->GetXaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin4->GetXaxis()->SetTitleOffset(0.9);
   EnergyDist_Data_EtaBin4->GetXaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin4->GetYaxis()->SetTitle("1/N");
   EnergyDist_Data_EtaBin4->GetYaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin4->GetYaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin4->GetYaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin4->GetYaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin4->GetYaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin4->GetZaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin4->GetZaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin4->GetZaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin4->GetZaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin4->GetZaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin4->Draw("AXIS");
   TLatex *   tex = new TLatex(0.96,0.936,"0.06 nb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.892,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.82,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *EnergyDist_Data_EtaBin4__2 = new TH1F("EnergyDist_Data_EtaBin4__2","EnergyDist_Data_EtaBin4",600,0,600);
   EnergyDist_Data_EtaBin4__2->SetBinContent(5,0.01559124);
   EnergyDist_Data_EtaBin4__2->SetBinContent(9,0.0007285626);
   EnergyDist_Data_EtaBin4__2->SetBinContent(10,0.000291425);
   EnergyDist_Data_EtaBin4__2->SetBinError(5,0.001507262);
   EnergyDist_Data_EtaBin4__2->SetBinError(9,0.0003258231);
   EnergyDist_Data_EtaBin4__2->SetBinError(10,0.0002060686);
   EnergyDist_Data_EtaBin4__2->SetMinimum(1e-05);
   EnergyDist_Data_EtaBin4__2->SetMaximum(10);
   EnergyDist_Data_EtaBin4__2->SetEntries(114);
   EnergyDist_Data_EtaBin4__2->SetDirectory(0);
   EnergyDist_Data_EtaBin4__2->SetStats(0);
   EnergyDist_Data_EtaBin4__2->SetLineStyle(0);
   EnergyDist_Data_EtaBin4__2->SetMarkerStyle(20);
   EnergyDist_Data_EtaBin4__2->SetMarkerSize(0.5);
   EnergyDist_Data_EtaBin4__2->GetXaxis()->SetTitle("Energy");
   EnergyDist_Data_EtaBin4__2->GetXaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin4__2->GetXaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin4__2->GetXaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin4__2->GetXaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin4__2->GetXaxis()->SetTitleOffset(0.9);
   EnergyDist_Data_EtaBin4__2->GetXaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin4__2->GetYaxis()->SetTitle("1/N");
   EnergyDist_Data_EtaBin4__2->GetYaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin4__2->GetYaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin4__2->GetYaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin4__2->GetYaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin4__2->GetYaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin4__2->GetZaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin4__2->GetZaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin4__2->GetZaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin4__2->GetZaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin4__2->GetZaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin4__2->Draw("sameaxis");
   
   TH1F *EnergyDist_Data_EtaBin5 = new TH1F("EnergyDist_Data_EtaBin5","EnergyDist_Data_EtaBin5",600,0,600);
   EnergyDist_Data_EtaBin5->SetBinContent(5,0.01559124);
   EnergyDist_Data_EtaBin5->SetBinContent(9,0.000291425);
   EnergyDist_Data_EtaBin5->SetBinContent(10,0.0005828501);
   EnergyDist_Data_EtaBin5->SetBinError(5,0.001507262);
   EnergyDist_Data_EtaBin5->SetBinError(9,0.0002060686);
   EnergyDist_Data_EtaBin5->SetBinError(10,0.000291425);
   EnergyDist_Data_EtaBin5->SetMinimum(1e-05);
   EnergyDist_Data_EtaBin5->SetMaximum(10);
   EnergyDist_Data_EtaBin5->SetEntries(113);
   EnergyDist_Data_EtaBin5->SetStats(0);
   EnergyDist_Data_EtaBin5->SetLineStyle(0);
   EnergyDist_Data_EtaBin5->SetMarkerStyle(20);
   EnergyDist_Data_EtaBin5->SetMarkerSize(0.5);
   EnergyDist_Data_EtaBin5->GetXaxis()->SetTitle("Energy");
   EnergyDist_Data_EtaBin5->GetXaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin5->GetXaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin5->GetXaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin5->GetXaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin5->GetXaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin5->GetYaxis()->SetTitle("1/N");
   EnergyDist_Data_EtaBin5->GetYaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin5->GetYaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin5->GetYaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin5->GetYaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin5->GetYaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin5->GetZaxis()->SetLabelFont(42);
   EnergyDist_Data_EtaBin5->GetZaxis()->SetLabelOffset(0.007);
   EnergyDist_Data_EtaBin5->GetZaxis()->SetLabelSize(0.05);
   EnergyDist_Data_EtaBin5->GetZaxis()->SetTitleSize(0.05);
   EnergyDist_Data_EtaBin5->GetZaxis()->SetTitleFont(42);
   EnergyDist_Data_EtaBin5->Draw("same");
   
   TH1F *EnergyDist_pythia8_Monash_EtaBin5 = new TH1F("EnergyDist_pythia8_Monash_EtaBin5","EnergyDist_pythia8_Monash_EtaBin5",600,0,600);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinContent(5,0.02220808);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinContent(9,0.001134351);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinContent(10,0.0007751401);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinContent(13,1.890586e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinContent(14,6.932147e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinContent(15,1.26039e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinContent(18,6.301952e-06);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinError(5,0.0003741046);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinError(9,8.454955e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinError(10,6.989203e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinError(13,1.09153e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinError(14,2.090121e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinError(15,8.912306e-06);
   EnergyDist_pythia8_Monash_EtaBin5->SetBinError(18,6.301952e-06);
   EnergyDist_pythia8_Monash_EtaBin5->SetMinimum(1e-05);
   EnergyDist_pythia8_Monash_EtaBin5->SetMaximum(10);
   EnergyDist_pythia8_Monash_EtaBin5->SetEntries(3844);
   EnergyDist_pythia8_Monash_EtaBin5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   EnergyDist_pythia8_Monash_EtaBin5->SetLineColor(ci);
   EnergyDist_pythia8_Monash_EtaBin5->SetLineStyle(0);

   ci = TColor::GetColor("#0000ff");
   EnergyDist_pythia8_Monash_EtaBin5->SetMarkerColor(ci);
   EnergyDist_pythia8_Monash_EtaBin5->SetMarkerStyle(24);
   EnergyDist_pythia8_Monash_EtaBin5->SetMarkerSize(0.5);
   EnergyDist_pythia8_Monash_EtaBin5->GetXaxis()->SetTitle("Energy");
   EnergyDist_pythia8_Monash_EtaBin5->GetXaxis()->SetLabelFont(42);
   EnergyDist_pythia8_Monash_EtaBin5->GetXaxis()->SetLabelOffset(0.007);
   EnergyDist_pythia8_Monash_EtaBin5->GetXaxis()->SetLabelSize(0.05);
   EnergyDist_pythia8_Monash_EtaBin5->GetXaxis()->SetTitleSize(0.05);
   EnergyDist_pythia8_Monash_EtaBin5->GetXaxis()->SetTitleFont(42);
   EnergyDist_pythia8_Monash_EtaBin5->GetYaxis()->SetTitle("1/N");
   EnergyDist_pythia8_Monash_EtaBin5->GetYaxis()->SetLabelFont(42);
   EnergyDist_pythia8_Monash_EtaBin5->GetYaxis()->SetLabelOffset(0.007);
   EnergyDist_pythia8_Monash_EtaBin5->GetYaxis()->SetLabelSize(0.05);
   EnergyDist_pythia8_Monash_EtaBin5->GetYaxis()->SetTitleSize(0.05);
   EnergyDist_pythia8_Monash_EtaBin5->GetYaxis()->SetTitleFont(42);
   EnergyDist_pythia8_Monash_EtaBin5->GetZaxis()->SetLabelFont(42);
   EnergyDist_pythia8_Monash_EtaBin5->GetZaxis()->SetLabelOffset(0.007);
   EnergyDist_pythia8_Monash_EtaBin5->GetZaxis()->SetLabelSize(0.05);
   EnergyDist_pythia8_Monash_EtaBin5->GetZaxis()->SetTitleSize(0.05);
   EnergyDist_pythia8_Monash_EtaBin5->GetZaxis()->SetTitleFont(42);
   EnergyDist_pythia8_Monash_EtaBin5->Draw("same");
   
   TH1F *EnergyDist_pythia8_TuneMBR_EtaBin5 = new TH1F("EnergyDist_pythia8_TuneMBR_EtaBin5","EnergyDist_pythia8_TuneMBR_EtaBin5",600,0,600);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(5,0.0303339);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(9,0.001055927);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(10,0.0009066038);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(13,2.133185e-05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(14,0.0001013263);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(15,5.332964e-06);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(18,5.332964e-06);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinContent(19,1.066593e-05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(5,0.0004022059);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(9,7.504145e-05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(10,6.953334e-05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(13,1.066593e-05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(14,2.324585e-05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(15,5.332964e-06);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(18,5.332964e-06);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetBinError(19,7.541949e-06);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetMinimum(1e-05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetMaximum(10);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetEntries(6083);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetLineColor(ci);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetLineStyle(0);

   ci = TColor::GetColor("#ff0000");
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetMarkerColor(ci);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetMarkerStyle(25);
   EnergyDist_pythia8_TuneMBR_EtaBin5->SetMarkerSize(0.5);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetXaxis()->SetTitle("Energy");
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetXaxis()->SetLabelFont(42);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetXaxis()->SetLabelOffset(0.007);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetXaxis()->SetLabelSize(0.05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetXaxis()->SetTitleSize(0.05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetXaxis()->SetTitleFont(42);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetYaxis()->SetTitle("1/N");
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetYaxis()->SetLabelFont(42);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetYaxis()->SetLabelOffset(0.007);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetYaxis()->SetLabelSize(0.05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetYaxis()->SetTitleSize(0.05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetYaxis()->SetTitleFont(42);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetZaxis()->SetLabelFont(42);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetZaxis()->SetLabelOffset(0.007);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetZaxis()->SetLabelSize(0.05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetZaxis()->SetTitleSize(0.05);
   EnergyDist_pythia8_TuneMBR_EtaBin5->GetZaxis()->SetTitleFont(42);
   EnergyDist_pythia8_TuneMBR_EtaBin5->Draw("same");
   
   TH1F *EnergyDist_epos_EtaBin5 = new TH1F("EnergyDist_epos_EtaBin5","EnergyDist_epos_EtaBin5",600,0,600);
   EnergyDist_epos_EtaBin5->SetBinContent(5,0.02979355);
   EnergyDist_epos_EtaBin5->SetBinContent(9,0.001098972);
   EnergyDist_epos_EtaBin5->SetBinContent(10,0.001013338);
   EnergyDist_epos_EtaBin5->SetBinContent(13,6.422562e-05);
   EnergyDist_epos_EtaBin5->SetBinContent(14,5.708944e-05);
   EnergyDist_epos_EtaBin5->SetBinContent(15,7.13618e-06);
   EnergyDist_epos_EtaBin5->SetBinError(5,0.0004610988);
   EnergyDist_epos_EtaBin5->SetBinError(9,8.855766e-05);
   EnergyDist_epos_EtaBin5->SetBinError(10,8.50374e-05);
   EnergyDist_epos_EtaBin5->SetBinError(13,2.140854e-05);
   EnergyDist_epos_EtaBin5->SetBinError(14,2.018416e-05);
   EnergyDist_epos_EtaBin5->SetBinError(15,7.13618e-06);
   EnergyDist_epos_EtaBin5->SetMinimum(1e-05);
   EnergyDist_epos_EtaBin5->SetMaximum(10);
   EnergyDist_epos_EtaBin5->SetEntries(4489);
   EnergyDist_epos_EtaBin5->SetStats(0);

   ci = TColor::GetColor("#ff00ff");
   EnergyDist_epos_EtaBin5->SetLineColor(ci);
   EnergyDist_epos_EtaBin5->SetLineStyle(0);

   ci = TColor::GetColor("#ff00ff");
   EnergyDist_epos_EtaBin5->SetMarkerColor(ci);
   EnergyDist_epos_EtaBin5->SetMarkerStyle(27);
   EnergyDist_epos_EtaBin5->SetMarkerSize(0.5);
   EnergyDist_epos_EtaBin5->GetXaxis()->SetTitle("Energy");
   EnergyDist_epos_EtaBin5->GetXaxis()->SetLabelFont(42);
   EnergyDist_epos_EtaBin5->GetXaxis()->SetLabelOffset(0.007);
   EnergyDist_epos_EtaBin5->GetXaxis()->SetLabelSize(0.05);
   EnergyDist_epos_EtaBin5->GetXaxis()->SetTitleSize(0.05);
   EnergyDist_epos_EtaBin5->GetXaxis()->SetTitleFont(42);
   EnergyDist_epos_EtaBin5->GetYaxis()->SetTitle("1/N");
   EnergyDist_epos_EtaBin5->GetYaxis()->SetLabelFont(42);
   EnergyDist_epos_EtaBin5->GetYaxis()->SetLabelOffset(0.007);
   EnergyDist_epos_EtaBin5->GetYaxis()->SetLabelSize(0.05);
   EnergyDist_epos_EtaBin5->GetYaxis()->SetTitleSize(0.05);
   EnergyDist_epos_EtaBin5->GetYaxis()->SetTitleFont(42);
   EnergyDist_epos_EtaBin5->GetZaxis()->SetLabelFont(42);
   EnergyDist_epos_EtaBin5->GetZaxis()->SetLabelOffset(0.007);
   EnergyDist_epos_EtaBin5->GetZaxis()->SetLabelSize(0.05);
   EnergyDist_epos_EtaBin5->GetZaxis()->SetTitleSize(0.05);
   EnergyDist_epos_EtaBin5->GetZaxis()->SetTitleFont(42);
   EnergyDist_epos_EtaBin5->Draw("same");
   
   TH1F *EnergyDist_qgsjetII_EtaBin5 = new TH1F("EnergyDist_qgsjetII_EtaBin5","EnergyDist_qgsjetII_EtaBin5",600,0,600);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(5,0.03365811);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(9,0.001234806);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(10,0.0009839861);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(13,4.823461e-05);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(14,0.00012541);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(15,9.646923e-06);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(18,9.646923e-06);
   EnergyDist_qgsjetII_EtaBin5->SetBinContent(23,9.646923e-06);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(5,0.0005698221);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(9,0.0001091425);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(10,9.742914e-05);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(13,2.157117e-05);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(14,3.478247e-05);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(15,9.646923e-06);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(18,9.646923e-06);
   EnergyDist_qgsjetII_EtaBin5->SetBinError(23,9.646923e-06);
   EnergyDist_qgsjetII_EtaBin5->SetMinimum(1e-05);
   EnergyDist_qgsjetII_EtaBin5->SetMaximum(10);
   EnergyDist_qgsjetII_EtaBin5->SetEntries(3740);
   EnergyDist_qgsjetII_EtaBin5->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   EnergyDist_qgsjetII_EtaBin5->SetLineColor(ci);
   EnergyDist_qgsjetII_EtaBin5->SetLineStyle(0);

   ci = TColor::GetColor("#00ff00");
   EnergyDist_qgsjetII_EtaBin5->SetMarkerColor(ci);
   EnergyDist_qgsjetII_EtaBin5->SetMarkerStyle(28);
   EnergyDist_qgsjetII_EtaBin5->SetMarkerSize(0.5);
   EnergyDist_qgsjetII_EtaBin5->GetXaxis()->SetTitle("Energy");
   EnergyDist_qgsjetII_EtaBin5->GetXaxis()->SetLabelFont(42);
   EnergyDist_qgsjetII_EtaBin5->GetXaxis()->SetLabelOffset(0.007);
   EnergyDist_qgsjetII_EtaBin5->GetXaxis()->SetLabelSize(0.05);
   EnergyDist_qgsjetII_EtaBin5->GetXaxis()->SetTitleSize(0.05);
   EnergyDist_qgsjetII_EtaBin5->GetXaxis()->SetTitleFont(42);
   EnergyDist_qgsjetII_EtaBin5->GetYaxis()->SetTitle("1/N");
   EnergyDist_qgsjetII_EtaBin5->GetYaxis()->SetLabelFont(42);
   EnergyDist_qgsjetII_EtaBin5->GetYaxis()->SetLabelOffset(0.007);
   EnergyDist_qgsjetII_EtaBin5->GetYaxis()->SetLabelSize(0.05);
   EnergyDist_qgsjetII_EtaBin5->GetYaxis()->SetTitleSize(0.05);
   EnergyDist_qgsjetII_EtaBin5->GetYaxis()->SetTitleFont(42);
   EnergyDist_qgsjetII_EtaBin5->GetZaxis()->SetLabelFont(42);
   EnergyDist_qgsjetII_EtaBin5->GetZaxis()->SetLabelOffset(0.007);
   EnergyDist_qgsjetII_EtaBin5->GetZaxis()->SetLabelSize(0.05);
   EnergyDist_qgsjetII_EtaBin5->GetZaxis()->SetTitleSize(0.05);
   EnergyDist_qgsjetII_EtaBin5->GetZaxis()->SetTitleFont(42);
   EnergyDist_qgsjetII_EtaBin5->Draw("same");
      tex = new TLatex(0.7,0.86,"3.503<|#eta|<3.853");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.68,0.6195462,1.12,0.8935428,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("EnergyDist_Data_EtaBin1","DATA","PL");
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("EnergyDist_pythia8_Monash_EtaBin1","Pythia8 Monash","PL");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("EnergyDist_pythia8_TuneMBR_EtaBin1","Pythia8 MBR","PL");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("EnergyDist_epos_EtaBin1","EPOS-LHC","PL");

   ci = TColor::GetColor("#ff00ff");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff00ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("EnergyDist_qgsjetII_EtaBin1","QGSJET II","PL");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(0.5);
   entry->SetTextFont(62);
   leg->Draw();
      tex = new TLatex(0.75,0.15,"B = 0 T");
tex->SetNDC();
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
   cCaloTowerEnergy_Comp_MC_EtaBin5->Modified();
   cCaloTowerEnergy_Comp_MC_EtaBin5->cd();
   cCaloTowerEnergy_Comp_MC_EtaBin5->SetSelected(cCaloTowerEnergy_Comp_MC_EtaBin5);
}

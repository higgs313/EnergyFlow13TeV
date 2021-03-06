#!/bin/bash
eos='/afs/cern.ch/project/eos/installation/0.3.15/bin/eos.select'
prefix='root://eoscms/'
location='/eos/cms/store/user/ilknur/7TeVMC/CMSSW_4_2_4/TuneZ2star_pythia6/QCD_Pt_10to25_fwdJet_TuneZ2star_HFshowerLibrary_7TeV_pythia6'

for i in $($eos ls $location);
do
  if [[ "$i" == *root* ]]
  then
    xrdcp $prefix$location/$i .
  fi  
done 

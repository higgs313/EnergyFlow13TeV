#!/bin/csh
##############################################################
# In order to send into the batch system the following files 
# bsub -o Output.txt -q 8nh bsub_script.csh
# to check the status of files use the command: bjobs
#############################################################

cd /afs/cern.ch/work/h/higgs313/private/CFFFrameWork/2207/CMSSW_7_5_0_pre1_ROOT5/src/EnergyFlow13TeV/cpp_macro/ZeroTeslaResults/HFANDSelection/Data
cmsenv
root -l EnergyFlow_DetLevel_DataZeroBias1AllBx_HFANDSelection_TreeProducerRun247920.C++



#!/bin/csh
##############################################################
# In order to send into the batch system the following files 
# bsub -o Output.txt -q 8nh bsub_script.csh
# to check the status of files use the command: bjobs
#############################################################

cd /afs/cern.ch/work/z/zdemirog/CFF_04June/CMSSW_7_5_0_pre1_ROOT5/src/EnergyFlow13TeV/cpp_macro/HFAND_EventSelectionwithJINSTbinning/Run254989_3p8Tesla
cmsenv
root -l EnergyFlow_DetLevel_HFAND_ZeroBias1_r254989_TreeProducer_with3p6GeV.C++


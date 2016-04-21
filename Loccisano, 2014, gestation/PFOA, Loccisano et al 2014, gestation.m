%This .m file runs the Loccisano et al, 2014 gestational model for PFOA and plots maternal and fetal serum concentrations. 

output @clear
prepare @clear @all
WESTIG=0;WEDITG=0;CJVITG=0;

%Exposure Parameters
!! s Drinkconc = 0.07
!! s DrinkRate = 14 %mean consumer only ingestion rate for pregnant women, EFH 2011
%!! s PDose = 0.0

!! st/nc

plot(_t, _ca)
plot(_t, _ca_f)

!! display  APLAS0, AG0, AL0, AFAT0, AK0, AFIL0, ADELAY0, AMAM0, ASK0, AURINE0, AR0 
!! display  APLAS, AG, AL, AFAT, AK, AFIL, ADELAY, AMAM, ASK, AURINE, AR 
%This .m file runs the Loccisano et al, 2014 gestational model for PFOA and plots maternal and fetal serum concentrations. 

output @clear
prepare @clear @all
WESTIG=0;WEDITG=0;CJVITG=0;

%Exposure Parameters
!! s Drinkconc = 0.07
!! s DrinkRate = 26 %mean consumer only ingestion rate for lactating women, EFH 2011
%!! s PDose = 0.0

!! st/nc

plot(_t, _ca)
plot(_t, _cmilk)
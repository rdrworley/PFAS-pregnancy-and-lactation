%This .m file runs the Loccisano et al, 2014 gestational model for PFOA and plots maternal and fetal serum concentrations. 

output @clear
prepare @clear @all
WESTIG=0;WEDITG=0;CJVITG=0;

%Exposure Parameters
!! s Dose_M = 0.001	%ug/kg/day

!! st/nc

plot(_t, _c_mother)
plot(_t, _c_child)
plot(_t, c_milk)
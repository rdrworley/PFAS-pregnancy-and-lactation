output @clear
prepare @clear @all
WESTIG=0;WEDITG=0;CJVITG=0;

%Exposure Parameters
!! s Dose_M = 0.002	%ug/kg/day
!! s Total_bf = 2.5

!! st/nc

plot(_t, _c_mother)	%ug/L
plot(_t, _c_child)	%ug/L
plot(_t, _c_milk)	% ug/L
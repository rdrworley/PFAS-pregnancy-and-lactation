output @clear
prepare @clear @all
WESTIG=0;WEDITG=0;CJVITG=0;

%Exposure Parameters
!! s Dose_M = 0.02	%ug/kg/day

!! st/nc

plot(_t, _c_mother)	%ug/L
plot(_t, _c_child)	%ug/L
plot(_t, _c_milk)	% ug/L
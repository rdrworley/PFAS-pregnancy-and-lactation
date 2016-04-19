%----------------------------------------------------------------------------------------%
%  Monte Carlo script for the LactPFAS_Verner_2015.csl model code                        %
%  Coded by Marc-Andre Verner                                                            %
%----------------------------------------------------------------------------------------%

output @clear
prepare @clear @all 

%----------------------------------------------------------------------------------------%
% Turning off verbose diagnostic output
WESITG=0;
WXDITG=0;
WEDITG=0;
CJVITG=0;
WNDITG=0;

%----------------------------------------------------------------------------------------
% Simulation parameters
CINT   = 100  ;  
MINT   = 0.00001    ;
MAXT   = 1000000  ; 
IALG   = 15     ;  
NUMITS = 1000 ; 

seedrnd(123456789) ;

c_levels    = [];
ratio_level = [];
ratio_dose  = [];
c_milk = [];
age_c = [];
age_m = [];

for x = 1 : NUMITS; 

%-----------------------------------------------------------------------------------
% Show progress in command window	
disp(sprintf("Iteration #%d of %d", x, NUMITS));
disp("----------------------------");

%-----------------------------------------------------------------------------------
% Parameter distributions
AGE_DELIVERY          = normrnd(25,6,15,54);
WEIGHT_PREPREGNANCY_M = normrnd(75,18,50,114);
SEX                   = bernrnd(0.5);
TOTAL_BF              = 2.5;
MULTIPLIER_VMILK      = normrnd(1.0,0.17,0.6,1.3);
MULTIPLIER_WEIGHT_C   = normrnd(1.0,0.12,0.7,1.3);
PFOS_PMILK            = lognrnd(-4.4,0.59,0.0001,0.5);
PFOA_PMILK            = lognrnd(-3.0,0.56,0.0001,0.5);
PFHXS_PMILK           = lognrnd(-4.4,0.41,0.0001,0.5);
PFOS_HL               = lognrnd(1.50,0.62,0.1,50.0);
PFOA_HL               = lognrnd(1.24,0.42,0.1,50.0);
PFHXS_HL              = lognrnd(1.99,0.56,0.1,50.0);
PFOS_P_CM             = normrnd(0.45,0.13,0.01,1.0);
PFOA_P_CM             = normrnd(0.78,0.15,0.01,1.0);
PFHXS_P_CM            = normrnd(0.56,0.11,0.01,1.0);
PFOS_VD_BW            = normrnd(0.230,0.035,0.01,1.0);
PFOA_VD_BW            = normrnd(0.170,0.026,0.01,1.0);
PFHXS_VD_BW           = normrnd(0.213,0.032,0.01,1.0);
BIRTHWEIGHT           = (1-SEX)*3.4+SEX*3.5
AGE_WEIGHT_C          = 2.0
WEIGHT_C              = (1-SEX)*12.1+SEX*12.7


START_COLLECT  = AGE_DELIVERY*365*24+1;
END_COLLECT    = (AGE_DELIVERY+3)*365*24+50;
TIMESCOLLECT   = [START_COLLECT: 120.0: END_COLLECT] ;
data @clear
data("TIMESCOLLECT", ["T"], TIMESCOLLECT');

%-----------------------------------------------------------------------------------
% Simulations 
COMPOUND = 2
DOSE_M = 0.002

start @nocallback

idxs=[];
for i=1:max(size(TIMESCOLLECT))
idx1 = find(abs(_t-TIMESCOLLECT(i))<1e-6);
idxs = [idxs; idx1];
end

c_levels    = [c_levels _c_child(idxs)];
ratio_level = [ratio_level _level_ratio(idxs)];
ratio_dose  = [ratio_dose _dose_ratio(idxs)];
c_milk = [c_milk _c_milk(idxs)];
age_c = [age_c _age_c(idxs)];
age_m = [age_m _age_m(idxs)];

end

xlsWrite("C:\acslX\PFAS_pregnancy_and_lactation\Verner_2015_lactation_MC\MC_LactPFAS_PFOA_2016.xls","C_CHILD","A2:IV10001",c_levels');
xlsWrite("C:\acslX\PFAS_pregnancy_and_lactation\Verner_2015_lactation_MC\MC_LactPFAS_PFOA_2016.xls","RATIO_LEVEL","A2:IV10001",ratio_level');
xlsWrite("C:\acslX\PFAS_pregnancy_and_lactation\Verner_2015_lactation_MC\MC_LactPFAS_PFOA_2016.xls","RATIO_DOSE","A2:IV10001",ratio_dose');
xlsWrite("C:\acslX\PFAS_pregnancy_and_lactation\Verner_2015_lactation_MC\MC_LactPFAS_PFOA_2016.xls","C_MILK","A2:IV10001",c_milk');
xlsWrite("C:\acslX\PFAS_pregnancy_and_lactation\Verner_2015_lactation_MC\MC_LactPFAS_PFOA_2016.xls","AGE_C","A2:IV10001",age_c');
xlsWrite("C:\acslX\PFAS_pregnancy_and_lactation\Verner_2015_lactation_MC\MC_LactPFAS_PFOA_2016.xls","AGE_M","A2:IV10001",age_m');

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
#include "AcslSimRuntimeAPI.h"

void zzinitialize(unsigned long);
void zzsimulation(unsigned long);
void zzderivative(unsigned long, unsigned long);

typedef struct 
{
double t;
double a_mother;
double auc_c_mother;
double a_child;
double auc_c_child;
double z99992;
double z99990;
double z99988;
double z99986;
double z99991;
double z99989;
double z99987;
double z99985;
double age_delivery;
double weight_prepregnancy_m;
double birthweight;
double weight_c;
double age_weight_c;
double sex;
double total_bf;
double age_sample_m;
double compound;
double dose_m;
double age_conception;
double pfos;
double pfoa;
double pfhxs;
double pfos_vd_bw;
double pfoa_vd_bw;
double pfhxs_vd_bw;
double vd_bw;
double pfos_pmilk;
double pfoa_pmilk;
double pfhxs_pmilk;
double pmilk;
double pfos_p_cm;
double pfoa_p_cm;
double pfhxs_p_cm;
double p_cm;
double pfos_hl;
double pfoa_hl;
double pfhxs_hl;
double half_life;
double tstop;
double age_m;
double age_c;
double io_delivery;
double ga;
double io_conception;
double z99999;
double z99998;
double bw_m;
double adj_bw_c_pre;
double z99997;
double z99996;
double adj_bw_c_post;
double adj_bw;
double io_weight_c;
double z99995;
double z99994;
double z99993;
double bw_c;
double vd_m;
double vd_c;
double ktrans1;
double ktrans2;
double diff_m_c;
double c_mother;
double diff_c_m;
double c_child;
double volume_milk_1st_year;
double volume_milk_2nd_year;
double volume_milk;
double io_bf;
double io_end_total_bf;
double io_child_12m;
double io_child_30m;
double c_milk;
double transfer_bf;
double elimination_m;
double elimination_c;
double intake_m;
double intake_c;
double io_child_6m;
double mom_c_del;
double mom_c_samp;
double ra_mother;
double ra_child;
double dose_ratio;
double level_ratio;
double table_bw_females[20];
double table_bw_males[20];
double table_fetal_weight[14];
double cint;
long ialg;
long nstp;
double maxt;
double mint;
bool zzierr;
bool zzstopflag;
bool zzrnfl;
long zznist;
long zznblk;
bool zzfrfl;
bool zzjefl;
long zzndst;
long zzicon;
bool zzicfl;
long zznavr;
long zzinstidx;
bool zzstepstop;
long nciout;
long cioitg;
bool cjvitg;
double cssitg;
bool dpsitg;
bool ecsitg;
bool fdeitg;
long mxoitg;
bool nrwitg;
bool nxeitg;
double tjnitg;
bool tsmitg;
bool weditg;
bool wesitg;
bool wnditg;
bool wxditg;
bool cieitg;
long ubwitg;
long lbwitg;
long omfitg;
long cmd;
long dis;
long ndbug;
long plt;
long prn;
long malprn;
long rrr;
long save;
double zzticg;

} SimImpl;
SimImpl zzsim = 
{
0.0,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
30,
70,
3.4,
12.1,
2.0,
0,
0.5,
29.8,
2,
0.001,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
0.230,
0.170,
0.213,
5.5555E+33,
0.0138,
0.0577,
0.0140,
5.5555E+33,
0.454,
0.783,
0.556,
5.5555E+33,
5.4,
3.8,
8.5,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
5.5555E+33,
3.400000e+000, 7.200000e+000, 9.500000e+000, 1.210000e+001, 1.800000e+001, 3.300000e+001, 4.600000e+001, 5.400000e+001, 5.800000e+001, 5.800000e+001, 0.000000e+000, 5.000000e-001, 1.000000e+000, 2.000000e+000, 5.000000e+000, 1.000000e+001, 1.300000e+001, 1.600000e+001, 2.000000e+001, 1.000000e+002,
3.500000e+000, 7.800000e+000, 1.030000e+001, 1.270000e+001, 1.800000e+001, 3.200000e+001, 4.600000e+001, 6.100000e+001, 7.100000e+001, 7.100000e+001, 0.000000e+000, 5.000000e-001, 1.000000e+000, 2.000000e+000, 5.000000e+000, 1.000000e+001, 1.300000e+001, 1.600000e+001, 2.000000e+001, 1.000000e+002,
0.000000e+000, 0.000000e+000, 2.600000e-001, 6.900000e-001, 1.250000e+000, 2.020000e+000, 3.280000e+000, 0.000000e+000, 2.170000e-001, 3.530000e-001, 4.630000e-001, 5.510000e-001, 6.390000e-001, 7.680000e-001,
24,
2,
10,
1e+10,
1e-10,
false,
false,
false,
2,
1,
false,
false,
0,
0,
false,
0,
0,
false,
1,
55555555,
true,
5.5555E+33,
true,
false,
false,
6,
false,
false,
0.2,
false,
true,
true,
false,
false,
true,
-1,
-1,
222,
4,
6,
0,
6,
9,
10,
8,
3,
0.0,

};

void AcslSimMain()
{

	AcslSimSetSystemInfo(140,// numSymbols
	4, // numOdeStates
	0, // numDaeStates
	0, // numDelayStates
	80,// numAlgebraicVars
	1, // numDerivativeSections
	8, // numDiscreteSections
	zzinitialize,
	zzsimulation,
	zzderivative,
	0);



#ifndef TRUE
  #define TRUE true
#endif
#ifndef FALSE
  #define FALSE false
#endif

AcslSimSetVariableDescriptor(1,"t",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_VARIABLE,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(1,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(2,"a_mother",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_STATE,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(2,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(3,"auc_c_mother",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_STATE,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(3,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(4,"a_child",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_STATE,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(4,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(5,"auc_c_child",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_STATE,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(5,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(6,"z99992",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_DERIV,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(6,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(7,"z99990",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_DERIV,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(7,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(8,"z99988",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_DERIV,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(8,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(9,"z99986",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_DERIV,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(9,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(10,"z99991",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_INITCOND,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(10,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(11,"z99989",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_INITCOND,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(11,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(12,"z99987",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_INITCOND,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(12,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(13,"z99985",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_INITCOND,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(13,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(14,"age_delivery",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(14,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(15,"weight_prepregnancy_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(15,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(16,"birthweight",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(16,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(17,"weight_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(17,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(18,"age_weight_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(18,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(19,"sex",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(19,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(20,"total_bf",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(20,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(21,"age_sample_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(21,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(22,"compound",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(22,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(23,"dose_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(23,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(24,"age_conception",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(24,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(25,"pfos",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(25,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(26,"pfoa",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(26,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(27,"pfhxs",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(27,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(28,"pfos_vd_bw",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(28,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(29,"pfoa_vd_bw",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(29,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(30,"pfhxs_vd_bw",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(30,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(31,"vd_bw",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(31,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(32,"pfos_pmilk",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(32,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(33,"pfoa_pmilk",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(33,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(34,"pfhxs_pmilk",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(34,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(35,"pmilk",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(35,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(36,"pfos_p_cm",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(36,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(37,"pfoa_p_cm",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(37,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(38,"pfhxs_p_cm",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(38,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(39,"p_cm",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(39,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(40,"pfos_hl",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(40,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(41,"pfoa_hl",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(41,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(42,"pfhxs_hl",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(42,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(43,"half_life",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(43,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(44,"tstop",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(44,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(45,"age_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(45,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(46,"age_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(46,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(47,"io_delivery",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(47,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(48,"ga",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(48,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(49,"io_conception",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(49,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(50,"z99999",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(50,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(51,"z99998",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(51,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(52,"bw_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(52,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(53,"adj_bw_c_pre",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(53,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(54,"z99997",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(54,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(55,"z99996",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(55,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(56,"adj_bw_c_post",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(56,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(57,"adj_bw",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(57,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(58,"io_weight_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(58,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(59,"z99995",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(59,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(60,"z99994",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(60,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(61,"z99993",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(61,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(62,"bw_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(62,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(63,"vd_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(63,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(64,"vd_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(64,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(65,"ktrans1",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(65,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(66,"ktrans2",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(66,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(67,"diff_m_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(67,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(68,"c_mother",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(68,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(69,"diff_c_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(69,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(70,"c_child",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(70,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(71,"volume_milk_1st_year",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(71,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(72,"volume_milk_2nd_year",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(72,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(73,"volume_milk",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(73,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(74,"io_bf",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(74,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(75,"io_end_total_bf",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(75,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(76,"io_child_12m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(76,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(77,"io_child_30m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(77,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(78,"c_milk",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(78,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(79,"transfer_bf",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(79,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(80,"elimination_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(80,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(81,"elimination_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(81,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(82,"intake_m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(82,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(83,"intake_c",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(83,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(84,"io_child_6m",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(84,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(85,"mom_c_del",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(85,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(86,"mom_c_samp",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(86,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(87,"ra_mother",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(87,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(88,"ra_child",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(88,FALSE,FALSE,FALSE,TRUE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(89,"dose_ratio",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(89,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(90,"level_ratio",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(90,FALSE,FALSE,FALSE,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(91,"table_bw_females",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,20,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(91,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, TRUE, 0, 0);

AcslSimSetVariableDescriptor(92,"table_bw_males",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,20,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(92,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, TRUE, 0, 0);

AcslSimSetVariableDescriptor(93,"table_fetal_weight",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ALGEBRAIC,14,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(93,FALSE,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, TRUE, 0, 0);

AcslSimSetVariableDescriptor(94,"cint",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_CINTERVAL,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(94,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(95,"ialg",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ALGORITHM,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(95,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(96,"nstp",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_NSTEPS,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(96,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(97,"maxt",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_MAXTERVAL,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(97,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(98,"mint",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_MINTERVAL,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(98,TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(99,"zzierr",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ERRTAG,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(99,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(100,"zzstopflag",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(100,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(101,"zzrnfl",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(101,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(102,"zznist",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(102,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(103,"zznblk",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(103,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(104,"zzfrfl",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(104,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(105,"zzjefl",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(105,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(106,"zzndst",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(106,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(107,"zzicon",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(107,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(108,"zzicfl",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(108,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(109,"zznavr",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(109,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(110,"zzinstidx",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(110,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(111,"zzstepstop",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_SYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(111,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(112,"nciout",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(112,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(113,"cioitg",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(113,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(114,"cjvitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(114,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(115,"cssitg",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(115,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(116,"dpsitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(116,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(117,"ecsitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(117,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(118,"fdeitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(118,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(119,"mxoitg",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(119,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(120,"nrwitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(120,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(121,"nxeitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(121,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(122,"tjnitg",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(122,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(123,"tsmitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(123,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(124,"weditg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(124,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(125,"wesitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(125,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(126,"wnditg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(126,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(127,"wxditg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(127,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(128,"cieitg",ACSL_DATATYPE_BOOLEAN,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(128,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(129,"ubwitg",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(129,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(130,"lbwitg",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(130,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(131,"omfitg",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(131,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(132,"cmd",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(132,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(133,"dis",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(133,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(134,"ndbug",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(134,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(135,"plt",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(135,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(136,"prn",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(136,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(137,"malprn",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(137,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(138,"rrr",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(138,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(139,"save",ACSL_DATATYPE_LONG,ACSL_SYMBOLTYPE_ACSLSYSTEMVAR,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(139,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

AcslSimSetVariableDescriptor(140,"zzticg",ACSL_DATATYPE_DOUBLE,ACSL_SYMBOLTYPE_VARIABLE_INIT,0,0,0,0,0,0,-1,-1);
AcslSimSetVariableExtendedInfo(140,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE, FALSE, 0, 0);

}
double table_bw_females_table(double arg1)
{
   return zztable(zzsim.table_bw_females,1,10,0,0, arg1, 0, 0);
}
	double table_bw_males_table(double arg1)
{
   return zztable(zzsim.table_bw_males,1,10,0,0, arg1, 0, 0);
}
	double table_fetal_weight_table(double arg1)
{
   return zztable(zzsim.table_fetal_weight,1,7,0,0, arg1, 0, 0);
}
	
//******************************************************************************
void zzinitialize(unsigned long handle)
//******************************************************************************

{
AcslSimSetVariablePointer(handle,1,&zzsim.t);
AcslSimSetVariablePointer(handle,2,&zzsim.a_mother);
AcslSimSetVariablePointer(handle,3,&zzsim.auc_c_mother);
AcslSimSetVariablePointer(handle,4,&zzsim.a_child);
AcslSimSetVariablePointer(handle,5,&zzsim.auc_c_child);
AcslSimSetVariablePointer(handle,6,&zzsim.z99992);
AcslSimSetVariablePointer(handle,7,&zzsim.z99990);
AcslSimSetVariablePointer(handle,8,&zzsim.z99988);
AcslSimSetVariablePointer(handle,9,&zzsim.z99986);
AcslSimSetVariablePointer(handle,10,&zzsim.z99991);
AcslSimSetVariablePointer(handle,11,&zzsim.z99989);
AcslSimSetVariablePointer(handle,12,&zzsim.z99987);
AcslSimSetVariablePointer(handle,13,&zzsim.z99985);
AcslSimSetVariablePointer(handle,14,&zzsim.age_delivery);
AcslSimSetVariablePointer(handle,15,&zzsim.weight_prepregnancy_m);
AcslSimSetVariablePointer(handle,16,&zzsim.birthweight);
AcslSimSetVariablePointer(handle,17,&zzsim.weight_c);
AcslSimSetVariablePointer(handle,18,&zzsim.age_weight_c);
AcslSimSetVariablePointer(handle,19,&zzsim.sex);
AcslSimSetVariablePointer(handle,20,&zzsim.total_bf);
AcslSimSetVariablePointer(handle,21,&zzsim.age_sample_m);
AcslSimSetVariablePointer(handle,22,&zzsim.compound);
AcslSimSetVariablePointer(handle,23,&zzsim.dose_m);
AcslSimSetVariablePointer(handle,24,&zzsim.age_conception);
AcslSimSetVariablePointer(handle,25,&zzsim.pfos);
AcslSimSetVariablePointer(handle,26,&zzsim.pfoa);
AcslSimSetVariablePointer(handle,27,&zzsim.pfhxs);
AcslSimSetVariablePointer(handle,28,&zzsim.pfos_vd_bw);
AcslSimSetVariablePointer(handle,29,&zzsim.pfoa_vd_bw);
AcslSimSetVariablePointer(handle,30,&zzsim.pfhxs_vd_bw);
AcslSimSetVariablePointer(handle,31,&zzsim.vd_bw);
AcslSimSetVariablePointer(handle,32,&zzsim.pfos_pmilk);
AcslSimSetVariablePointer(handle,33,&zzsim.pfoa_pmilk);
AcslSimSetVariablePointer(handle,34,&zzsim.pfhxs_pmilk);
AcslSimSetVariablePointer(handle,35,&zzsim.pmilk);
AcslSimSetVariablePointer(handle,36,&zzsim.pfos_p_cm);
AcslSimSetVariablePointer(handle,37,&zzsim.pfoa_p_cm);
AcslSimSetVariablePointer(handle,38,&zzsim.pfhxs_p_cm);
AcslSimSetVariablePointer(handle,39,&zzsim.p_cm);
AcslSimSetVariablePointer(handle,40,&zzsim.pfos_hl);
AcslSimSetVariablePointer(handle,41,&zzsim.pfoa_hl);
AcslSimSetVariablePointer(handle,42,&zzsim.pfhxs_hl);
AcslSimSetVariablePointer(handle,43,&zzsim.half_life);
AcslSimSetVariablePointer(handle,44,&zzsim.tstop);
AcslSimSetVariablePointer(handle,45,&zzsim.age_m);
AcslSimSetVariablePointer(handle,46,&zzsim.age_c);
AcslSimSetVariablePointer(handle,47,&zzsim.io_delivery);
AcslSimSetVariablePointer(handle,48,&zzsim.ga);
AcslSimSetVariablePointer(handle,49,&zzsim.io_conception);
AcslSimSetVariablePointer(handle,50,&zzsim.z99999);
AcslSimSetVariablePointer(handle,51,&zzsim.z99998);
AcslSimSetVariablePointer(handle,52,&zzsim.bw_m);
AcslSimSetVariablePointer(handle,53,&zzsim.adj_bw_c_pre);
AcslSimSetVariablePointer(handle,54,&zzsim.z99997);
AcslSimSetVariablePointer(handle,55,&zzsim.z99996);
AcslSimSetVariablePointer(handle,56,&zzsim.adj_bw_c_post);
AcslSimSetVariablePointer(handle,57,&zzsim.adj_bw);
AcslSimSetVariablePointer(handle,58,&zzsim.io_weight_c);
AcslSimSetVariablePointer(handle,59,&zzsim.z99995);
AcslSimSetVariablePointer(handle,60,&zzsim.z99994);
AcslSimSetVariablePointer(handle,61,&zzsim.z99993);
AcslSimSetVariablePointer(handle,62,&zzsim.bw_c);
AcslSimSetVariablePointer(handle,63,&zzsim.vd_m);
AcslSimSetVariablePointer(handle,64,&zzsim.vd_c);
AcslSimSetVariablePointer(handle,65,&zzsim.ktrans1);
AcslSimSetVariablePointer(handle,66,&zzsim.ktrans2);
AcslSimSetVariablePointer(handle,67,&zzsim.diff_m_c);
AcslSimSetVariablePointer(handle,68,&zzsim.c_mother);
AcslSimSetVariablePointer(handle,69,&zzsim.diff_c_m);
AcslSimSetVariablePointer(handle,70,&zzsim.c_child);
AcslSimSetVariablePointer(handle,71,&zzsim.volume_milk_1st_year);
AcslSimSetVariablePointer(handle,72,&zzsim.volume_milk_2nd_year);
AcslSimSetVariablePointer(handle,73,&zzsim.volume_milk);
AcslSimSetVariablePointer(handle,74,&zzsim.io_bf);
AcslSimSetVariablePointer(handle,75,&zzsim.io_end_total_bf);
AcslSimSetVariablePointer(handle,76,&zzsim.io_child_12m);
AcslSimSetVariablePointer(handle,77,&zzsim.io_child_30m);
AcslSimSetVariablePointer(handle,78,&zzsim.c_milk);
AcslSimSetVariablePointer(handle,79,&zzsim.transfer_bf);
AcslSimSetVariablePointer(handle,80,&zzsim.elimination_m);
AcslSimSetVariablePointer(handle,81,&zzsim.elimination_c);
AcslSimSetVariablePointer(handle,82,&zzsim.intake_m);
AcslSimSetVariablePointer(handle,83,&zzsim.intake_c);
AcslSimSetVariablePointer(handle,84,&zzsim.io_child_6m);
AcslSimSetVariablePointer(handle,85,&zzsim.mom_c_del);
AcslSimSetVariablePointer(handle,86,&zzsim.mom_c_samp);
AcslSimSetVariablePointer(handle,87,&zzsim.ra_mother);
AcslSimSetVariablePointer(handle,88,&zzsim.ra_child);
AcslSimSetVariablePointer(handle,89,&zzsim.dose_ratio);
AcslSimSetVariablePointer(handle,90,&zzsim.level_ratio);
AcslSimSetVariablePointer(handle,91,zzsim.table_bw_females);
AcslSimSetVariablePointer(handle,92,zzsim.table_bw_males);
AcslSimSetVariablePointer(handle,93,zzsim.table_fetal_weight);
AcslSimSetVariablePointer(handle,94,&zzsim.cint);
AcslSimSetVariablePointer(handle,95,&zzsim.ialg);
AcslSimSetVariablePointer(handle,96,&zzsim.nstp);
AcslSimSetVariablePointer(handle,97,&zzsim.maxt);
AcslSimSetVariablePointer(handle,98,&zzsim.mint);
AcslSimSetVariablePointer(handle,99,&zzsim.zzierr);
AcslSimSetVariablePointer(handle,100,&zzsim.zzstopflag);
AcslSimSetVariablePointer(handle,101,&zzsim.zzrnfl);
AcslSimSetVariablePointer(handle,102,&zzsim.zznist);
AcslSimSetVariablePointer(handle,103,&zzsim.zznblk);
AcslSimSetVariablePointer(handle,104,&zzsim.zzfrfl);
AcslSimSetVariablePointer(handle,105,&zzsim.zzjefl);
AcslSimSetVariablePointer(handle,106,&zzsim.zzndst);
AcslSimSetVariablePointer(handle,107,&zzsim.zzicon);
AcslSimSetVariablePointer(handle,108,&zzsim.zzicfl);
AcslSimSetVariablePointer(handle,109,&zzsim.zznavr);
AcslSimSetVariablePointer(handle,110,&zzsim.zzinstidx);
AcslSimSetVariablePointer(handle,111,&zzsim.zzstepstop);
AcslSimSetVariablePointer(handle,112,&zzsim.nciout);
AcslSimSetVariablePointer(handle,113,&zzsim.cioitg);
AcslSimSetVariablePointer(handle,114,&zzsim.cjvitg);
AcslSimSetVariablePointer(handle,115,&zzsim.cssitg);
AcslSimSetVariablePointer(handle,116,&zzsim.dpsitg);
AcslSimSetVariablePointer(handle,117,&zzsim.ecsitg);
AcslSimSetVariablePointer(handle,118,&zzsim.fdeitg);
AcslSimSetVariablePointer(handle,119,&zzsim.mxoitg);
AcslSimSetVariablePointer(handle,120,&zzsim.nrwitg);
AcslSimSetVariablePointer(handle,121,&zzsim.nxeitg);
AcslSimSetVariablePointer(handle,122,&zzsim.tjnitg);
AcslSimSetVariablePointer(handle,123,&zzsim.tsmitg);
AcslSimSetVariablePointer(handle,124,&zzsim.weditg);
AcslSimSetVariablePointer(handle,125,&zzsim.wesitg);
AcslSimSetVariablePointer(handle,126,&zzsim.wnditg);
AcslSimSetVariablePointer(handle,127,&zzsim.wxditg);
AcslSimSetVariablePointer(handle,128,&zzsim.cieitg);
AcslSimSetVariablePointer(handle,129,&zzsim.ubwitg);
AcslSimSetVariablePointer(handle,130,&zzsim.lbwitg);
AcslSimSetVariablePointer(handle,131,&zzsim.omfitg);
AcslSimSetVariablePointer(handle,132,&zzsim.cmd);
AcslSimSetVariablePointer(handle,133,&zzsim.dis);
AcslSimSetVariablePointer(handle,134,&zzsim.ndbug);
AcslSimSetVariablePointer(handle,135,&zzsim.plt);
AcslSimSetVariablePointer(handle,136,&zzsim.prn);
AcslSimSetVariablePointer(handle,137,&zzsim.malprn);
AcslSimSetVariablePointer(handle,138,&zzsim.rrr);
AcslSimSetVariablePointer(handle,139,&zzsim.save);
AcslSimSetVariablePointer(handle,140,&zzsim.zzticg);

zzsim.zzinstidx = handle;
}

//******************************************************************************
void zzsimulation(unsigned long handle)
//******************************************************************************

{
   if(zzsim.zzicon == false)
   {
      zznits(handle, "");




zzsim.age_conception = (zzsim.age_delivery - 0.769);



if((zzsim.compound == 1))
{

zzsim.pfos = 1;


zzsim.pfoa = 0;


zzsim.pfhxs = 0;

}
else
{

if((zzsim.compound == 2))
{

zzsim.pfos = 0;


zzsim.pfoa = 1;


zzsim.pfhxs = 0;


zzsim.pfos = 0;


zzsim.pfoa = 0;


zzsim.pfhxs = 1;

}
}


zzsim.vd_bw = (((zzsim.pfos * zzsim.pfos_vd_bw) + (zzsim.pfoa * zzsim.pfoa_vd_bw)) + (zzsim.pfhxs * zzsim.pfhxs_vd_bw));


zzsim.pmilk = (((zzsim.pfos * zzsim.pfos_pmilk) + (zzsim.pfoa * zzsim.pfoa_pmilk)) + (zzsim.pfhxs * zzsim.pfhxs_pmilk));


zzsim.p_cm = (((zzsim.pfos * zzsim.pfos_p_cm) + (zzsim.pfoa * zzsim.pfoa_p_cm)) + (zzsim.pfhxs * zzsim.pfhxs_p_cm));


zzsim.half_life = (((((zzsim.pfos * zzsim.pfos_hl) + (zzsim.pfoa * zzsim.pfoa_hl)) + (zzsim.pfhxs * zzsim.pfhxs_hl)) * 365) * 24);


zzsim.tstop = (((zzsim.age_delivery + 5.0) * 365) * 24);


zzsim.io_conception = 0;


zzsim.io_delivery = 0;


zzsim.io_child_6m = 0;


zzsim.io_child_12m = 0;


zzsim.io_child_30m = 0;


zzsim.io_weight_c = 0;


zzsim.io_end_total_bf = 0;


zzsim.mom_c_del = 0;


zzsim.mom_c_samp = 0;


 
      zzrset(handle);
   }

   while(zzsim.zzstopflag == false && zzsim.zzstepstop == false)
   {

   

      AcslSimIntegrate(handle);
   }

   if(zzsim.zzstepstop == false)
   {
   


   

   }
}

//******************************************************************************
void zzderivative(unsigned long handle, unsigned long section)
//******************************************************************************

{

switch(section) 
{
   case 0: /* Initial */


			
		      
   break;
   case 1: /* Terminal */


			
		   
   break;
case 2: /* Dynamic */


			
		   
   break;
case 3: /* Left over code, executed once */


  
   
   break;


   /* Derivative */
			

case 500:


zzsim.ktrans1 = zzsim.p_cm;


zzsim.age_m = (zzsim.t / (365 * 24));


zzsim.z99999 = table_bw_females_table(zzsim.age_m);


zzsim.z99998 = table_bw_females_table(zzsim.age_conception);


zzsim.bw_m = ((zzsim.weight_prepregnancy_m / zzsim.z99998) * zzsim.z99999);


zzsim.vd_m = (zzsim.vd_bw * zzsim.bw_m);


zzsim.c_mother = (zzsim.a_mother / zzsim.vd_m);


zzsim.diff_m_c = (((zzsim.io_conception - zzsim.io_delivery) * zzsim.ktrans1) * zzsim.c_mother);


zzsim.ktrans2 = 1.0;


zzsim.age_c = (zzsim.io_delivery * (zzsim.age_m - zzsim.age_delivery));


zzsim.adj_bw_c_pre = (zzsim.birthweight / 3.28);


zzsim.z99997 = table_bw_males_table(zzsim.age_weight_c);


zzsim.z99996 = table_bw_females_table(zzsim.age_weight_c);


zzsim.adj_bw_c_post = (zzsim.weight_c / (((1 - zzsim.sex) * zzsim.z99996) + (zzsim.sex * zzsim.z99997)));


zzsim.adj_bw = ((((zzsim.io_conception - zzsim.io_delivery) * zzsim.adj_bw_c_pre) + ((zzsim.io_delivery - zzsim.io_weight_c) * (zzsim.adj_bw_c_pre + ((zzsim.age_c * (zzsim.adj_bw_c_post - zzsim.adj_bw_c_pre)) / zzsim.age_weight_c)))) + (zzsim.io_weight_c * zzsim.adj_bw_c_post));


zzsim.z99995 = table_bw_males_table(zzsim.age_c);


zzsim.z99994 = table_bw_females_table(zzsim.age_c);


zzsim.ga = (zzsim.io_conception * (zzsim.age_m - zzsim.age_conception));


zzsim.z99993 = table_fetal_weight_table(zzsim.ga);


zzsim.bw_c = (zzsim.adj_bw * (((zzsim.io_conception - zzsim.io_delivery) * zzsim.z99993) + (zzsim.io_delivery * (((1 - zzsim.sex) * zzsim.z99994) + (zzsim.sex * zzsim.z99995)))));


zzsim.vd_c = ((zzsim.vd_bw * zzsim.bw_c) + 1e-03);


zzsim.c_child = (zzsim.a_child / zzsim.vd_c);


zzsim.diff_c_m = (((zzsim.io_conception - zzsim.io_delivery) * zzsim.ktrans2) * zzsim.c_child);


zzsim.volume_milk_1st_year = ((zzsim.bw_c * ((-(0.312) * (zzsim.age_c * 365.0)) + 157.7)) / 24000.0);


zzsim.volume_milk_2nd_year = (((-(0.2785) * zzsim.age_c) + 0.7203) / 24);



if((zzsim.total_bf == 0))
{

zzsim.io_bf = 0;

}
else
{

if((zzsim.total_bf > 0))
{

zzsim.io_bf = 1;

}
}


zzsim.volume_milk = ((zzsim.io_bf * (zzsim.io_delivery - zzsim.io_end_total_bf)) * (((1 - zzsim.io_child_12m) * zzsim.volume_milk_1st_year) + ((zzsim.io_child_12m - zzsim.io_child_30m) * zzsim.volume_milk_2nd_year)));


zzsim.c_milk = (zzsim.pmilk * zzsim.c_mother);


zzsim.transfer_bf = (zzsim.volume_milk * zzsim.c_milk);


zzsim.elimination_m = (((zzsim.c_mother * zzsim.vd_m) * log(2)) / zzsim.half_life);


zzsim.intake_m = ((zzsim.dose_m * zzsim.bw_m) / 24);


zzsim.ra_mother = ((((zzsim.intake_m - zzsim.elimination_m) - zzsim.transfer_bf) - zzsim.diff_m_c) + zzsim.diff_c_m);


zzsim.z99992 = zzsim.ra_mother;


zzsim.z99990 = zzsim.c_mother;


zzsim.elimination_c = (((zzsim.c_child * zzsim.vd_c) * log(2)) / zzsim.half_life);


zzsim.intake_c = (((zzsim.io_child_6m * zzsim.dose_m) * zzsim.bw_c) / 24);


zzsim.ra_child = ((((zzsim.intake_c + zzsim.transfer_bf) - zzsim.elimination_c) + zzsim.diff_m_c) - zzsim.diff_c_m);


zzsim.z99988 = zzsim.ra_child;


zzsim.z99986 = zzsim.c_child;


zzsim.z99991 = 0.0;


zzsim.z99989 = 0.0;


zzsim.z99987 = 0.0;


zzsim.z99985 = 0.0;


zzsim.dose_ratio = (((zzsim.transfer_bf + zzsim.intake_c) / (zzsim.bw_c + 1e-10)) / (zzsim.dose_m + 1e-10));


zzsim.level_ratio = ((zzsim.io_delivery * zzsim.c_child) / (zzsim.mom_c_del + 1e-10));


AcslSimScheduleEvent(handle,1,1000,(AcslScheduleType)3,(zzsim.age_conception - zzsim.age_m),0);


AcslSimScheduleEvent(handle,3,1002,(AcslScheduleType)3,(zzsim.age_sample_m - zzsim.age_m),0);


AcslSimScheduleEvent(handle,2,1001,(AcslScheduleType)3,(zzsim.age_delivery - zzsim.age_m),0);


AcslSimScheduleEvent(handle,5,1004,(AcslScheduleType)3,(1.000 - zzsim.age_c),0);


AcslSimScheduleEvent(handle,4,1003,(AcslScheduleType)3,(0.500 - zzsim.age_c),0);



if((zzsim.t >= zzsim.tstop))
{

zztrmt(zzsim.zzinstidx," ")
;

}


AcslSimScheduleEvent(handle,6,1005,(AcslScheduleType)3,(2.500 - zzsim.age_c),0);


AcslSimScheduleEvent(handle,7,1006,(AcslScheduleType)3,(zzsim.age_weight_c - zzsim.age_c),0);


AcslSimScheduleEvent(handle,8,1007,(AcslScheduleType)3,(zzsim.total_bf - zzsim.age_c),0);


break;


   /* Discrete */
	

case 1000:


zzsim.io_conception = 1;


AcslSimDiscreteEventOccurred(handle,1000);


break;


   /* Discrete */
	

case 1001:


zzsim.io_delivery = 1;


zzsim.mom_c_del = zzsim.c_mother;


AcslSimDiscreteEventOccurred(handle,1001);


break;


   /* Discrete */
	

case 1002:


zzsim.mom_c_samp = zzsim.c_mother;


AcslSimDiscreteEventOccurred(handle,1002);


break;


   /* Discrete */
	

case 1003:


zzsim.io_child_6m = 1;


AcslSimDiscreteEventOccurred(handle,1003);


break;


   /* Discrete */
	

case 1004:


zzsim.io_child_12m = 1;


AcslSimDiscreteEventOccurred(handle,1004);


break;


   /* Discrete */
	

case 1005:


zzsim.io_child_30m = 1;


AcslSimDiscreteEventOccurred(handle,1005);


break;


   /* Discrete */
	

case 1006:


zzsim.io_weight_c = 1;


AcslSimDiscreteEventOccurred(handle,1006);


break;


   /* Discrete */
	

case 1007:


zzsim.io_end_total_bf = 1;


AcslSimDiscreteEventOccurred(handle,1007);


break;


}

}

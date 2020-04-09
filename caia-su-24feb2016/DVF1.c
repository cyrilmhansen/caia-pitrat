#include "dx.h"
void DVF1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V5=0,V8=0,V26=0,V28=0,V31=0,V21=0,V22=0,V23=0,V24=0,V25=0,V27=0,V29=0,V30=0,V32=0,V4=0,V17=0;
int V,K;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10477;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1794&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; K=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[jvj+5]=incon;
x[jvj+3]=vo[15];z[jvj+3]=vz[15];
x[jvj+6]=x[jvj+3] ;z[jvj+6]=z[jvj+3];
pile[v[22]]=158; pile[WZ1]=K; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,K,jvj+4)*/
l1:pile[v[22]]=176; pile[WZ1]=K; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(176,K,jvj+5)*/
l2:pile[v[22]]=283; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(283,jvj+6,jvj+7)*/
l3:if((x[jvj+7]>0)) goto l4;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+9; 
(*f[329])( );     /*TRI13(V,140,jvj+9)*/
pile[v[22]]=jvj+6; pile[WZ1]=283; 
(*f[36])( );     /*PLUSC0(jvj+6,283,jvj+9)*/
l12:if(x[jvj+4]!=incon) goto l13;
l15:if(x[jvj+5]!=incon) goto l6;
l18:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+8,V19)*/
V19=pile[WZ2]; 
if((V19!=V)) goto l5;
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
goto l12;
l5:x[jvj+7]=t[x[jvj+7]];
goto l3;
l6:pile[v[22]]=176; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(176,jvj+9,jvj+10)*/
l17:pile[v[22]]=176; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(176,jvj+9,jvj+15)*/
if((x[jvj+15]==x[jvj+5])) goto l18;
V4=g[10];
if((V4<=0)) goto l18;
V5=vg[10];
if((V5!=0)) goto l7;
if((V4<3)) goto l9;
l7:pile[v[22]]=10; pile[WZ1]=10477; pile[WZ2]=1; pile[WZ3]=(-624); pile[WZ4]=jvj+5; pile[WZ5]=(-611); pile[v[22]+6]=V; pile[v[22]+7]=(-657); pile[v[22]+8]=jvj+9; pile[v[22]+9]=(-662); pile[v[22]+10]=jvj+6; pile[v[22]+11]=jvj+11; 
(*f[1832])( );     /*INTERP23(10,10477,1,(-624),jvj+5,(-611),V,(-657),jvj+9,(-662),jvj+6,jvj+11)*/
if((x[jvj+11]==135)) goto l8;
goto l18;
l8:if((V4<4)) goto l9;
goto l18;
l9:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+6,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=583; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(583,jvj+6,jvj+12)*/
V26=x[jvj+5];
V28=x[jvj+15];
V31=x[jvj+12];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V21; pile[WZ2]=10477; 
(*f[98])( );     /*SRA3(135,V21,10477,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V22,125,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V23,V,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V26; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,V26,V24,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V28; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V28,V25,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V27,(-740),V29)*/
V29=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V31; pile[WZ2]=V29; 
(*f[39])( );     /*SDX0(20,V31,V29,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V8; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,V8,V30,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
l10:if((V4!=2)) goto l18;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l18;
l13:pile[v[22]]=158; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(158,jvj+9,jvj+14)*/
if((x[jvj+14]==x[jvj+4])) goto l11;
pile[v[22]]=10477; pile[WZ1]=V; pile[WZ2]=(-4383); pile[WZ3]=jvj+4; pile[WZ4]=jvj+14; 
(*f[1827])( );     /*FAUTE8(10477,V,(-4383),jvj+4,jvj+14)*/
l11:pile[v[22]]=158; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+9,jvj+13)*/
goto l15;
l14:pile[v[22]]=jvj+9; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+9,158,jvj+4)*/
pile[v[22]]=110; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(110,jvj+9,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=jvj+4; 
(*f[1793])( );     /*DVF0(V17,jvj+4)*/
goto l15;
l16:pile[v[22]]=jvj+9; pile[WZ1]=176; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+9,176,jvj+5)*/
goto l17;
}

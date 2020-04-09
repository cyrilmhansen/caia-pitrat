#include "dx.h"
void ORB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V=0,C=0,V16=0,V23=0,V13=0,V25=0;
int F,E,XN;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=10685;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1654&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
F=pile[v[22]]; E=pile[v[22]+1]; XN=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+16]=239 ;z[jvj+16]=239;
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+18]=x[E] ;z[jvj+18]=z[E];
l1:if((x[jvj+18]>0)) goto l2;
x[jvj+12]=x[jvj+5] ;z[jvj+12]=z[jvj+5];
if((x[jvj+12]==0)) goto l16;
x[jvj+20]=x[jvj+12] ;z[jvj+20]=z[jvj+12];
l6:if((x[jvj+20]>0)) goto l7;
pile[v[22]]=jvj+12; pile[WZ1]=F; pile[WZ2]=XN; pile[WZ3]=250; 
(*f[1838])( );     /*ORBB0(jvj+12,F,XN,250)*/
l16:pile[v[22]]=120; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(120,jvj+16,jvj+17)*/
x[jvj+13]=0 ;z[jvj+13]=0;
V23=x[F];
l10:if((V23>0)) goto l11;
x[jvj+21]=x[jvj+12] ;z[jvj+21]=z[jvj+12];
l12:if((x[jvj+21]>0)) goto l13;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+13; pile[WZ2]=E; pile[WZ3]=XN; 
(*f[1839])( );     /*ORB1(jvj+17,jvj+13,E,XN)*/
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=s[x[jvj+18]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+18];
pile[v[22]]=123; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(123,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[jvj+16])) goto l3;
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+3)*/
l3:x[jvj+18]=t[x[jvj+18]];
goto l1;
l7:x[jvj+6]=s[x[jvj+20]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+20];
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=42)) goto l9;
pile[v[22]]=105; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(105,jvj+6,jvj+8)*/
x[jvj+19]=x[jvj+8] ;z[jvj+19]=z[jvj+8];
l4:if((x[jvj+19]<=0)) goto l9;
x[jvj+9]=s[x[jvj+19]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+19];
pile[v[22]]=436; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,jvj+9,jvj+10)*/
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+10,V7)*/
V7=pile[WZ2]; 
V=V7;
pile[v[22]]=jvj+11; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+11,V)*/
l5:x[jvj+19]=t[x[jvj+19]];
goto l4;
l9:pile[v[22]]=jvj+6; pile[WZ1]=68; 
(*f[1837])( );if(v[102]) goto l8;     /*ORL0(jvj+6,68,C)*/
C=pile[WZ2]; 
pile[WZ1]=204; pile[WZ2]=C; 
(*f[43])( );     /*CHGC2(jvj+6,204,C)*/
pile[WZ1]=263; pile[WZ2]=jvj+11; 
(*f[34])( );     /*CHGC0(jvj+6,263,jvj+11)*/
l8:x[jvj+20]=t[x[jvj+20]];
goto l6;
l11:V16=s[V23];
pile[v[22]]=jvj+13; pile[WZ1]=V16; 
(*f[331])( );     /*PLUE3(jvj+13,V16)*/
V23=t[V23];
goto l10;
l13:x[jvj+14]=s[x[jvj+21]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+21];
pile[v[22]]=263; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(263,jvj+14,jvj+15)*/
V25=x[jvj+15];
l14:if((V25>0)) goto l15;
x[jvj+21]=t[x[jvj+21]];
goto l12;
l15:V13=s[V25];
pile[v[22]]=jvj+13; pile[WZ1]=V13; 
(*f[331])( );     /*PLUE3(jvj+13,V13)*/
V25=t[V25];
goto l14;
}

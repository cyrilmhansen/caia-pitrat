#include "dx.h"
void CPTOCCURVAR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0;
int A,RR,B,C;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; RR=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,A,jvj+1)*/
if((x[jvj+1]!=484)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,A,jvj+2)*/
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+2,V5)*/
V5=pile[WZ2]; 
if((B!=V5)) goto l2;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,A,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=C; pile[WZ2]=jvj+4; 
(*f[760])( );     /*MEMEX0(jvj+3,C,jvj+4)*/
if((x[jvj+4]==135)) goto l1;
l2:x[jvj+10]=w[x[jvj+1]][9];
l3:if((x[jvj+10]>0)) goto l4;
x[jvj+11]=w[x[jvj+1]][8];
l6:if((x[jvj+11]<=0)) goto l9;
x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,A,jvj+8)*/
x[jvj+12]=x[jvj+8] ;z[jvj+12]=z[jvj+8];
l7:if((x[jvj+12]>0)) goto l8;
x[jvj+11]=t[x[jvj+11]];
goto l6;
l1:pile[v[22]]=RR; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(RR,117,1)*/
l9:v[0]=jvj; v[22]-=4; return;
l4:x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+5; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+5,A,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=RR; pile[WZ2]=B; pile[WZ3]=C; 
(*f[4026])( );     /*CPTOCCURVAR1(jvj+6,RR,B,C)*/
l5:x[jvj+10]=t[x[jvj+10]];
goto l3;
l8:x[jvj+9]=s[x[jvj+12]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+12];
pile[v[22]]=jvj+9; pile[WZ1]=RR; pile[WZ2]=B; pile[WZ3]=C; 
(*f[4026])( );     /*CPTOCCURVAR1(jvj+9,RR,B,C)*/
x[jvj+12]=t[x[jvj+12]];
goto l7;
}

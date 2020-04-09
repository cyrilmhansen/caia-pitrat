#include "dx.h"
void RECA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int ATT,A,S;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; A=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=360; pile[WZ3]=68; pile[WZ4]=jvj+1; 
(*f[181])( );     /*QUADRI2(102,A,360,68,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=ATT; pile[WZ2]=S; 
(*f[35])( );     /*CHGC1(jvj+1,ATT,S)*/
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=jvj+2; pile[WZ1]=302; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(jvj+2,302,jvj+1)*/
pile[v[22]]=248; pile[WZ1]=S; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(248,S,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]!=39)) goto l4;
pile[v[22]]=A; 
(*f[1426])( );     /*VZ0(A)*/
l4:pile[v[22]]=122; pile[WZ1]=ATT; pile[WZ2]=161; pile[WZ3]=jvj+1; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(122,ATT,161,jvj+1,jvj+8)*/
pile[v[22]]=S; pile[WZ1]=248; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(S,248,jvj+8)*/
pile[v[22]]=250; pile[WZ1]=A; 
(*f[1602])( );     /*DVA0(250,A)*/
v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=161; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(161,jvj+4,jvj+5)*/
pile[v[22]]=122; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(122,jvj+4,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; pile[WZ2]=jvj+1; 
(*f[1382])( );     /*RECZ0(jvj+6,jvj+5,jvj+1)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
}

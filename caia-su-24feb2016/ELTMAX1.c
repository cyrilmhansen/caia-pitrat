#include "dx.h"
void ELTMAX1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V8=0,RR=0,V9=0;
int X,B;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; B=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,X,jvj+3)*/
if((x[jvj+3]==61)) goto l7;
if((x[jvj+3]!=128)) goto l8;
pile[v[22]]=128; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,X,jvj+5)*/
V1=(-999999);
l1:if((x[jvj+5]>0)) goto l2;
if((V1==(-999999))) goto l8;
R=V1;
l10:v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+5]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+5];
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+1,V2)*/
V2=pile[WZ2]; 
if(V2>V1) V1=V2;
l3:x[jvj+5]=t[x[jvj+5]];
goto l1;
l5:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=jvj+2; pile[WZ1]=B; 
(*f[1585])( );if(v[102]) goto l6;     /*ELTMAX1(jvj+2,B,RR)*/
RR=pile[WZ2]; 
V9=RR;
if(V9>V8) V8=V9;
l6:x[jvj+8]=t[x[jvj+8]];
l4:if((x[jvj+8]>0)) goto l5;
if((V8==(-999999))) goto l9;
R=V8;
goto l10;
l7:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,X,jvj+4)*/
pile[v[22]]=B; pile[WZ1]=jvj+4; 
(*f[816])( );if(v[102]) goto l8;     /*VALEXP0(B,jvj+4,R)*/
R=pile[WZ2]; 
goto l10;
l8:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,X,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=424)) goto l9;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,X,jvj+8)*/
V8=(-999999);
goto l4;
l9:v[0]=jvj; v[22]-=3; v[102]=1;return;
}

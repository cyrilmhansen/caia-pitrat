#include "dx.h"
void TLDEBL2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BL;
int E;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,BL,jvj+6)*/
if((x[jvj+6]==508)) goto l5;
if((x[jvj+6]==854)) goto l6;
if((x[jvj+6]!=298)) goto l7;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=367; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(367,BL,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
x[E]=x[jvj+4] ;z[E]=z[jvj+4];
l8:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+3)*/
x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
l3:if((x[jvj+8]>0)) goto l4;
x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+5]=s[x[jvj+8]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+8];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+8]=t[x[jvj+8]];
goto l3;
l5:pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=E; 
(*f[33])( );     /*FNDE0(365,BL,E)*/
goto l8;
l6:pile[v[22]]=345; pile[WZ1]=BL; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(345,BL,jvj+7)*/
pile[v[22]]=365; pile[WZ1]=jvj+7; pile[WZ2]=E; 
(*f[33])( );     /*FNDE0(365,jvj+7,E)*/
goto l8;
l7:v[0]=jvj; v[22]-=2; v[102]=1;return;
}

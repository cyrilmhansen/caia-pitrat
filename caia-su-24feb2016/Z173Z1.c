#include "dx.h"
void Z173Z1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BXXX,BRRR;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

BXXX=pile[v[22]]; BRRR=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=BXXX; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,BXXX,jvj+1)*/
if((x[jvj+1]!=22)) goto l1;
pile[v[22]]=111; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,BXXX,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if(x[jvj+3]!=586&&x[jvj+3]!=281&&x[jvj+3]!=1886&&x[jvj+3]!=1887) goto l1;
pile[v[22]]=102; pile[WZ1]=BXXX; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,BXXX,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=21)) goto l1;
pile[v[22]]=BRRR; pile[WZ1]=BXXX; 
(*f[68])( );     /*PLUE0(BRRR,BXXX)*/
l1:x[jvj+11]=w[x[jvj+1]][9];
l2:if((x[jvj+11]>0)) goto l3;
x[jvj+12]=w[x[jvj+1]][8];
l5:if((x[jvj+12]<=0)) goto l8;
x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
pile[v[22]]=jvj+8; pile[WZ1]=BXXX; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(jvj+8,BXXX,jvj+9)*/
x[jvj+13]=x[jvj+9] ;z[jvj+13]=z[jvj+9];
l6:if((x[jvj+13]>0)) goto l7;
x[jvj+12]=t[x[jvj+12]];
goto l5;
l3:x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=jvj+6; pile[WZ1]=BXXX; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+6,BXXX,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=BRRR; 
(*f[1618])( );     /*Z173Z1(jvj+7,BRRR)*/
l4:x[jvj+11]=t[x[jvj+11]];
goto l2;
l7:x[jvj+10]=s[x[jvj+13]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+13];
pile[v[22]]=jvj+10; pile[WZ1]=BRRR; 
(*f[1618])( );     /*Z173Z1(jvj+10,BRRR)*/
x[jvj+13]=t[x[jvj+13]];
goto l6;
l8:v[0]=jvj; v[22]-=2; return;
}

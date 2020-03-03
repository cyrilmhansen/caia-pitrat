#include "dx.h"
void AJARR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int N,I;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11294;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1765&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; I=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=481; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(481,N,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=N; pile[WZ1]=498; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(N,498,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=481; pile[WZ2]=277; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+5,481,277,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+6,41,158,jvj+7)*/
pile[v[22]]=100; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+7; pile[WZ5]=R; 
(*f[47])( );     /*QUADRI0(100,41,130,I,jvj+7,R)*/
pile[v[22]]=N; pile[WZ1]=481; pile[WZ2]=R; 
(*f[36])( );     /*PLUSC0(N,481,R)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2!=I)) goto l3;
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
}

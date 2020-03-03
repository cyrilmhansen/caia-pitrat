#include "dx.h"
void CMTTENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,N=0,I=0,T=0,V3=0,V6=0,K=0,V5=0;
int S;
int E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
x[E]=x[jvj+3] ;z[E]=z[jvj+3];
for(i=x[S],V2=0;i>0;i=t[i],V2++)  ;
N=V2;
I=1;
T=0;
if((I<=N)) goto l2;
pile[v[22]]=E; pile[WZ1]=T; 
(*f[207])( );     /*PLUE2(E,T)*/
l2:x[jvj+4]=x[S] ;z[jvj+4]=z[S];
l1:if((x[jvj+4]<=0)) goto l5;
x[jvj+1]=s[x[jvj+4]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+4];
pile[v[22]]=642; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+1,V3)*/
V3=pile[WZ2]; 
if((V3!=I)) goto l3;
pile[v[22]]=195; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(195,jvj+1,jvj+2)*/
V6=I+1;
l4:if((x[jvj+2]<=0)) goto l5;
K=s[x[jvj+2]];
V5=T+K;
pile[v[22]]=N; pile[WZ1]=E; pile[WZ2]=V5; pile[WZ3]=V6; pile[WZ4]=S; 
(*f[4072])( );     /*CMTTENS1(N,E,V5,V6,S)*/
x[jvj+2]=t[x[jvj+2]];
goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:v[0]=jvj; v[22]-=2; return;
}

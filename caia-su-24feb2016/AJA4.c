#include "dx.h"
void AJA4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0;
int K,V,AT,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

K=pile[v[22]]; V=pile[v[22]+1]; AT=pile[v[22]+2]; T=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=25 ;z[jvj+10]=25;
x[jvj+11]=67 ;z[jvj+11]=67;
pile[v[22]]=1088; pile[WZ1]=K; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(1088,K,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+3; 
(*f[329])( );     /*TRI13(V,140,jvj+3)*/
pile[v[22]]=K; pile[WZ1]=1088; 
(*f[36])( );     /*PLUSC0(K,1088,jvj+3)*/
l4:x[jvj+4]=d[49];z[jvj+4]=0;
pile[v[22]]=AT; pile[WZ1]=1018; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(AT,1018,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=T; pile[WZ2]=447; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+8,T,447,jvj+9)*/
pile[v[22]]=145; pile[WZ1]=jvj+10; pile[WZ2]=201; pile[WZ3]=jvj+11; pile[WZ4]=jvj+9; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(145,jvj+10,201,jvj+11,jvj+9,jvj+5)*/
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; pile[WZ3]=jvj+4; 
(*f[663])( );     /*PLUG0(258,jvj+3,jvj+5,jvj+4)*/
x[jvj+6]=d[50];z[jvj+6]=0;
pile[v[22]]=T; pile[WZ1]=447; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(T,447,jvj+7)*/
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ3]=jvj+6; 
(*f[663])( );     /*PLUG0(159,jvj+3,jvj+7,jvj+6)*/
v[0]=jvj; v[22]-=4; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=140; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+2,V2)*/
V2=pile[WZ2]; 
if((V2!=V)) goto l3;
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
goto l4;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
}

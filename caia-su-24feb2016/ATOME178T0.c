#include "dx.h"
void ATOME178T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V7=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=489; pile[WZ1]=D; pile[WZ2]=jvj+1; 
(*f[1971])( );     /*FNDEND0(489,D,jvj+1)*/
if((x[jvj+1]!=0)) goto l1;
pile[v[22]]=365; pile[WZ2]=jvj+2; 
(*f[1971])( );     /*FNDEND0(365,D,jvj+2)*/
for(i=x[jvj+2],V3=0;i>0;i=t[i],V3++)  ;
if((V3!=1)) goto l1;
if((x[jvj+2]<=0)) goto l1;
x[jvj+7]=s[x[jvj+2]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+2];
pile[v[22]]=498; pile[WZ2]=jvj+3; 
(*f[1950])( );if(v[102]) goto l1;     /*FNDOND0(498,D,jvj+3)*/
pile[v[22]]=844; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(844,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l1;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+5,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+12)*/
pile[v[22]]=V7; pile[WZ1]=858; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(V7,858,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,v[13],642,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=3306; pile[WZ2]=246; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,3306,246,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=20178; pile[WZ2]=218; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,20178,218,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=(-20); pile[WZ2]=jvj+11; pile[WZ3]=159; pile[WZ4]=jvj+13; 
(*f[298])( );     /*TRIENS1(jvj+12,(-20),jvj+11,159,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+13,1,158,jvj+6)*/
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1571])( );     /*DELIER0(365,D,jvj+7,jvj+6)*/
l1:v[0]=jvj; v[22]-=1; return;
}

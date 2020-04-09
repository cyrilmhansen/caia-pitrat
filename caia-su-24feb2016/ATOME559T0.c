#include "dx.h"
void ATOME559T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V3=0,V8=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=20559;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3794&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=472; pile[WZ1]=V; 
(*f[1977])( );if(v[102]) goto l3;     /*FNDCND0(472,V,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=202; pile[WZ2]=jvj+2; 
(*f[1950])( );if(v[102]) goto l3;     /*FNDOND0(202,V,jvj+2)*/
if((x[jvj+2]!=68)) goto l3;
pile[v[22]]=489; pile[WZ2]=jvj+3; 
(*f[1971])( );     /*FNDEND0(489,V,jvj+3)*/
for(i=x[jvj+3],V3=0;i>0;i=t[i],V3++)  ;
if((V3!=V5)) goto l3;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=V; pile[WZ2]=jvj+5; 
(*f[1971])( );     /*FNDEND0(365,V,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l3;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[1030])( );     /*DIFFAPP0(jvj+6,jvj+3,jvj+7)*/
if((x[jvj+7]==135)) goto l4;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+13)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(V8,858,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,v[13],642,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=3794; pile[WZ2]=246; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,3794,246,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=20559; pile[WZ2]=218; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,20559,218,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=(-20); pile[WZ2]=jvj+12; pile[WZ3]=159; pile[WZ4]=jvj+14; 
(*f[298])( );     /*TRIENS1(jvj+13,(-20),jvj+12,159,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+14,1,158,jvj+8)*/
pile[v[22]]=365; pile[WZ1]=V; pile[WZ2]=jvj+6; 
(*f[1571])( );     /*DELIER0(365,V,jvj+6,jvj+8)*/
goto l2;
}

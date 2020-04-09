#include "dx.h"
void ATOME53T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,X=0;
int A;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=20053;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3427&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+3,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[1971])( );     /*FNDEND0(365,A,jvj+4)*/
pile[v[22]]=489; pile[WZ2]=jvj+5; 
(*f[1971])( );     /*FNDEND0(489,A,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l3;
X=s[x[jvj+5]];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==X) goto l2;
pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=110; pile[WZ3]=(-598); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(101,A,110,(-598),jvj+11)*/
pile[v[22]]=V3; pile[WZ1]=858; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(V3,858,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+8; 
(*f[189])( );     /*TRI4(jvj+7,v[13],642,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=3427; pile[WZ2]=246; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,3427,246,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=20053; pile[WZ2]=218; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+9,20053,218,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=(-20); pile[WZ2]=jvj+10; pile[WZ3]=159; pile[WZ4]=jvj+12; 
(*f[298])( );     /*TRIENS1(jvj+11,(-20),jvj+10,159,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+12,1,158,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[1561])( );     /*CONTRADICTION0(jvj+6)*/
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}

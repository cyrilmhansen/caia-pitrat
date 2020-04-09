#include "dx.h"
void ATOME557T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V11=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=20557;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3793&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+2; 
(*f[1950])( );if(v[102]) goto l3;     /*FNDOND0(202,V,jvj+2)*/
if((x[jvj+2]!=68)) goto l3;
pile[v[22]]=489; pile[WZ2]=jvj+3; 
(*f[1971])( );     /*FNDEND0(489,V,jvj+3)*/
for(i=x[jvj+3],V5=0;i>0;i=t[i],V5++)  ;
if((V5!=1)) goto l3;
pile[v[22]]=365; pile[WZ2]=jvj+4; 
(*f[1971])( );     /*FNDEND0(365,V,jvj+4)*/
for(i=x[jvj+4],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=2)) goto l3;
pile[v[22]]=498; pile[WZ2]=jvj+5; 
(*f[1950])( );if(v[102]) goto l3;     /*FNDOND0(498,V,jvj+5)*/
pile[v[22]]=462; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(462,jvj+5,jvj+6)*/
if((x[jvj+6]!=68)) goto l3;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+7,V11)*/
V11=pile[WZ2]; 
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+8]=s[x[jvj+4]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+4];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[1030])( );     /*DIFFAPP0(jvj+8,jvj+3,jvj+9)*/
if((x[jvj+9]==135)) goto l4;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+15)*/
pile[v[22]]=V11; pile[WZ1]=858; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(V11,858,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3793; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3793,246,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=20557; pile[WZ2]=218; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,20557,218,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=jvj+14; pile[WZ3]=159; pile[WZ4]=jvj+16; 
(*f[298])( );     /*TRIENS1(jvj+15,(-20),jvj+14,159,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+16,1,158,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=489; pile[WZ2]=V; pile[WZ3]=jvj+8; 
(*f[1755])( );     /*LIER1(jvj+10,489,V,jvj+8)*/
goto l2;
}

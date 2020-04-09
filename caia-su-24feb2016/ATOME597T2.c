#include "dx.h"
void ATOME597T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,X=0,V11=0,V7=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=20597;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3958&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=1030; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1030,jvj+7,jvj+8)*/
if((x[jvj+8]!=68)) goto l5;
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+9; 
(*f[1950])( );if(v[102]) goto l5;     /*FNDOND0(202,V,jvj+9)*/
if((x[jvj+9]!=68)) goto l5;
V8=0;
pile[v[22]]=509; pile[WZ2]=jvj+3; 
(*f[1971])( );     /*FNDEND0(509,V,jvj+3)*/
pile[v[22]]=V; pile[WZ1]=jvj+4; 
(*f[1292])( );if(v[102]) goto l4;     /*DEPEXP0(V,jvj+4)*/
l1:if((x[jvj+3]<=0)) goto l4;
x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[3808])( );if(v[102]) goto l2;     /*DEFINEDBY0(jvj+5,jvj+4,jvj+6)*/
V11=x[jvj+6];
l3:if((V11<=0)) goto l2;
X=s[V11];
;
V11=t[V11];
goto l3;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:for(i=V8,V7=0;i>0;i=t[i],V7++)  ;
if((V7<2)) goto l5;
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+15)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(206,715,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3807; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3807,246,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=20597; pile[WZ2]=218; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,20597,218,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=jvj+14; pile[WZ3]=159; pile[WZ4]=jvj+16; 
(*f[298])( );     /*TRIENS1(jvj+15,(-20),jvj+14,159,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+16,289,158,jvj+10)*/
pile[v[22]]=jvj+10; 
(*f[481])( );     /*STOCKER0(jvj+10)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}

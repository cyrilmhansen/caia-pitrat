#include "dx.h"
void ATOME31T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V9=0,V1=0,V5=0,V3=0,V7=0;
int N;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=20031;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3290&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=472; pile[WZ1]=N; 
(*f[1977])( );if(v[102]) goto l1;     /*FNDCND0(472,N,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=750; 
(*f[1977])( );if(v[102]) goto l1;     /*FNDCND0(750,N,V8)*/
V8=pile[WZ2]; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+2,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=jvj+3; 
(*f[3034])( );if(v[102]) goto l1;     /*ENSDEP0(N,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[457])( );if(v[102]) goto l1;     /*CARDENS0(jvj+3,V1)*/
V1=pile[WZ1]; 
V5=V6*V1;
pile[v[22]]=N; pile[WZ1]=jvj+4; 
(*f[3035])( );if(v[102]) goto l1;     /*ENSARR0(N,jvj+4)*/
pile[v[22]]=jvj+4; 
(*f[457])( );if(v[102]) goto l1;     /*CARDENS0(jvj+4,V3)*/
V3=pile[WZ1]; 
V7=V8*V3;
if((V5!=V7)) goto l1;
pile[v[22]]=101; pile[WZ1]=N; pile[WZ2]=110; pile[WZ3]=(-625); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(101,N,110,(-625),jvj+11)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(V9,858,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+8; 
(*f[189])( );     /*TRI4(jvj+7,v[13],642,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=3290; pile[WZ2]=246; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,3290,246,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=20031; pile[WZ2]=218; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+9,20031,218,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=(-20); pile[WZ2]=jvj+10; pile[WZ3]=159; pile[WZ4]=jvj+12; 
(*f[298])( );     /*TRIENS1(jvj+11,(-20),jvj+10,159,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+12,1,158,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=473; pile[WZ2]=N; pile[WZ3]=V6; 
(*f[2058])( );     /*VAUT0(jvj+5,473,N,V6)*/
pile[v[22]]=101; pile[WZ1]=N; pile[WZ2]=110; pile[WZ3]=(-625); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,N,110,(-625),jvj+17)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(V9,858,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,v[13],642,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=3290; pile[WZ2]=246; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,3290,246,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=20031; pile[WZ2]=218; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+15,20031,218,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=(-20); pile[WZ2]=jvj+16; pile[WZ3]=159; pile[WZ4]=jvj+18; 
(*f[298])( );     /*TRIENS1(jvj+17,(-20),jvj+16,159,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+18,1,158,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=688; pile[WZ2]=N; pile[WZ3]=V8; 
(*f[2058])( );     /*VAUT0(jvj+6,688,N,V8)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

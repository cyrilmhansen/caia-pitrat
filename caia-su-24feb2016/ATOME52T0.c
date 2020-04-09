#include "dx.h"
void ATOME52T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V9=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=20052;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3048&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1950])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l6;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(480,N,jvj+9)*/
l4:if((x[jvj+9]<=0)) goto l6;
x[jvj+2]=s[x[jvj+9]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+9];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[1950])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+2,jvj+10)*/
if((x[N]!=x[jvj+10])) goto l5;
V1=999999;
pile[v[22]]=365; pile[WZ2]=jvj+3; 
(*f[1971])( );     /*FNDEND0(365,jvj+2,jvj+3)*/
x[jvj+17]=x[jvj+3] ;z[jvj+17]=z[jvj+3];
l1:if((x[jvj+17]>0)) goto l2;
if((V1==999999)) goto l5;
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,jvj+2,110,(-656),jvj+15)*/
pile[WZ1]=N; pile[WZ3]=(-625); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,N,110,(-625),jvj+16)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V9,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3048; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3048,246,jvj+14)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20052; pile[WZ4]=jvj+14; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(158,1,218,20052,jvj+14,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=159; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+11,159,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+11,159,jvj+16)*/
pile[WZ1]=280; pile[WZ2]=jvj+2; pile[WZ3]=V1; 
(*f[2058])( );     /*VAUT0(jvj+11,280,jvj+2,V1)*/
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
l2:x[jvj+4]=s[x[jvj+17]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+17];
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+4,V2)*/
V2=pile[WZ2]; 
if(V2<V1) V1=V2;
l3:x[jvj+17]=t[x[jvj+17]];
goto l1;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

#include "dx.h"
void ATOME220T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20220;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3486&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+3,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=969; pile[WZ1]=D; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(969,D,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=868; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(868,jvj+5,jvj+6)*/
if((x[jvj+6]!=55)) goto l2;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[799])( );if(v[102]) goto l2;     /*NORME0(jvj+5,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+5,jvj+8,jvj+9)*/
if((x[jvj+9]==134)) goto l4;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,(-601),jvj+15)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+16)*/
pile[v[22]]=V5; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V5,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3486; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3486,246,jvj+14)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20220; pile[WZ4]=jvj+14; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(158,1,218,20220,jvj+14,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=159; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+16)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[1560])( );     /*RESTAURE0(jvj+5,jvj+8,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+21)*/
pile[v[22]]=V5; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V5,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3486; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3486,246,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=20220; pile[WZ2]=218; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,20220,218,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=jvj+20; pile[WZ3]=159; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,159,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+22,1,158,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+5; 
(*f[966])( );     /*ELIMINE0(jvj+11,jvj+5)*/
goto l2;
}

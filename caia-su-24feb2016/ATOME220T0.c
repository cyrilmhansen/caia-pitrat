#include "dx.h"
void ATOME220T0(void )
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
v[0]+=21;
x[jvj+1]=20220;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3309&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+2,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=969; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(969,D,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=868; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(868,jvj+4,jvj+5)*/
if((x[jvj+5]!=55)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+6; 
(*f[799])( );if(v[102]) goto l2;     /*NORME0(jvj+4,jvj+6)*/
x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(jvj+4,jvj+7,jvj+8)*/
if((x[jvj+8]==134)) goto l4;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,jvj+4,110,(-601),jvj+14)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+15)*/
pile[v[22]]=V5; pile[WZ1]=858; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(V5,858,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3309; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3309,246,jvj+13)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20220; pile[WZ4]=jvj+13; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(158,1,218,20220,jvj+13,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=159; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+9,159,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+9,159,jvj+15)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[1558])( );     /*RESTAURE0(jvj+4,jvj+7,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+20)*/
pile[v[22]]=V5; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V5,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3309; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3309,246,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20220; pile[WZ2]=218; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20220,218,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=(-20); pile[WZ2]=jvj+19; pile[WZ3]=159; pile[WZ4]=jvj+21; 
(*f[298])( );     /*TRIENS1(jvj+20,(-20),jvj+19,159,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+21,1,158,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+4; 
(*f[966])( );     /*ELIMINE0(jvj+10,jvj+4)*/
goto l2;
}

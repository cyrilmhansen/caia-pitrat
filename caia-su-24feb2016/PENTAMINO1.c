#include "dx.h"
void PENTAMINO1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V8=0,V7=0,V12=0,V11=0,V10=0,I=0,J=0,V14=0,V13=0;
int M,N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=26179;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2769&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+2]=0 ;z[jvj+2]=0;
V9=M+1;
V8=V9/2;
V7=V8-1;
V12=N+1;
V11=V12/2;
V10=V11-1;
I=1;
l1:if((I<=V7)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+17; 
(*f[301])( );     /*TRI11(jvj+16,jvj+4,107,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+17,22,100,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:J=1;
l2:if((J<=V10)) goto l4;
I++;
goto l1;
l4:V14=J*M;
V13=I+V14;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+7)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V13; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,V13,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+8,jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+10,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
J++;
goto l2;
}

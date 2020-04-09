#include "dx.h"
void CREPILE2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V8=0,V27=0,V28=0,V34=0,V40=0,V36=0,V35=0,V31=0,V29=0,V33=0,V32=0,V5=0,V41=0,V43=0,V44=0,V46=0,V42=0,V45=0,V38=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=26117;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2449&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+2]=0 ;z[jvj+2]=0;
I=0;
l2:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+7)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+8,jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+10,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
I++;
if((I<=24)) goto l2;
pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
V27=3;
V28=0;
V34=49;
V35=incon;
V40=v[V34];
V36=V40%1000000;
if((V36>0)) goto l4;
V35=137643;
l3:v[V34]=V35;
V31=V27+1;
V29=V31-V28;
V33=v[49]%V29;
V32=V28+V33;
V5=V32;
V8=7+V5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+15)*/
pile[WZ3]=1215; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+22; 
(*f[301])( );     /*TRI11(jvj+21,jvj+4,107,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+22,22,100,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:V38=V36%100000;
V45=V36/100000;
V42=V38*10;
V46=V38/10000;
V44=V45+V46;
V43=V44%10;
V41=V42+V43;
V35=V41;
goto l3;
}

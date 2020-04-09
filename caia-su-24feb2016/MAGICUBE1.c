#include "dx.h"
void MAGICUBE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,Q=0,V4=0,V3=0,V5=0,V6=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=26095;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2376&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
P=1;
l1:Q=0;
l2:V4=9*Q;
V3=P+V4;
V5=V3+3;
V6=V3+6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-3347); pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,(-3347),jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+11,jvj+10,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+12)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+18,jvj+17,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+21,jvj+20,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V6; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,V6,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+24,jvj+23,jvj+15)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+15)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
Q++;
if((Q<=2)) goto l2;
P++;
if((P<=3)) goto l1;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

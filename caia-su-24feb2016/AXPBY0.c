#include "dx.h"
void AXPBY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B,C;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=26220;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2911&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; C=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ3]=485; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+9)*/
pile[WZ3]=486; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+12)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=A; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,A,jvj+14)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+10,107,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-606); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-606),jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+23,jvj+22,jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+20)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+11,107,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=C; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(100,41,130,C,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}

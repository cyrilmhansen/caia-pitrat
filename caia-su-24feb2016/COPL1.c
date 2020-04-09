#include "dx.h"
void COPL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,W=0;
int PP,R,VJ,VI,A,B,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=10526;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2164&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
PP=pile[v[22]]; R=pile[v[22]+1]; VJ=pile[v[22]+2]; VI=pile[v[22]+3]; A=pile[v[22]+4]; B=pile[v[22]+5]; C=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(A,jvj+3)*/
pile[v[22]]=C; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(C,jvj+4)*/
(*f[1819])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
(*f[1819])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+9)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=103; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+18; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+3,jvj+18,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VI; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,VI,jvj+21)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=103; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+21,jvj+20,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+24)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=103; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+24,jvj+23,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+8; 
(*f[180])( );     /*TRIENS0(jvj+7,(-20),113,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+9,jvj+8,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=114; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+5,114,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+5,114,jvj+11)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=B; pile[WZ3]=W; pile[WZ4]=V; 
(*f[2086])( );     /*COPK0(PP,R,B,W,V)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=103; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+26; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+4,jvj+26,jvj+15)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+29)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=103; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+29,jvj+28,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VJ; pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,VJ,jvj+32)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=103; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+32,jvj+31,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+13; 
(*f[180])( );     /*TRIENS0(jvj+12,(-20),113,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+14,jvj+13,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=114; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+6,114,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(R,105,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(R,105,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=123; pile[WZ2]=PP; 
(*f[35])( );     /*CHGC1(jvj+5,123,PP)*/
pile[v[22]]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+6,123,PP)*/
l1:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; return;
}

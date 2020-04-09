#include "dx.h"
void KRYPTUN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V19=0,V10=0,I=0,V9=0,V17=0,K=0,V21=0,V14=0,V13=0;
int NC,NL;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=26042;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2288&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NC=pile[v[22]]; NL=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+5]=0 ;z[jvj+5]=0;
V17=NL-1;
I=1;
l5:if((I<=V17)) goto l1;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+9)*/
x[jvj+7]=0 ;z[jvj+7]=0;
K=1;
l6:if((K<=NC)) goto l8;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+28)*/
pile[WZ3]=485; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+34,jvj+9,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+10; pile[WZ2]=107; pile[WZ3]=jvj+38; 
(*f[301])( );     /*TRI11(jvj+37,jvj+10,107,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+38,22,100,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[522])( );     /*PLUB2(jvj+11,jvj+12)*/
x[NNNE]=x[jvj+11] ;z[NNNE]=z[jvj+11];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
J=1;
l2:if((J<=NC)) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+21; 
(*f[301])( );     /*TRI11(jvj+20,jvj+4,107,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+21,22,100,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
I++;
goto l5;
l4:V19=NC-J;
pile[v[22]]=V19; pile[WZ1]=10; 
(*f[1007])( );if(v[102]) goto l3;     /*POWER0(V19,10,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l3;     /*FMATRICE0(J,I,(-598),V9)*/
V9=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+16)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V9; pile[WZ4]=jvj+18; 
(*f[272])( );     /*QUADRI9(100,89,162,V9,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+18,jvj+17,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+15)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+13,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+15)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l3:J++;
goto l2;
l8:V21=NC-K;
pile[v[22]]=V21; pile[WZ1]=10; 
(*f[1007])( );if(v[102]) goto l7;     /*POWER0(V21,10,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=NL; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l7;     /*FMATRICE0(K,NL,(-598),V13)*/
V13=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+25)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V13; pile[WZ4]=jvj+27; 
(*f[272])( );     /*QUADRI9(100,89,162,V13,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+27,jvj+26,jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=jvj+24; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,jvj+24)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+22; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+22,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+24)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
l7:K++;
goto l6;
}

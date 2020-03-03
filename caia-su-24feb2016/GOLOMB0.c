#include "dx.h"
void GOLOMB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,J=0,V4=0,I=0,K=0,V7=0;
int M;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=26144;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2606&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V3=M-1;
J=1;
l1:if((J<=V3)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V4=J+1;
I=V4;
l3:if((I<=M)) goto l5;
J++;
goto l1;
l5:K=V4;
l4:if((K<=V3)) goto l6;
I++;
goto l3;
l6:V7=K+1;
l7:if((V7<=M)) goto l9;
K++;
goto l4;
l9:if((I==V7)) goto l8;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+4)*/
pile[WZ3]=485; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+9)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+11)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+21)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+23; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+23)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+23,jvj+22,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+26,jvj+25,jvj+20)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+20)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l8:V7++;
goto l7;
}

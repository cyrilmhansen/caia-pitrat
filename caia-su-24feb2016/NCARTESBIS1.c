#include "dx.h"
void NCARTESBIS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V5=0,J=0,V7=0,K=0,V8=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=26175;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2761&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
I=1;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=I; pile[WZ1]=(-7362); 
(*f[3981])( );if(v[102]) goto l6;     /*LONGUEUR0(I,(-7362),V5)*/
V5=pile[WZ2]; 
J=1;
l2:if((J>V5)) goto l6;
pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-7362); 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(J,I,(-7362),V7)*/
V7=pile[WZ3]; 
K=1;
l4:if((K>V5)) goto l3;
if((J==K)) goto l5;
pile[v[22]]=K; pile[WZ1]=I; pile[WZ2]=(-7362); 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(K,I,(-7362),V8)*/
V8=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+7)*/
pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+25,jvj+24,jvj+22)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+9)*/
pile[WZ2]=111; pile[WZ3]=jvj+7; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+7,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+8)*/
pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+9)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l5:K++;
goto l4;
l3:J++;
goto l2;
l6:pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+26)*/
pile[WZ3]=26; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+36,jvj+35,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+33; pile[WZ4]=jvj+32; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+33,jvj+32,jvj+27)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+4,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+39,22,100,jvj+28)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+26; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+26,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+28)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
I++;
if((I<=9)) goto l1;
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

#include "dx.h"
void COFFRE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V2=0,V3=0,V4=0,V5=0,V6=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=26226;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2914&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l2:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-598); 
(*f[203])( );if(v[102]) goto l1;     /*FTAB0(1,I,(-598),V2)*/
V2=pile[WZ3]; 
pile[v[22]]=2; 
(*f[203])( );if(v[102]) goto l1;     /*FTAB0(2,I,(-598),V3)*/
V3=pile[WZ3]; 
pile[v[22]]=3; 
(*f[203])( );if(v[102]) goto l1;     /*FTAB0(3,I,(-598),V4)*/
V4=pile[WZ3]; 
pile[v[22]]=4; 
(*f[203])( );if(v[102]) goto l1;     /*FTAB0(4,I,(-598),V5)*/
V5=pile[WZ3]; 
pile[v[22]]=5; 
(*f[203])( );if(v[102]) goto l1;     /*FTAB0(5,I,(-598),V6)*/
V6=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+4)*/
pile[WZ3]=1215; pile[WZ4]=jvj+9; 
(*f[181])( );     /*QUADRI2(100,20,101,1215,jvj+9)*/
pile[WZ3]=25; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+15)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+22,jvj+21,jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V2; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V2,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+10)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+30,jvj+29,jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+11)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+31)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+38,jvj+37,jvj+35)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V4; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V4,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=111; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,111,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=103; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+32,jvj+33,103,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+35,jvj+34,jvj+12)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+39)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+44; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+44)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=4; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,4,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=111; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,111,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+46; pile[WZ4]=jvj+45; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+46,jvj+45,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+41)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+42; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+43,jvj+42,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+47)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+52)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=5; pile[WZ4]=jvj+54; 
(*f[192])( );     /*QUADRI4(100,41,130,5,jvj+54)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+54,jvj+53,jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V6; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,V6,jvj+49)*/
pile[v[22]]=jvj+47; pile[WZ1]=111; pile[WZ2]=jvj+48; 
(*f[54])( );     /*TRI1(jvj+47,111,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+48,jvj+49,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+51,jvj+50,jvj+14)*/
pile[WZ2]=111; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+9,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+11)*/
pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l1:I++;
if((I<=10)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
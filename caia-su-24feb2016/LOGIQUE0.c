#include "dx.h"
void LOGIQUE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V17=0,V42=0,V41=0,V18=0,V44=0,V43=0,V19=0,V20=0,V23=0,L=0,M=0,CC=0;
int P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=73;
x[jvj+1]=26134;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2563&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+18]=0 ;z[jvj+18]=0;
I=1;
l7:if((I<=P)) goto l9;
x[NNNE]=x[jvj+18] ;z[NNNE]=z[jvj+18];
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+5; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,jvj+5,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+41; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+41,jvj+16)*/
l12:if((x[jvj+16]==(-99999998))) goto l8;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=jvj+18; 
(*f[522])( );     /*PLUB2(jvj+18,jvj+17)*/
l8:I++;
goto l7;
l2:pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,jvj+7,103,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+44; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+44,jvj+16)*/
goto l12;
l3:pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+8)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=27; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,jvj+9,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+47; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+47,jvj+16)*/
goto l12;
l4:pile[v[22]]=jvj+2; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+10)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+11; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,jvj+11,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+50; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+50,jvj+16)*/
goto l12;
l5:pile[v[22]]=jvj+2; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+12)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+51)*/
pile[WZ3]=485; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+59; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+59)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+58; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+58,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+13)*/
pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+59)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+54; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+54,jvj+16)*/
goto l12;
l6:pile[v[22]]=jvj+2; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+14)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+15; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+15)*/
x[jvj+72]=x[jvj+14] ;z[jvj+72]=z[jvj+14];
x[jvj+70]=x[jvj+15] ;z[jvj+70]=z[jvj+15];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+55)*/
pile[WZ3]=25; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+60)*/
pile[WZ3]=485; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+64)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+65)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+64; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+64,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=107; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+62,107,jvj+15)*/
pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+62,107,jvj+65)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=103; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,103,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+63; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+63,jvj+56)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+66)*/
pile[WZ3]=485; pile[WZ4]=jvj+71; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+71)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+73; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+73)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+71; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+71,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=107; pile[WZ2]=jvj+72; 
(*f[36])( );     /*PLUSC0(jvj+68,107,jvj+72)*/
pile[WZ2]=jvj+73; 
(*f[36])( );     /*PLUSC0(jvj+68,107,jvj+73)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+70; pile[WZ4]=jvj+69; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+70,jvj+69,jvj+57)*/
pile[WZ2]=111; pile[WZ3]=jvj+55; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+55,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=107; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+56)*/
pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+16,107,jvj+57)*/
goto l12;
l9:pile[v[22]]=2; pile[WZ1]=I; pile[WZ2]=(-612); 
(*f[202])( );if(v[102]) goto l8;     /*FMATRICE0(2,I,(-612),V17)*/
V17=pile[WZ3]; 
V42=V17;
V41=V42-48;
pile[v[22]]=5; 
(*f[202])( );if(v[102]) goto l8;     /*FMATRICE0(5,I,(-612),V18)*/
V18=pile[WZ3]; 
V44=V18;
V43=V44-48;
pile[v[22]]=1; 
(*f[202])( );if(v[102]) goto l8;     /*FMATRICE0(1,I,(-612),V19)*/
V19=pile[WZ3]; 
pile[v[22]]=4; 
(*f[202])( );if(v[102]) goto l8;     /*FMATRICE0(4,I,(-612),V20)*/
V20=pile[WZ3]; 
pile[v[22]]=3; 
(*f[202])( );if(v[102]) goto l8;     /*FMATRICE0(3,I,(-612),V23)*/
V23=pile[WZ3]; 
L=V19;
x[jvj+19]=incon;
if((L==32)) goto l14;
if((L==65)) goto l16;
if((L==66)) goto l17;
if((L==67)) goto l18;
x[jvj+19]=(-99999998);
goto l8;
l14:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V41; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,V41,jvj+19)*/
l10:if((x[jvj+19]==(-99999998))) goto l8;
M=V20;
x[jvj+29]=incon;
if((M==32)) goto l15;
if((M==65)) goto l19;
if((M==66)) goto l20;
if((M==67)) goto l21;
x[jvj+29]=(-99999998);
goto l8;
l15:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+29)*/
l11:if((x[jvj+29]==(-99999998))) goto l8;
CC=V23;
x[jvj+2]=x[jvj+19] ;z[jvj+2]=z[jvj+19];
x[jvj+4]=x[jvj+29] ;z[jvj+4]=z[jvj+29];
x[jvj+16]=incon;
if((CC==61)) goto l1;
if((CC==35)) goto l2;
if((CC==62)) goto l3;
if((CC==60)) goto l4;
if((CC==68)) goto l5;
if((CC==86)) goto l6;
x[jvj+16]=(-99999998);
goto l8;
l16:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V41; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,V41,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+22,jvj+21,jvj+19)*/
goto l10;
l17:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V41; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V41,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+25,jvj+24,jvj+19)*/
goto l10;
l18:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+26)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V41; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,V41,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+28,jvj+27,jvj+19)*/
goto l10;
l19:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+32,jvj+31,jvj+29)*/
goto l11;
l20:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+35,jvj+34,jvj+29)*/
goto l11;
l21:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-632); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(100,21,140,(-632),jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+38,jvj+37,jvj+29)*/
goto l11;
}

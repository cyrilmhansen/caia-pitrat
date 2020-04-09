#include "dx.h"
void GLISSER8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V9=0,V11=0,XX=0,V13=0,V16=0,YY=0,V14=0,V17=0,V15=0,V6=0,I=0,V3=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=48;
x[jvj+1]=26085;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2346&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
I=1;
l7:pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l6;     /*FCOEFF0(I,(-630),V3)*/
V3=pile[WZ2]; 
if((V3<=0)) goto l6;
x[jvj+2]=0 ;z[jvj+2]=0;
V10=I-1;
V9=V10%5;
V11=V10/5;
XX=(-1);
l3:V13=V9+XX;
if((V13<0)) goto l2;
if((V13>=5)) goto l2;
V16=V13+1;
YY=(-1);
l1:if((XX!=0)) goto l5;
if((YY==0)) goto l4;
l5:V14=V11+YY;
if((V14<0)) goto l4;
if((V14>=5)) goto l4;
V17=5*V14;
V15=V16+V17;
pile[v[22]]=V15; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l4;     /*FCOEFF0(V15,(-630),V6)*/
V6=pile[WZ2]; 
if((V6!=0)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+7)*/
pile[WZ3]=25; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+18,jvj+17,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+8)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-624); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,(-624),jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+26,jvj+25,jvj+23)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+22,jvj+9)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+27)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-659); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,(-659),jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+34,jvj+33,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+28,jvj+29,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+30,jvj+10)*/
pile[WZ2]=111; pile[WZ3]=jvj+7; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+7,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+8)*/
pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+9)*/
pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+10)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l4:YY++;
if((YY<=1)) goto l1;
l2:XX++;
if((XX<=1)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+35)*/
pile[WZ3]=25; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+38)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+45,jvj+44,jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+42; pile[WZ4]=jvj+41; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+42,jvj+41,jvj+36)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+48; 
(*f[301])( );     /*TRI11(jvj+47,jvj+4,107,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+48,22,100,jvj+37)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+35; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+35,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+36; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+36)*/
pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+37)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
l6:I++;
if((I<=25)) goto l7;
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

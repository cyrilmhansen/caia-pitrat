#include "dx.h"
void ATOME216T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V9=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=20216;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3568&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=770)) goto l1;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(870,R,V5)*/
V5=pile[WZ2]; 
if((V5!=1)) goto l1;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+4,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+13)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(V9,858,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,v[13],642,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=3568; pile[WZ2]=246; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,3568,246,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=20216; pile[WZ2]=218; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,20216,218,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=(-20); pile[WZ2]=jvj+12; pile[WZ3]=159; pile[WZ4]=jvj+14; 
(*f[298])( );     /*TRIENS1(jvj+13,(-20),jvj+12,159,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+14,1,158,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+15)*/
pile[WZ3]=25; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=2; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=103; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+21; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+21,jvj+16)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+26)*/
pile[WZ3]=2; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=160; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,160,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=111; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+23,jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+6; pile[WZ4]=jvj+27; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+6,jvj+27,jvj+17)*/
pile[WZ2]=111; pile[WZ3]=jvj+15; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+15,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+17)*/
pile[WZ1]=jvj+7; 
(*f[1298])( );     /*NOUVCONTR0(jvj+8,jvj+7)*/
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

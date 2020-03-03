#include "dx.h"
void LAMNBV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V7=0,GG=0,V8=0,V11=0,L=0,V12=0,V15=0,V9=0,V3=0,LL=0,V4=0,B=0;
int P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=26110;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2429&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=0 ;z[jvj+6]=0;
I=1;
l6:if((I<=P)) goto l8;
x[NNNE]=x[jvj+6] ;z[NNNE]=z[jvj+6];
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l5:pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+4,V15)*/
V15=pile[WZ2]; 
V9=V15;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+11)*/
pile[WZ3]=1273; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+16)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=B; pile[WZ4]=jvj+19; 
(*f[272])( );     /*QUADRI9(100,89,162,B,jvj+19)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+5; pile[WZ2]=107; pile[WZ3]=jvj+18; 
(*f[301])( );     /*TRI11(jvj+17,jvj+5,107,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
l11:LL++;
l10:if((LL>V3)) goto l7;
pile[v[22]]=LL; pile[WZ1]=I; pile[WZ2]=(-612); 
(*f[202])( );if(v[102]) goto l11;     /*FMATRICE0(LL,I,(-612),V4)*/
V4=pile[WZ3]; 
B=V4;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
pile[v[22]]=I; pile[WZ1]=(-612); 
(*f[3979])( );if(v[102]) goto l5;     /*LONGUEUR0(I,(-612),V11)*/
V11=pile[WZ2]; 
L=1;
l3:if((L>V11)) goto l5;
pile[v[22]]=L; pile[WZ1]=I; pile[WZ2]=(-612); 
(*f[202])( );if(v[102]) goto l4;     /*FMATRICE0(L,I,(-612),V12)*/
V12=pile[WZ3]; 
if((B!=V12)) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,117,1)*/
l4:L++;
goto l3;
l7:I++;
goto l6;
l8:pile[v[22]]=I; pile[WZ1]=(-612); 
(*f[3979])( );if(v[102]) goto l7;     /*LONGUEUR0(I,(-612),V3)*/
V3=pile[WZ2]; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l9;     /*LONGUEUR0(I,(-630),V7)*/
V7=pile[WZ2]; 
GG=1;
l1:if((GG>V7)) goto l9;
pile[v[22]]=GG; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(GG,I,(-630),V8)*/
V8=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+8)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V8; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V8,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+10,jvj+9,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:GG++;
goto l1;
l9:pile[v[22]]=jvj+2; pile[WZ1]=jvj+5; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+5)*/
LL=1;
goto l10;
}

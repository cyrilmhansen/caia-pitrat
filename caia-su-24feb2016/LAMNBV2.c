#include "dx.h"
void LAMNBV2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,I=0,V4=0,X=0,V3=0,M=0,V5=0,V13=0,V7=0,Y=0,V6=0,MM=0,V8=0,V2=0,G=0,V12=0,V9=0,V10=0;
int P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=26110;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2430&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l9:if((I<=P)) goto l11;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:X++;
l1:if((X>P)) goto l16;
if((X==I)) goto l2;
pile[v[22]]=X; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l2;     /*LONGUEUR0(X,(-630),V3)*/
V3=pile[WZ2]; 
M=1;
l3:if((M>V3)) goto l2;
pile[v[22]]=M; pile[WZ1]=X; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(M,X,(-630),V5)*/
V5=pile[WZ3]; 
if((V4==V5)) goto l14;
l4:M++;
goto l3;
l6:Y++;
l5:if((Y>P)) goto l20;
if((Y==I)) goto l6;
pile[v[22]]=Y; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l6;     /*LONGUEUR0(Y,(-630),V6)*/
V6=pile[WZ2]; 
MM=1;
l7:if((MM>V6)) goto l6;
pile[v[22]]=MM; pile[WZ1]=Y; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l8;     /*FTAB0(MM,Y,(-630),V8)*/
V8=pile[WZ3]; 
if((V7==V8)) goto l18;
l8:MM++;
goto l7;
l10:I++;
goto l9;
l11:pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[3979])( );if(v[102]) goto l10;     /*LONGUEUR0(I,(-630),V2)*/
V2=pile[WZ2]; 
G=1;
l12:if((G>V2)) goto l10;
V12=G-1;
J=1;
l13:if((J<=V12)) goto l15;
G++;
goto l12;
l14:J++;
goto l13;
l15:pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l14;     /*FTAB0(J,I,(-630),V9)*/
V9=pile[WZ3]; 
(*f[203])( );if(v[102]) goto l16;     /*FTAB0(J,I,(-630),V4)*/
V4=pile[WZ3]; 
X=1;
goto l1;
l16:V13=J+1;
l17:if((V13>G)) goto l14;
pile[v[22]]=V13; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l18;     /*FTAB0(V13,I,(-630),V10)*/
V10=pile[WZ3]; 
(*f[203])( );if(v[102]) goto l20;     /*FTAB0(V13,I,(-630),V7)*/
V7=pile[WZ3]; 
Y=1;
goto l5;
l20:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+4)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+11,jvj+10,jvj+8)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l18:V13++;
goto l17;
}

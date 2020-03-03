#include "dx.h"
void CREKAKURO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V4=0,J=0,V5=0,V12=0,V11=0;
int NK;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=26126;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2504&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NK=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=0 ;z[jvj+6]=0;
I=1;
l7:if((I<=NK)) goto l1;
x[NNNE]=x[jvj+6] ;z[NNNE]=z[jvj+6];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=I; pile[WZ1]=(-620); 
(*f[3979])( );if(v[102]) goto l4;     /*LONGUEUR0(I,(-620),V4)*/
V4=pile[WZ2]; 
J=1;
l2:if((J>V4)) goto l4;
pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-620); 
(*f[203])( );if(v[102]) goto l3;     /*FTAB0(J,I,(-620),V5)*/
V5=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=V5; 
(*f[207])( );     /*PLUE2(jvj+2,V5)*/
l3:J++;
goto l2;
l4:x[jvj+3]=0 ;z[jvj+3]=0;
V12=x[jvj+2];
l5:if((V12>0)) goto l6;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+5)*/
for(i=x[jvj+2],V11=0;i>0;i=t[i],V11++)  ;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+11)*/
pile[WZ3]=1214; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,1214,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+5; pile[WZ2]=107; pile[WZ3]=jvj+18; 
(*f[301])( );     /*TRI11(jvj+17,jvj+5,107,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+18,22,100,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
I++;
goto l7;
l6:J=s[V12];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+8)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+9; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+10,jvj+9,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
V12=t[V12];
goto l5;
}

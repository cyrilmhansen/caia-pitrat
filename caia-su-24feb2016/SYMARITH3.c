#include "dx.h"
void SYMARITH3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P=0,V6=0,PP=0,V9=0,I=0;
int NR,NT;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=26236;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2939&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; NT=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=0 ;z[jvj+10]=0;
I=1;
l8:if((I<=NT)) goto l1;
x[NNNE]=x[jvj+10] ;z[NNNE]=z[jvj+10];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+2]=d[118];z[jvj+2]=0;
P=1;
l2:if((P<=NR)) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+4,jvj+8)*/
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+5]=d[118];z[jvj+5]=0;
PP=1;
l5:if((PP<=NR)) goto l7;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+7,jvj+9)*/
x[jvj+21]=x[jvj+8] ;z[jvj+21]=z[jvj+8];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1171; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,1171,jvj+19)*/
pile[v[22]]=jvj+9; pile[WZ1]=184; pile[WZ2]=jvj+18; 
(*f[300])( );     /*TRI10(jvj+9,184,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=111; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+22; 
(*f[301])( );     /*TRI11(jvj+20,jvj+21,107,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+22,22,100,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(jvj+10,jvj+11)*/
I++;
goto l8;
l4:pile[v[22]]=P; pile[WZ1]=(-595); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(P,(-595),V6)*/
V6=pile[WZ2]; 
if((V6!=I)) goto l3;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,jvj+4)*/
l3:P++;
goto l2;
l7:pile[v[22]]=PP; pile[WZ1]=(-595); 
(*f[201])( );if(v[102]) goto l6;     /*FCOEFF0(PP,(-595),V9)*/
V9=pile[WZ2]; 
if((V9!=I)) goto l6;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=PP; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,PP,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=1050; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,1050,102,jvj+17,jvj+16,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+6,jvj+7)*/
l6:PP++;
goto l5;
}

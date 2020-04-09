#include "dx.h"
void LOGIGRAPH8(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,I=0,V2=0,V3=0,N=0,V4=0,V8=0,V9=0,V7=0,V10=0;
int H,V,MH;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=26166;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2703&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; MH=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V6=H-1;
I=0;
l1:if((I<=V6)) goto l3;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(1,I,(-8615),V2)*/
V2=pile[WZ3]; 
if((V2<=0)) goto l2;
pile[v[22]]=I; pile[WZ1]=(-8615); 
(*f[3981])( );if(v[102]) goto l2;     /*LONGUEUR0(I,(-8615),V3)*/
V3=pile[WZ2]; 
N=V3;
pile[v[22]]=N; pile[WZ1]=I; pile[WZ2]=(-8615); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(N,I,(-8615),V4)*/
V4=pile[WZ3]; 
V8=N-1;
V9=I*MH;
V7=V8+V9;
V10=V-V4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+4)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2850); pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2850),jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V7; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V7,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+11,jvj+10,jvj+8)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:I++;
goto l1;
}

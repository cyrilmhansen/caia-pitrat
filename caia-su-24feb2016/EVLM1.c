#include "dx.h"
void EVLM1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,V5=0;
int R,NX,ZX,NY,ZY;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; NX=pile[v[22]+1]; ZX=pile[v[22]+2]; NY=pile[v[22]+3]; ZY=pile[v[22]+4]; v[22]+=6; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
RES=incon;
v[45]=0;
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
pile[v[22]]=274; pile[WZ1]=NX; pile[WZ2]=319; pile[WZ3]=ZX; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(274,NX,319,ZX,jvj+2)*/
pile[v[22]]=jvj+1; pile[WZ1]=258; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+1,258,jvj+2)*/
pile[v[22]]=274; pile[WZ1]=NY; pile[WZ2]=319; pile[WZ3]=ZY; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(274,NY,319,ZY,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=258; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+1,258,jvj+3)*/
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[30])( );if(v[102]) goto l3;     /*EVL0(R,jvj+4,RS)*/
RS=pile[WZ2]; 
V5=incon;
if((v[45]!=0)) goto l1;
V5=RS;
l2:RES=V5;
v[45]=0;
l3:x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=258; pile[WZ1]=jvj+5; 
(*f[71])( );     /*ENLV0(258,jvj+5)*/
if(RES!=incon) goto l4;
v[0]=jvj; v[22]-=6; v[102]=1;return;
l1:V5=178;
goto l2;
l4:v[0]=jvj; v[22]-=6; pile[v[22]+5]=RES; v[102]=0;return;
}

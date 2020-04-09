#include "dx.h"
void INCM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V3=0,V4=0,V5=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=x[B];
if((V1>sepcte)) goto l1;
V2=s[x[B]];
if((V2!=66)) goto l1;
pile[v[22]]=B; 
(*f[59])( );     /*LECT0(B)*/
l1:V3=x[A];
V4=x[B];
V5=z[B];
pile[v[22]]=V3; pile[WZ1]=V4; pile[WZ2]=C; pile[WZ3]=0; pile[WZ4]=V5; 
(*f[1435])( );     /*INCT0(V3,V4,C,0,V5,R)*/
R=pile[WZ5]; 
v[22]-=4; pile[v[22]+3]=R; return;
}

#include "dx.h"
void CRELOGIGRAPHE11(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,V4=0,V29=0,V35=0,V31=0,V30=0,V26=0,V24=0,V28=0,V27=0,V36=0,V38=0,V39=0,V41=0,V37=0,V40=0,V33=0;
int H,V;
int NNNX;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26167;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2720&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; V=pile[v[22]+1]; v[22]+=3; 
V3=H*V;
V2=V3/12;
V4=V3/20;
V29=49;
V30=incon;
V35=v[V29];
V31=V35%1000000;
if((V31>0)) goto l3;
V30=137643;
l2:v[V29]=V30;
V26=V2+1;
V24=V26-V4;
V28=v[49]%V24;
V27=V4+V28;
NNNX=V27;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNX; return;
l3:V33=V31%100000;
V40=V31/100000;
V37=V33*10;
V41=V33/10000;
V39=V40+V41;
V38=V39%10;
V36=V37+V38;
V30=V36;
goto l2;
}

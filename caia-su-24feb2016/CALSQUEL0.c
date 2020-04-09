#include "dx.h"
void CALSQUEL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=10914;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1331&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=M; pile[WZ1]=jvj+2; 
(*f[968])( );     /*FAIRESSAI0(M,jvj+2)*/
if((x[jvj+2]==80)) goto l3;
l1:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l3:pile[v[22]]=559; pile[WZ1]=158; pile[WZ2]=jvj+4; 
(*f[54])( );     /*TRI1(559,158,jvj+4)*/
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+3; 
(*f[1289])( );     /*SQUELETTE0(jvj+4,jvj+3)*/
x[R]=x[jvj+4] ;z[R]=z[jvj+4];
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
}

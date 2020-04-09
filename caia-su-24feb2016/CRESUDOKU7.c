#include "dx.h"
void CRESUDOKU7(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V4=0;
int I;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26118;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2462&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V2=I-1;
pile[v[22]]=V2; pile[WZ1]=(-2041); 
(*f[1011])( );if(v[102]) goto l1;     /*FVECT0(V2,(-2041),V1)*/
V1=pile[WZ2]; 
if((V1==0)) goto l1;
NNNX=0;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=NNNX; v[102]=0;return;
l1:V4=I-1;
pile[v[22]]=V4; pile[WZ1]=(-1544); 
(*f[1011])( );if(v[102]) goto l2;     /*FVECT0(V4,(-1544),NNNX)*/
NNNX=pile[WZ2]; 
goto l3;
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
}

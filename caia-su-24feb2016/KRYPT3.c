#include "dx.h"
void KRYPT3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,J=0,V2=0;
int NC,NL;
int NNNE;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26003;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2234&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NC=pile[v[22]]; NL=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l1:if((I<=NL)) goto l3;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:J=1;
l2:if((J<=NC)) goto l5;
I++;
goto l1;
l5:pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l4;     /*FMATRICE0(J,I,(-598),V2)*/
V2=pile[WZ3]; 
if((V2==42)) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=V2; 
(*f[467])( );     /*PLUE4(jvj+2,V2)*/
l4:J++;
goto l2;
}

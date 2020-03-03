#include "dx.h"
void ATOME36T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=20036;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3071&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+3)*/
for(i=x[jvj+3],V2=0;i>0;i=t[i],V2++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,D,jvj+4)*/
pile[v[22]]=480; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(480,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[D]) goto l1;
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=473; pile[WZ1]=jvj+4; 
(*f[1975])( );if(v[102]) goto l2;     /*FNDCND0(473,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V2!=V4)) goto l2;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+10)*/
pile[WZ1]=jvj+4; pile[WZ3]=(-625); pile[WZ4]=jvj+11; 
(*f[270])( );     /*QUADRI7(101,jvj+4,110,(-625),jvj+11)*/
pile[v[22]]=301; pile[WZ1]=715; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(301,715,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+8; 
(*f[189])( );     /*TRI4(jvj+7,v[13],642,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=3070; pile[WZ2]=246; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,3070,246,jvj+9)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20036; pile[WZ4]=jvj+9; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(158,289,218,20036,jvj+9,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=159; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+6,159,jvj+10)*/
pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+6,159,jvj+11)*/
(*f[481])( );     /*STOCKER0(jvj+6)*/
goto l2;
}

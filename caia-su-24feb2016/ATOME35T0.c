#include "dx.h"
void ATOME35T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V14=0,V13=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=20035;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3059&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+2,V4)*/
V4=pile[WZ2]; 
x[jvj+3]=vo[12];z[jvj+3]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+3,jvj+11)*/
pile[v[22]]=983; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(983,jvj+11,jvj+12)*/
pile[v[22]]=878; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(878,jvj+12,jvj+13)*/
l3:if((x[jvj+13]<=0)) goto l2;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=163; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+14,V14)*/
V14=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+3,V13)*/
V13=pile[WZ2]; 
if((V14==V13)) goto l4;
x[jvj+13]=t[x[jvj+13]];
goto l3;
l2:x[jvj+1]=incon; v[0]=jvj; return;
l4:x[jvj+4]=x[jvj+14] ;z[jvj+4]=z[jvj+14];
pile[v[22]]=1081; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1081,jvj+4,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l2;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+6,1070,68)*/
pile[v[22]]=V4; pile[WZ1]=858; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(V4,858,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,v[13],642,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=3059; pile[WZ2]=246; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,3059,246,jvj+10)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20035; pile[WZ4]=jvj+10; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(158,1,218,20035,jvj+10,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[1298])( );     /*NOUVCONTR0(jvj+6,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l1;
}

#include "dx.h"
void ATOME209T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20209;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3383&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=55)) goto l4;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+5,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(R,jvj+6)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,R,jvj+7)*/
pile[v[22]]=1294; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1294,R,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==1291) goto l1;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]<=0)) goto l4;
x[jvj+9]=s[x[jvj+6]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[3384])( );if(v[102]) goto l2;     /*OUETXTR0(jvj+7,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[3385])( );     /*OUETRED0(jvj+10,jvj+11)*/
x[jvj+20]=x[jvj+11] ;z[jvj+20]=z[jvj+11];
l3:if((x[jvj+20]<=0)) goto l2;
x[jvj+13]=s[x[jvj+20]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+20];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+18)*/
pile[v[22]]=V6; pile[WZ1]=858; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V6,858,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3383; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3383,246,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=20209; pile[WZ2]=218; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,20209,218,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=(-20); pile[WZ2]=jvj+17; pile[WZ3]=159; pile[WZ4]=jvj+19; 
(*f[298])( );     /*TRIENS1(jvj+18,(-20),jvj+17,159,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+19,1,158,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+12; 
(*f[1298])( );     /*NOUVCONTR0(jvj+13,jvj+12)*/
x[jvj+20]=t[x[jvj+20]];
goto l3;
}

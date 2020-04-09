#include "dx.h"
void ATOME224T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=20224;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3765&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1971])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l4;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==672) goto l3;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==672) goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l2;
l5:x[jvj+15]=s[x[jvj+8]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+8];
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,jvj+15,110,(-601),jvj+13)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+14)*/
pile[v[22]]=602; pile[WZ1]=715; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(602,715,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+10,v[13],642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=3586; pile[WZ2]=246; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,3586,246,jvj+12)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20224; pile[WZ4]=jvj+12; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(158,289,218,20224,jvj+12,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=159; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+9,159,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+9,159,jvj+14)*/
(*f[481])( );     /*STOCKER0(jvj+9)*/
x[jvj+8]=t[x[jvj+8]];
l4:if((x[jvj+8]>0)) goto l5;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}

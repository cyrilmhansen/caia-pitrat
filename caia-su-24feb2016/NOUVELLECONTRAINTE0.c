#include "dx.h"
void NOUVELLECONTRAINTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V11=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11204;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1573&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+13)*/
pile[v[22]]=0; pile[WZ1]=642; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(0,642,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=84; pile[WZ2]=218; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+11,84,218,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=(-20); pile[WZ2]=jvj+12; pile[WZ3]=159; pile[WZ4]=jvj+14; 
(*f[298])( );     /*TRIENS1(jvj+13,(-20),jvj+12,159,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=864; pile[WZ2]=158; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+14,864,158,jvj+9)*/
pile[v[22]]=864; pile[WZ1]=jvj+9; 
(*f[1569])( );     /*ARCHIVE2(864,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,R,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=48)) goto l1;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(642,jvj+6,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,R,jvj+7)*/
l2:if((x[jvj+7]<=0)) goto l1;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+8,1070,68)*/
pile[v[22]]=jvj+9; pile[WZ1]=642; pile[WZ2]=V6; 
(*f[43])( );     /*CHGC2(jvj+9,642,V6)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[1298])( );     /*NOUVCONTR0(jvj+8,jvj+9)*/
x[jvj+7]=t[x[jvj+7]];
goto l2;
l1:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==48)) goto l4;
l3:x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1070,68)*/
pile[v[22]]=jvj+9; pile[WZ1]=642; pile[WZ2]=V11; 
(*f[43])( );     /*CHGC2(jvj+9,642,V11)*/
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[1298])( );     /*NOUVCONTR0(R,jvj+9)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}

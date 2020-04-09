#include "dx.h"
void ATOME73T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V7=0,V23=0,V22=0,V25=0,V3=0,V24=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=20073;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3143&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,RR,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l7;
pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,RR,V6)*/
V6=pile[WZ2]; 
if((V6!=2)) goto l7;
pile[v[22]]=RR; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(RR,jvj+10)*/
x[jvj+6]=0 ;z[jvj+6]=0;
pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(RR,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l4;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1971])( );     /*FNDEND0(509,jvj+4,jvj+5)*/
x[jvj+19]=x[jvj+5] ;z[jvj+19]=z[jvj+5];
l2:if((x[jvj+19]>0)) goto l3;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
x[jvj+19]=t[x[jvj+19]];
goto l2;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l8:pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,jvj+11,110,(-601),jvj+17)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+18)*/
pile[v[22]]=603; pile[WZ1]=715; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(603,715,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3141; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3141,246,jvj+16)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20073; pile[WZ4]=jvj+16; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,289,218,20073,jvj+16,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+17)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+18)*/
(*f[481])( );     /*STOCKER0(jvj+13)*/
l5:x[jvj+6]=t[x[jvj+6]];
l4:if((x[jvj+6]<=0)) goto l7;
x[jvj+11]=s[x[jvj+6]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+6];
pile[v[22]]=870; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,jvj+11,V7)*/
V7=pile[WZ2]; 
if((V7!=2)) goto l5;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(jvj+11,jvj+12)*/
for(i=x[jvj+12],V23=0;i>0;i=t[i],V23++)  ;
for(i=x[jvj+10],V22=0;i>0;i=t[i],V22++)  ;
if((V23!=V22)) goto l10;
V25=x[jvj+12];
l9:if((V25>0)) goto l12;
V3=135;
l6:if((V3==135)) goto l8;
goto l5;
l11:V25=t[V25];
goto l9;
l12:V24=s[V25];
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==V24) goto l11;
l10:V3=134;
goto l6;
}

#include "dx.h"
void ATOME221T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V4=0,V15=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20221;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3751&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,RR,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=625)) goto l10;
pile[v[22]]=160; pile[WZ1]=RR; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,RR,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+13,V24)*/
V24=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(RR,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1971])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+32]=x[jvj+9] ;z[jvj+32]=z[jvj+9];
l2:if((x[jvj+32]>0)) goto l3;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:x[jvj+3]=s[x[jvj+32]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+32];
if((x[jvj+3]==x[RR])) goto l4;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==663) goto l5;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==663) goto l5;
l4:x[jvj+32]=t[x[jvj+32]];
goto l2;
l5:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l4;
l7:x[jvj+10]=t[x[jvj+10]];
l6:if((x[jvj+10]<=0)) goto l10;
x[jvj+14]=s[x[jvj+10]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=25)) goto l7;
pile[v[22]]=1358; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1358,jvj+14,jvj+17)*/
if((x[jvj+17]!=68)) goto l7;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1101,jvj+14,V4)*/
V4=pile[WZ2]; 
if((V4<=1)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+14,jvj+18)*/
pile[v[22]]=103; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+14,jvj+19)*/
x[jvj+20]=d[20];z[jvj+20]=0;
l8:if((x[jvj+20]<=0)) goto l7;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=RR; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+21,RR,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=484)) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+21,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=RR; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+24,RR,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+25,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,jvj+14,110,(-601),jvj+30)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+31)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(605,715,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3748; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3748,246,jvj+29)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20221; pile[WZ4]=jvj+29; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(158,289,218,20221,jvj+29,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=159; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+30)*/
pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+31)*/
(*f[481])( );     /*STOCKER0(jvj+26)*/
l9:x[jvj+20]=t[x[jvj+20]];
goto l8;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}

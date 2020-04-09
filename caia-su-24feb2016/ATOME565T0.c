#include "dx.h"
void ATOME565T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V6=0,V18=0,V13=0,I=0,V22=0,V3=0,V38=0,V39=0,V40=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=20565;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3833&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l7;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,V18)*/
V18=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1977])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V15; 
(*f[207])( );     /*PLUE2(jvj+3,V15)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+7]=d[20];z[jvj+7]=0;
l4:if((x[jvj+7]<=0)) goto l7;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=NNNI; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+9,NNNI,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+10,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=jvj+25; 
(*f[1008])( );if(v[102]) goto l5;     /*DECFACTPREM0(V13,jvj+25)*/
x[jvj+27]=0 ;z[jvj+27]=0;
l8:if((x[jvj+25]>0)) goto l9;
V3=x[jvj+27];
pile[v[22]]=jvj+8; pile[WZ1]=NNNI; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,NNNI,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
V22=V3;
l6:if((V22<=0)) goto l5;
I=s[V22];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+18)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,jvj+12,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+13,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+23)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V18,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3833; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3833,246,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=20565; pile[WZ2]=218; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,20565,218,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ2]=jvj+22; pile[WZ3]=159; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+22,159,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+24,1,158,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1298])( );     /*NOUVCONTR0(jvj+13,jvj+14)*/
V22=t[V22];
goto l6;
l3:V6=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V6; 
(*f[207])( );     /*PLUE2(jvj+3,V6)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=515; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(515,jvj+26,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+26,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=V39; 
(*f[1007])( );if(v[102]) goto l10;     /*POWER0(V38,V39,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=jvj+27; pile[WZ1]=V40; 
(*f[207])( );     /*PLUE2(jvj+27,V40)*/
l10:x[jvj+25]=t[x[jvj+25]];
goto l8;
}

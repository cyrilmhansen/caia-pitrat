#include "dx.h"
void Z141Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,K=0,V28=0,L=0,V34=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=15642;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1881&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,NNNY,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=28)) goto l1;
pile[v[22]]=102; pile[WZ1]=NNNY; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,NNNY,jvj+4)*/
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,NNNY,jvj+5)*/
NNNT=44;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+4; pile[WZ2]=103; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,jvj+4,103,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+25; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+25,jvj+6)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+6; pile[WZ2]=NNNX; 
(*f[2023])( );     /*REMPLACE0(NNNY,jvj+6,NNNX)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l1:if(x[jvj+3]!=25&&x[jvj+3]!=26&&x[jvj+3]!=27&&x[jvj+3]!=28&&x[jvj+3]!=29&&x[jvj+3]!=30) goto l7;
pile[v[22]]=100; pile[WZ1]=NNNY; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,NNNY,jvj+7)*/
if((x[jvj+7]!=22)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,NNNY,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=485)) goto l7;
pile[v[22]]=103; pile[WZ1]=NNNY; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,NNNY,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=485)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+14)*/
pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+15)*/
x[jvj+44]=x[jvj+14] ;z[jvj+44]=z[jvj+14];
l2:if((x[jvj+44]<=0)) goto l7;
x[jvj+16]=s[x[jvj+44]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+44];
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+16,V18)*/
V18=pile[WZ2]; 
K=V18;
if((K==0)) goto l3;
x[jvj+46]=x[jvj+14] ;z[jvj+46]=z[jvj+14];
l9:if((x[jvj+46]>0)) goto l10;
l3:x[jvj+44]=t[x[jvj+44]];
goto l2;
l7:x[NNNX]=NNNT=incon;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l10:x[jvj+36]=s[x[jvj+46]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+46];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+16; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+36,jvj+16,jvj+37)*/
if((x[jvj+37]==135)) goto l11;
x[jvj+46]=t[x[jvj+46]];
goto l9;
l11:x[jvj+38]=0 ;z[jvj+38]=0;
x[jvj+47]=x[jvj+14] ;z[jvj+47]=z[jvj+14];
l12:if((x[jvj+47]>0)) goto l13;
x[jvj+17]=x[jvj+38] ;z[jvj+17]=z[jvj+38];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+18)*/
x[jvj+45]=x[jvj+15] ;z[jvj+45]=z[jvj+15];
l4:if((x[jvj+45]<=0)) goto l3;
x[jvj+19]=s[x[jvj+45]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+45];
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+19,V28)*/
V28=pile[WZ2]; 
L=V28;
if((L==0)) goto l5;
x[jvj+48]=x[jvj+15] ;z[jvj+48]=z[jvj+15];
l15:if((x[jvj+48]>0)) goto l16;
l5:x[jvj+45]=t[x[jvj+45]];
goto l4;
l13:x[jvj+39]=s[x[jvj+47]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+47];
if((x[jvj+39]==x[jvj+36])) goto l14;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+38,jvj+39)*/
l14:x[jvj+47]=t[x[jvj+47]];
goto l12;
l16:x[jvj+40]=s[x[jvj+48]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+48];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+19; pile[WZ2]=jvj+41; 
(*f[760])( );     /*MEMEX0(jvj+40,jvj+19,jvj+41)*/
if((x[jvj+41]==135)) goto l17;
x[jvj+48]=t[x[jvj+48]];
goto l15;
l17:x[jvj+42]=0 ;z[jvj+42]=0;
x[jvj+49]=x[jvj+15] ;z[jvj+49]=z[jvj+15];
l18:if((x[jvj+49]>0)) goto l19;
x[jvj+20]=x[jvj+42] ;z[jvj+20]=z[jvj+42];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[299])( );     /*COPEL0(jvj+20,jvj+21)*/
V34=K-L;
NNNT=28;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+3; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+3,jvj+26)*/
pile[WZ3]=485; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+31)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V34; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,V34,jvj+32)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+30)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+30; pile[WZ2]=107; 
(*f[1120])( );     /*AJE3(jvj+18,jvj+30,107)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+35; 
(*f[301])( );     /*TRI11(jvj+34,jvj+21,107,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+35,22,100,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+29,jvj+22)*/
pile[v[22]]=NNNY; pile[WZ1]=jvj+22; pile[WZ2]=NNNX; 
(*f[2023])( );     /*REMPLACE0(NNNY,jvj+22,NNNX)*/
goto l8;
l19:x[jvj+43]=s[x[jvj+49]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+49];
if((x[jvj+43]==x[jvj+40])) goto l20;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+43)*/
l20:x[jvj+49]=t[x[jvj+49]];
goto l18;
}

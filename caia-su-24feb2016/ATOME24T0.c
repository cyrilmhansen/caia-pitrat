#include "dx.h"
void ATOME24T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V61=0,V18=0,V38=0,V24=0,F=0,V10=0,V29=0,K=0,V45=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=20024;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3166&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l14;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(870,R,V12)*/
V12=pile[WZ2]; 
if((V12!=3)) goto l14;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+4,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(678,R,jvj+5)*/
x[jvj+6]=d[20];z[jvj+6]=0;
l1:if((x[jvj+6]<=0)) goto l14;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,R,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+11)*/
for(i=x[jvj+11],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=2)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+7,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
for(i=x[jvj+16],V38=0;i>0;i=t[i],V38++)  ;
if((V38!=2)) goto l2;
x[jvj+46]=x[jvj+11] ;z[jvj+46]=z[jvj+11];
l3:if((x[jvj+46]<=0)) goto l2;
x[jvj+17]=s[x[jvj+46]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+46];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+17,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+19,V24)*/
V24=pile[WZ2]; 
x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
F=V24;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+20,jvj+21)*/
pile[v[22]]=498; pile[WZ2]=jvj+22; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+21,jvj+22)*/
pile[v[22]]=688; pile[WZ1]=jvj+22; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(688,jvj+22,V10)*/
V10=pile[WZ2]; 
if((V10!=1)) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+17,jvj+23)*/
x[jvj+47]=x[jvj+11] ;z[jvj+47]=z[jvj+11];
l5:if((x[jvj+47]<=0)) goto l4;
x[jvj+24]=s[x[jvj+47]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+47];
if((x[jvj+17]==x[jvj+24])) goto l6;
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+24,V29)*/
V29=pile[WZ2]; 
K=V29;
x[jvj+48]=x[jvj+16] ;z[jvj+48]=z[jvj+16];
l7:if((x[jvj+48]<=0)) goto l6;
x[jvj+25]=s[x[jvj+48]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+48];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=484)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+25,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+27,V45)*/
V45=pile[WZ2]; 
if((F!=V45)) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+25,jvj+28)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+28,jvj+29)*/
if((x[jvj+29]==134)) goto l10;
l8:x[jvj+48]=t[x[jvj+48]];
goto l7;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+46]=t[x[jvj+46]];
goto l3;
l6:x[jvj+47]=t[x[jvj+47]];
goto l5;
l10:x[jvj+49]=x[jvj+16] ;z[jvj+49]=z[jvj+16];
l9:if((x[jvj+49]<=0)) goto l8;
x[jvj+30]=s[x[jvj+49]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+49];
if((x[jvj+25]==x[jvj+30])) goto l11;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
x[jvj+50]=x[jvj+5] ;z[jvj+50]=z[jvj+5];
l12:if((x[jvj+50]<=0)) goto l11;
x[jvj+32]=s[x[jvj+50]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+50];
pile[v[22]]=509; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[1969])( );     /*FNDEND0(509,jvj+32,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==x[R]) goto l15;
l13:x[jvj+50]=t[x[jvj+50]];
goto l12;
l11:x[jvj+49]=t[x[jvj+49]];
goto l9;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l15:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+40)*/
pile[v[22]]=V61; pile[WZ1]=858; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(V61,858,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+37; 
(*f[189])( );     /*TRI4(jvj+36,v[13],642,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=3166; pile[WZ2]=246; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,3166,246,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=20024; pile[WZ2]=218; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,20024,218,jvj+39)*/
pile[v[22]]=jvj+40; pile[WZ1]=(-20); pile[WZ2]=jvj+39; pile[WZ3]=159; pile[WZ4]=jvj+41; 
(*f[298])( );     /*TRIENS1(jvj+40,(-20),jvj+39,159,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+41,1,158,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+45; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+45,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+34; 
(*f[1296])( );     /*NOUVCONTR0(jvj+35,jvj+34)*/
goto l13;
}

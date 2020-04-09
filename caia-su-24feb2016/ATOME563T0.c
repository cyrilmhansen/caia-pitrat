#include "dx.h"
void ATOME563T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V28=0,V31=0,V23=0,V26=0,V25=0,V22=0,V54=0,V56=0,V64=0,V57=0,V62=0,V7=0,V72=0,V74=0,V82=0,V75=0,V80=0,V90=0,V92=0,V100=0,V93=0,V98=0;
int W;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=71;
x[jvj+1]=20563;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3946&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
W=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=W; pile[WZ2]=jvj+15; 
(*f[1950])( );if(v[102]) goto l16;     /*FNDOND0(202,W,jvj+15)*/
if((x[jvj+15]!=68)) goto l16;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+16,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=W; pile[WZ2]=jvj+17; 
(*f[1971])( );     /*FNDEND0(365,W,jvj+17)*/
for(i=x[jvj+17],V28=0;i>0;i=t[i],V28++)  ;
pile[v[22]]=509; pile[WZ2]=jvj+18; 
(*f[1971])( );     /*FNDEND0(509,W,jvj+18)*/
l7:if((x[jvj+18]<=0)) goto l16;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1363])( );     /*VAROBJ0(jvj+19,jvj+20)*/
for(i=x[jvj+20],V31=0;i>0;i=t[i],V31++)  ;
if((V31!=3)) goto l8;
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==x[W]) goto l10;
l8:x[jvj+18]=t[x[jvj+18]];
goto l7;
l3:pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
l2:x[jvj+65]=t[x[jvj+65]];
l1:if((x[jvj+65]<=0)) goto l5;
x[jvj+14]=s[x[jvj+65]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+65];
for(a=V7;a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l3;
goto l2;
l6:x[jvj+2]=s[x[jvj+13]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+13];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1974])( );if(v[102]) goto l15;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=jvj+6; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+5,jvj+3,jvj+4,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1974])( );if(v[102]) goto l15;     /*INVEXP0(jvj+7,jvj+8)*/
pile[v[22]]=W; pile[WZ2]=jvj+6; pile[WZ3]=jvj+9; 
(*f[1721])( );     /*SUBSTITUTES0(W,jvj+8,jvj+6,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[965])( );if(v[102]) goto l15;     /*NORM0(jvj+9,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=134)) goto l15;
x[jvj+13]=t[x[jvj+13]];
l5:if((x[jvj+13]>0)) goto l6;
x[jvj+66]=t[x[jvj+66]];
l4:if((x[jvj+66]<=0)) goto l17;
x[jvj+7]=s[x[jvj+66]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+66];
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+26,jvj+35)*/
if((x[jvj+42]=w[x[jvj+35]][3])==incon) goto l5;
x[jvj+38]=0 ;z[jvj+38]=0;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+36)*/
l18:if((x[jvj+36]>0)) goto l19;
x[jvj+70]=x[jvj+38] ;z[jvj+70]=z[jvj+38];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+7,jvj+45)*/
if((x[jvj+52]=w[x[jvj+45]][3])==incon) goto l5;
x[jvj+48]=0 ;z[jvj+48]=0;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+46)*/
l25:if((x[jvj+46]>0)) goto l26;
V7=x[jvj+48];
x[jvj+65]=x[jvj+70] ;z[jvj+65]=z[jvj+70];
goto l1;
l10:x[jvj+67]=x[jvj+20] ;z[jvj+67]=z[jvj+20];
l9:if((x[jvj+67]<=0)) goto l8;
x[jvj+21]=s[x[jvj+67]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+67];
if((x[W]==x[jvj+21])) goto l11;
pile[v[22]]=202; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[1950])( );if(v[102]) goto l11;     /*FNDOND0(202,jvj+21,jvj+22)*/
if((x[jvj+22]!=68)) goto l11;
pile[v[22]]=365; pile[WZ2]=jvj+23; 
(*f[1971])( );     /*FNDEND0(365,jvj+21,jvj+23)*/
for(i=x[jvj+23],V23=0;i>0;i=t[i],V23++)  ;
x[jvj+68]=x[jvj+20] ;z[jvj+68]=z[jvj+20];
l12:if((x[jvj+68]<=0)) goto l11;
x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
if((x[jvj+5]==x[jvj+21])) goto l13;
if((x[jvj+5]==x[W])) goto l13;
pile[v[22]]=202; pile[WZ1]=jvj+5; pile[WZ2]=jvj+24; 
(*f[1950])( );if(v[102]) goto l13;     /*FNDOND0(202,jvj+5,jvj+24)*/
if((x[jvj+24]!=68)) goto l13;
pile[v[22]]=365; pile[WZ2]=jvj+25; 
(*f[1971])( );     /*FNDEND0(365,jvj+5,jvj+25)*/
for(i=x[jvj+25],V26=0;i>0;i=t[i],V26++)  ;
V25=V26*V28;
V22=V23*V25;
if((V22>=500)) goto l13;
x[jvj+69]=x[jvj+23] ;z[jvj+69]=z[jvj+23];
l14:if((x[jvj+69]<=0)) goto l13;
x[jvj+26]=s[x[jvj+69]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+69];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[1974])( );if(v[102]) goto l15;     /*INVEXP0(jvj+26,jvj+27)*/
pile[v[22]]=jvj+21; pile[WZ2]=jvj+19; pile[WZ3]=jvj+4; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+21,jvj+27,jvj+19,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+26,jvj+55)*/
if((x[jvj+62]=w[x[jvj+55]][3])==incon) goto l17;
x[jvj+58]=0 ;z[jvj+58]=0;
pile[v[22]]=365; pile[WZ1]=W; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(365,W,jvj+56)*/
l32:if((x[jvj+56]>0)) goto l33;
x[jvj+71]=x[jvj+58] ;z[jvj+71]=z[jvj+58];
x[jvj+66]=x[jvj+71] ;z[jvj+66]=z[jvj+71];
goto l4;
l11:x[jvj+67]=t[x[jvj+67]];
goto l9;
l13:x[jvj+68]=t[x[jvj+68]];
goto l12;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l17:pile[v[22]]=101; pile[WZ1]=W; pile[WZ2]=110; pile[WZ3]=(-622); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(101,W,110,(-622),jvj+33)*/
pile[v[22]]=V32; pile[WZ1]=858; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V32,858,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,v[13],642,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3946; pile[WZ2]=246; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3946,246,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=20563; pile[WZ2]=218; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,20563,218,jvj+32)*/
pile[v[22]]=jvj+33; pile[WZ1]=(-20); pile[WZ2]=jvj+32; pile[WZ3]=159; pile[WZ4]=jvj+34; 
(*f[298])( );     /*TRIENS1(jvj+33,(-20),jvj+32,159,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+34,1,158,jvj+28)*/
pile[v[22]]=365; pile[WZ1]=jvj+21; pile[WZ2]=jvj+26; 
(*f[1571])( );     /*DELIER0(365,jvj+21,jvj+26,jvj+28)*/
l15:x[jvj+69]=t[x[jvj+69]];
goto l14;
l19:x[jvj+39]=s[x[jvj+36]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+36];
pile[v[22]]=688; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(688,jvj+26,V54)*/
V54=pile[WZ2]; 
if((V54==1)) goto l24;
l20:pile[v[22]]=921; pile[WZ1]=jvj+21; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(921,jvj+21,jvj+37)*/
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l24;
l21:pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+38,jvj+39)*/
l22:x[jvj+36]=t[x[jvj+36]];
goto l18;
l24:pile[v[22]]=jvj+39; pile[WZ1]=jvj+42; pile[WZ3]=jvj+44; 
(*f[45])( );if(v[102]) goto l23;     /*FNDZ0(jvj+39,jvj+42,V62,jvj+44)*/
V62=pile[WZ2]; 
V57=V62;
pile[v[22]]=jvj+26; pile[WZ3]=jvj+43; 
(*f[45])( );if(v[102]) goto l23;     /*FNDZ0(jvj+26,jvj+42,V64,jvj+43)*/
V64=pile[WZ2]; 
V56=V64;
if((V57!=V56)) goto l21;
l23:pile[v[22]]=498; pile[WZ1]=jvj+39; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(498,jvj+39,jvj+41)*/
pile[WZ1]=jvj+26; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(498,jvj+26,jvj+40)*/
if((x[jvj+41]!=x[jvj+40])) goto l21;
goto l22;
l26:x[jvj+49]=s[x[jvj+46]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+46];
pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(688,jvj+7,V72)*/
V72=pile[WZ2]; 
if((V72==1)) goto l31;
l27:pile[v[22]]=921; pile[WZ1]=W; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(921,W,jvj+47)*/
for(a=x[jvj+47];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l31;
l28:pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[68])( );     /*PLUE0(jvj+48,jvj+49)*/
l29:x[jvj+46]=t[x[jvj+46]];
goto l25;
l31:pile[v[22]]=jvj+49; pile[WZ1]=jvj+52; pile[WZ3]=jvj+54; 
(*f[45])( );if(v[102]) goto l30;     /*FNDZ0(jvj+49,jvj+52,V80,jvj+54)*/
V80=pile[WZ2]; 
V75=V80;
pile[v[22]]=jvj+7; pile[WZ3]=jvj+53; 
(*f[45])( );if(v[102]) goto l30;     /*FNDZ0(jvj+7,jvj+52,V82,jvj+53)*/
V82=pile[WZ2]; 
V74=V82;
if((V75!=V74)) goto l28;
l30:pile[v[22]]=498; pile[WZ1]=jvj+49; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(498,jvj+49,jvj+51)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(498,jvj+7,jvj+50)*/
if((x[jvj+51]!=x[jvj+50])) goto l28;
goto l29;
l33:x[jvj+59]=s[x[jvj+56]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+56];
pile[v[22]]=688; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(688,jvj+26,V90)*/
V90=pile[WZ2]; 
if((V90==1)) goto l38;
l34:pile[v[22]]=921; pile[WZ1]=jvj+21; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(921,jvj+21,jvj+57)*/
for(a=x[jvj+57];a>0;a=t[a]) if(s[a]==x[W]) goto l38;
l35:pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; 
(*f[68])( );     /*PLUE0(jvj+58,jvj+59)*/
l36:x[jvj+56]=t[x[jvj+56]];
goto l32;
l38:pile[v[22]]=jvj+59; pile[WZ1]=jvj+62; pile[WZ3]=jvj+64; 
(*f[45])( );if(v[102]) goto l37;     /*FNDZ0(jvj+59,jvj+62,V98,jvj+64)*/
V98=pile[WZ2]; 
V93=V98;
pile[v[22]]=jvj+26; pile[WZ3]=jvj+63; 
(*f[45])( );if(v[102]) goto l37;     /*FNDZ0(jvj+26,jvj+62,V100,jvj+63)*/
V100=pile[WZ2]; 
V92=V100;
if((V93!=V92)) goto l35;
l37:pile[v[22]]=498; pile[WZ1]=jvj+59; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(498,jvj+59,jvj+61)*/
pile[WZ1]=jvj+26; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(498,jvj+26,jvj+60)*/
if((x[jvj+61]!=x[jvj+60])) goto l35;
goto l36;
}

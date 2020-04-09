#include "dx.h"
void ATOME562T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V31=0,V23=0,V28=0,V26=0,V25=0,V22=0,V53=0,V55=0,V63=0,V56=0,V61=0,V7=0,V71=0,V73=0,V81=0,V74=0,V79=0,V89=0,V91=0,V99=0,V92=0,V97=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=71;
x[jvj+1]=20562;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3854&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+16; 
(*f[1363])( );     /*VAROBJ0(R,jvj+16)*/
for(i=x[jvj+16],V30=0;i>0;i=t[i],V30++)  ;
if((V30!=3)) goto l15;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+17,V31)*/
V31=pile[WZ2]; 
x[jvj+66]=x[jvj+16] ;z[jvj+66]=z[jvj+16];
l7:if((x[jvj+66]<=0)) goto l15;
x[jvj+18]=s[x[jvj+66]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+66];
pile[v[22]]=202; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[1950])( );if(v[102]) goto l8;     /*FNDOND0(202,jvj+18,jvj+19)*/
if((x[jvj+19]!=68)) goto l8;
pile[v[22]]=365; pile[WZ2]=jvj+20; 
(*f[1971])( );     /*FNDEND0(365,jvj+18,jvj+20)*/
for(i=x[jvj+20],V23=0;i>0;i=t[i],V23++)  ;
x[jvj+67]=x[jvj+16] ;z[jvj+67]=z[jvj+16];
l9:if((x[jvj+67]<=0)) goto l8;
x[jvj+9]=s[x[jvj+67]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+67];
if((x[jvj+9]==x[jvj+18])) goto l10;
pile[v[22]]=202; pile[WZ1]=jvj+9; pile[WZ2]=jvj+21; 
(*f[1950])( );if(v[102]) goto l10;     /*FNDOND0(202,jvj+9,jvj+21)*/
if((x[jvj+21]!=68)) goto l10;
pile[v[22]]=365; pile[WZ2]=jvj+22; 
(*f[1971])( );     /*FNDEND0(365,jvj+9,jvj+22)*/
for(i=x[jvj+22],V28=0;i>0;i=t[i],V28++)  ;
x[jvj+68]=x[jvj+16] ;z[jvj+68]=z[jvj+16];
l11:if((x[jvj+68]<=0)) goto l10;
x[jvj+5]=s[x[jvj+68]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+68];
if((x[jvj+5]==x[jvj+18])) goto l12;
if((x[jvj+5]==x[jvj+9])) goto l12;
pile[v[22]]=202; pile[WZ1]=jvj+5; pile[WZ2]=jvj+23; 
(*f[1950])( );if(v[102]) goto l12;     /*FNDOND0(202,jvj+5,jvj+23)*/
if((x[jvj+23]!=68)) goto l12;
pile[v[22]]=365; pile[WZ2]=jvj+24; 
(*f[1971])( );     /*FNDEND0(365,jvj+5,jvj+24)*/
for(i=x[jvj+24],V26=0;i>0;i=t[i],V26++)  ;
V25=V26*V28;
V22=V23*V25;
if((V22>=500)) goto l12;
x[jvj+69]=x[jvj+20] ;z[jvj+69]=z[jvj+20];
l13:if((x[jvj+69]<=0)) goto l12;
x[jvj+25]=s[x[jvj+69]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+69];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[1974])( );if(v[102]) goto l14;     /*INVEXP0(jvj+25,jvj+26)*/
pile[v[22]]=jvj+18; pile[WZ2]=R; pile[WZ3]=jvj+4; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+18,jvj+26,R,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+25,jvj+54)*/
if((x[jvj+61]=w[x[jvj+54]][3])==incon) goto l16;
x[jvj+57]=0 ;z[jvj+57]=0;
pile[v[22]]=365; pile[WZ1]=jvj+9; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(365,jvj+9,jvj+55)*/
l31:if((x[jvj+55]>0)) goto l32;
x[jvj+71]=x[jvj+57] ;z[jvj+71]=z[jvj+57];
x[jvj+65]=x[jvj+71] ;z[jvj+65]=z[jvj+71];
l4:if((x[jvj+65]<=0)) goto l16;
x[jvj+7]=s[x[jvj+65]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+65];
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+25,jvj+34)*/
if((x[jvj+41]=w[x[jvj+34]][3])==incon) goto l5;
x[jvj+37]=0 ;z[jvj+37]=0;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+35)*/
l17:if((x[jvj+35]>0)) goto l18;
x[jvj+70]=x[jvj+37] ;z[jvj+70]=z[jvj+37];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+7,jvj+44)*/
if((x[jvj+51]=w[x[jvj+44]][3])==incon) goto l5;
x[jvj+47]=0 ;z[jvj+47]=0;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+45)*/
l24:if((x[jvj+45]>0)) goto l25;
V7=x[jvj+47];
x[jvj+64]=x[jvj+70] ;z[jvj+64]=z[jvj+70];
l1:if((x[jvj+64]<=0)) goto l5;
x[jvj+15]=s[x[jvj+64]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+64];
for(a=V7;a>0;a=t[a]) if(s[a]==x[jvj+15]) goto l3;
l2:x[jvj+64]=t[x[jvj+64]];
goto l1;
l3:pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
goto l2;
l6:x[jvj+2]=s[x[jvj+14]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+14];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1974])( );if(v[102]) goto l14;     /*INVEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; pile[WZ3]=jvj+6; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+5,jvj+3,jvj+4,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1974])( );if(v[102]) goto l14;     /*INVEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ2]=jvj+6; pile[WZ3]=jvj+10; 
(*f[1721])( );     /*SUBSTITUTES0(jvj+9,jvj+8,jvj+6,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[965])( );if(v[102]) goto l14;     /*NORM0(jvj+10,jvj+11)*/
x[jvj+12]=x[jvj+11] ;z[jvj+12]=z[jvj+11];
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=134)) goto l14;
x[jvj+14]=t[x[jvj+14]];
l5:if((x[jvj+14]>0)) goto l6;
x[jvj+65]=t[x[jvj+65]];
goto l4;
l8:x[jvj+66]=t[x[jvj+66]];
goto l7;
l10:x[jvj+67]=t[x[jvj+67]];
goto l9;
l12:x[jvj+68]=t[x[jvj+68]];
goto l11;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l16:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+32)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V31,858,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3854; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3854,246,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=20562; pile[WZ2]=218; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,20562,218,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=(-20); pile[WZ2]=jvj+31; pile[WZ3]=159; pile[WZ4]=jvj+33; 
(*f[298])( );     /*TRIENS1(jvj+32,(-20),jvj+31,159,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+33,1,158,jvj+27)*/
pile[v[22]]=365; pile[WZ1]=jvj+18; pile[WZ2]=jvj+25; 
(*f[1571])( );     /*DELIER0(365,jvj+18,jvj+25,jvj+27)*/
l14:x[jvj+69]=t[x[jvj+69]];
goto l13;
l18:x[jvj+38]=s[x[jvj+35]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+35];
pile[v[22]]=688; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(688,jvj+25,V53)*/
V53=pile[WZ2]; 
if((V53==1)) goto l23;
l19:pile[v[22]]=921; pile[WZ1]=jvj+18; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(921,jvj+18,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l23;
l20:pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
l21:x[jvj+35]=t[x[jvj+35]];
goto l17;
l23:pile[v[22]]=jvj+38; pile[WZ1]=jvj+41; pile[WZ3]=jvj+43; 
(*f[45])( );if(v[102]) goto l22;     /*FNDZ0(jvj+38,jvj+41,V61,jvj+43)*/
V61=pile[WZ2]; 
V56=V61;
pile[v[22]]=jvj+25; pile[WZ3]=jvj+42; 
(*f[45])( );if(v[102]) goto l22;     /*FNDZ0(jvj+25,jvj+41,V63,jvj+42)*/
V63=pile[WZ2]; 
V55=V63;
if((V56!=V55)) goto l20;
l22:pile[v[22]]=498; pile[WZ1]=jvj+38; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,jvj+38,jvj+40)*/
pile[WZ1]=jvj+25; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,jvj+25,jvj+39)*/
if((x[jvj+40]!=x[jvj+39])) goto l20;
goto l21;
l25:x[jvj+48]=s[x[jvj+45]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+45];
pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(688,jvj+7,V71)*/
V71=pile[WZ2]; 
if((V71==1)) goto l30;
l26:pile[v[22]]=921; pile[WZ1]=jvj+9; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(921,jvj+9,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l30;
l27:pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[68])( );     /*PLUE0(jvj+47,jvj+48)*/
l28:x[jvj+45]=t[x[jvj+45]];
goto l24;
l30:pile[v[22]]=jvj+48; pile[WZ1]=jvj+51; pile[WZ3]=jvj+53; 
(*f[45])( );if(v[102]) goto l29;     /*FNDZ0(jvj+48,jvj+51,V79,jvj+53)*/
V79=pile[WZ2]; 
V74=V79;
pile[v[22]]=jvj+7; pile[WZ3]=jvj+52; 
(*f[45])( );if(v[102]) goto l29;     /*FNDZ0(jvj+7,jvj+51,V81,jvj+52)*/
V81=pile[WZ2]; 
V73=V81;
if((V74!=V73)) goto l27;
l29:pile[v[22]]=498; pile[WZ1]=jvj+48; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(498,jvj+48,jvj+50)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(498,jvj+7,jvj+49)*/
if((x[jvj+50]!=x[jvj+49])) goto l27;
goto l28;
l32:x[jvj+58]=s[x[jvj+55]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+55];
pile[v[22]]=688; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(688,jvj+25,V89)*/
V89=pile[WZ2]; 
if((V89==1)) goto l37;
l33:pile[v[22]]=921; pile[WZ1]=jvj+18; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(921,jvj+18,jvj+56)*/
for(a=x[jvj+56];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l37;
l34:pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[68])( );     /*PLUE0(jvj+57,jvj+58)*/
l35:x[jvj+55]=t[x[jvj+55]];
goto l31;
l37:pile[v[22]]=jvj+58; pile[WZ1]=jvj+61; pile[WZ3]=jvj+63; 
(*f[45])( );if(v[102]) goto l36;     /*FNDZ0(jvj+58,jvj+61,V97,jvj+63)*/
V97=pile[WZ2]; 
V92=V97;
pile[v[22]]=jvj+25; pile[WZ3]=jvj+62; 
(*f[45])( );if(v[102]) goto l36;     /*FNDZ0(jvj+25,jvj+61,V99,jvj+62)*/
V99=pile[WZ2]; 
V91=V99;
if((V92!=V91)) goto l34;
l36:pile[v[22]]=498; pile[WZ1]=jvj+58; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(498,jvj+58,jvj+60)*/
pile[WZ1]=jvj+25; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(498,jvj+25,jvj+59)*/
if((x[jvj+60]!=x[jvj+59])) goto l34;
goto l35;
}

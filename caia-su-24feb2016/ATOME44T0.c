#include "dx.h"
void ATOME44T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V61=0,V41=0,V49=0,I=0,V103=0,V104=0,V127=0,V128=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=98;
x[jvj+1]=20044;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3535&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,R,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=25)) goto l25;
x[jvj+26]=vo[14];z[jvj+26]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(642,jvj+26,V61)*/
V61=pile[WZ2]; 
x[jvj+27]=d[20];z[jvj+27]=0;
l13:if((x[jvj+27]<=0)) goto l25;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=268; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+28,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+29,R,jvj+30)*/
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=485)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+33)*/
for(i=x[jvj+33],V41=0;i>0;i=t[i],V41++)  ;
if((V41!=2)) goto l14;
pile[v[22]]=jvj+28; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+28,R,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+2,jvj+34)*/
if((x[jvj+34]==484)) goto l26;
if((x[jvj+34]==22)) goto l1;
if((x[jvj+34]==22)) goto l4;
l14:x[jvj+27]=t[x[jvj+27]];
goto l13;
l1:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
x[jvj+86]=x[jvj+5] ;z[jvj+86]=z[jvj+5];
l2:if((x[jvj+86]<=0)) goto l4;
x[jvj+6]=s[x[jvj+86]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+86];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]==484)) goto l26;
l3:x[jvj+86]=t[x[jvj+86]];
goto l2;
l4:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+2,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+10)*/
x[jvj+87]=x[jvj+10] ;z[jvj+87]=z[jvj+10];
l5:if((x[jvj+87]<=0)) goto l14;
x[jvj+11]=s[x[jvj+87]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+87];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]==41)) goto l26;
l6:x[jvj+87]=t[x[jvj+87]];
goto l5;
l7:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=486)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
x[jvj+88]=x[jvj+16] ;z[jvj+88]=z[jvj+16];
l8:if((x[jvj+88]<=0)) goto l10;
x[jvj+17]=s[x[jvj+88]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+88];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]==484)) goto l39;
l9:x[jvj+88]=t[x[jvj+88]];
goto l8;
l10:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+13,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=486)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+21)*/
x[jvj+89]=x[jvj+21] ;z[jvj+89]=z[jvj+21];
l11:if((x[jvj+89]<=0)) goto l18;
x[jvj+22]=s[x[jvj+89]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+89];
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]==41)) goto l39;
l12:x[jvj+89]=t[x[jvj+89]];
goto l11;
l17:x[jvj+98]=x[jvj+33] ;z[jvj+98]=z[jvj+33];
l16:if((x[jvj+98]<=0)) goto l14;
x[jvj+90]=s[x[jvj+98]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+98];
x[jvj+13]=x[jvj+90] ;z[jvj+13]=z[jvj+90];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+13,jvj+36)*/
if((x[jvj+36]==484)) goto l39;
if((x[jvj+36]==22)) goto l7;
if((x[jvj+36]==22)) goto l10;
l18:x[jvj+98]=t[x[jvj+98]];
goto l16;
l21:x[jvj+91]=t[x[jvj+91]];
l19:if((x[jvj+91]<=0)) goto l18;
x[jvj+37]=s[x[jvj+91]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+91];
if((x[jvj+90]==x[jvj+37])) goto l21;
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+37,V49)*/
V49=pile[WZ2]; 
I=V49;
if(I!=1&&I!=(-1)) goto l21;
x[jvj+92]=x[jvj+61] ;z[jvj+92]=z[jvj+61];
l22:if((x[jvj+92]<=0)) goto l21;
x[jvj+38]=s[x[jvj+92]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+92];
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+39)*/
x[jvj+93]=x[jvj+75] ;z[jvj+93]=z[jvj+75];
l23:if((x[jvj+93]>0)) goto l24;
x[jvj+92]=t[x[jvj+92]];
goto l22;
l24:x[jvj+40]=s[x[jvj+93]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+93];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+48)*/
pile[v[22]]=V61; pile[WZ1]=858; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(V61,858,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,v[13],642,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=3535; pile[WZ2]=246; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,3535,246,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=20044; pile[WZ2]=218; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,20044,218,jvj+47)*/
pile[v[22]]=jvj+48; pile[WZ1]=(-20); pile[WZ2]=jvj+47; pile[WZ3]=159; pile[WZ4]=jvj+49; 
(*f[298])( );     /*TRIENS1(jvj+48,(-20),jvj+47,159,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+49,1,158,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+50)*/
pile[WZ3]=636; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,636,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+56,jvj+41,103,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+57; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+39,jvj+57,jvj+54)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+52; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+52)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; pile[WZ2]=103; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+51,jvj+52,103,jvj+53)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+54; pile[WZ4]=jvj+53; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+54,jvj+53,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+42; 
(*f[1298])( );     /*NOUVCONTR0(jvj+43,jvj+42)*/
x[jvj+93]=t[x[jvj+93]];
goto l23;
l25:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l26:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+2,jvj+58)*/
pile[v[22]]=101; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+58,jvj+59)*/
if((x[jvj+59]!=486)) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+60)*/
x[jvj+94]=x[jvj+60] ;z[jvj+94]=z[jvj+60];
l27:if((x[jvj+94]>0)) goto l33;
x[jvj+69]=0 ;z[jvj+69]=0;
l28:if((x[jvj+60]>0)) goto l34;
x[jvj+61]=x[jvj+69] ;z[jvj+61]=z[jvj+69];
l15:pile[v[22]]=jvj+2; pile[WZ1]=jvj+35; 
(*f[1448])( );     /*NONUL0(jvj+2,jvj+35)*/
if((x[jvj+35]==135)) goto l17;
goto l14;
l29:pile[v[22]]=20; pile[WZ1]=jvj+2; pile[WZ2]=jvj+61; 
(*f[409])( );     /*TRI14(20,jvj+2,jvj+61)*/
goto l15;
l32:x[jvj+94]=t[x[jvj+94]];
goto l27;
l33:x[jvj+65]=s[x[jvj+94]] ;z[jvj+65]=(x[jvj+65]<=sepcte) ? x[jvj+65] : z[jvj+94];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[1448])( );     /*NONUL0(jvj+65,jvj+66)*/
if((x[jvj+66]==135)) goto l32;
l31:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+2,jvj+63)*/
if((x[jvj+63]!=484)) goto l30;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+64; 
(*f[1448])( );     /*NONUL0(jvj+2,jvj+64)*/
if((x[jvj+64]==135)) goto l29;
l30:pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+2,V103)*/
V103=pile[WZ2]; 
V104=abs(V103);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V104; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,V104,jvj+62)*/
pile[v[22]]=20; pile[WZ1]=jvj+62; pile[WZ2]=jvj+61; 
(*f[409])( );     /*TRI14(20,jvj+62,jvj+61)*/
goto l15;
l34:x[jvj+67]=s[x[jvj+60]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+60];
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]==484)) goto l38;
if((x[jvj+68]==41)) goto l38;
l35:x[jvj+60]=t[x[jvj+60]];
goto l28;
l37:x[jvj+70]=s[x[jvj+95]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+95];
pile[v[22]]=jvj+67; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[760])( );     /*MEMEX0(jvj+67,jvj+70,jvj+71)*/
if((x[jvj+71]==135)) goto l35;
x[jvj+95]=t[x[jvj+95]];
l36:if((x[jvj+95]>0)) goto l37;
pile[v[22]]=jvj+69; pile[WZ1]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+69,jvj+67)*/
goto l35;
l38:x[jvj+95]=x[jvj+69] ;z[jvj+95]=z[jvj+69];
goto l36;
l39:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(111,jvj+13,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]!=486)) goto l44;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+74)*/
x[jvj+96]=x[jvj+74] ;z[jvj+96]=z[jvj+74];
l40:if((x[jvj+96]>0)) goto l46;
x[jvj+83]=0 ;z[jvj+83]=0;
l41:if((x[jvj+74]>0)) goto l47;
x[jvj+75]=x[jvj+83] ;z[jvj+75]=z[jvj+83];
l20:x[jvj+91]=x[jvj+33] ;z[jvj+91]=z[jvj+33];
goto l19;
l42:pile[v[22]]=20; pile[WZ1]=jvj+13; pile[WZ2]=jvj+75; 
(*f[409])( );     /*TRI14(20,jvj+13,jvj+75)*/
goto l20;
l45:x[jvj+96]=t[x[jvj+96]];
goto l40;
l46:x[jvj+79]=s[x[jvj+96]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+96];
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[1448])( );     /*NONUL0(jvj+79,jvj+80)*/
if((x[jvj+80]==135)) goto l45;
l44:pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+13,jvj+77)*/
if((x[jvj+77]!=484)) goto l43;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+78; 
(*f[1448])( );     /*NONUL0(jvj+13,jvj+78)*/
if((x[jvj+78]==135)) goto l42;
l43:pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(130,jvj+13,V127)*/
V127=pile[WZ2]; 
V128=abs(V127);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V128; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,V128,jvj+76)*/
pile[v[22]]=20; pile[WZ1]=jvj+76; pile[WZ2]=jvj+75; 
(*f[409])( );     /*TRI14(20,jvj+76,jvj+75)*/
goto l20;
l47:x[jvj+81]=s[x[jvj+74]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+74];
pile[v[22]]=100; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+81,jvj+82)*/
if((x[jvj+82]==484)) goto l51;
if((x[jvj+82]==41)) goto l51;
l48:x[jvj+74]=t[x[jvj+74]];
goto l41;
l50:x[jvj+84]=s[x[jvj+97]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+97];
pile[v[22]]=jvj+81; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[760])( );     /*MEMEX0(jvj+81,jvj+84,jvj+85)*/
if((x[jvj+85]==135)) goto l48;
x[jvj+97]=t[x[jvj+97]];
l49:if((x[jvj+97]>0)) goto l50;
pile[v[22]]=jvj+83; pile[WZ1]=jvj+81; 
(*f[68])( );     /*PLUE0(jvj+83,jvj+81)*/
goto l48;
l51:x[jvj+97]=x[jvj+83] ;z[jvj+97]=z[jvj+83];
goto l49;
}

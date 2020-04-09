#include "dx.h"
void ATOME614T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V43=0,V12=0,V46=0,V23=0,V14=0,V13=0,V84=0,V85=0,V108=0,V109=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=76;
x[jvj+1]=20614;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3846&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l18;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+2,V46)*/
V46=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1977])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V43; 
(*f[207])( );     /*PLUE2(jvj+3,V43)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+7]=d[20];z[jvj+7]=0;
l4:if((x[jvj+7]<=0)) goto l18;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=NNNI; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+9,NNNI,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=485)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+13)*/
for(i=x[jvj+13],V23=0;i>0;i=t[i],V23++)  ;
if((V23!=2)) goto l5;
pile[v[22]]=jvj+8; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,NNNI,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[1448])( );     /*NONUL0(jvj+14,jvj+15)*/
if((x[jvj+15]==135)) goto l19;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l3:V12=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V12; 
(*f[207])( );     /*PLUE2(jvj+3,V12)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l8:x[jvj+76]=t[x[jvj+76]];
l6:if((x[jvj+76]<=0)) goto l5;
x[jvj+68]=s[x[jvj+76]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+76];
x[jvj+53]=x[jvj+68] ;z[jvj+53]=z[jvj+68];
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=486)) goto l36;
pile[v[22]]=107; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(107,jvj+53,jvj+56)*/
x[jvj+74]=x[jvj+56] ;z[jvj+74]=z[jvj+56];
l32:if((x[jvj+74]>0)) goto l38;
x[jvj+65]=0 ;z[jvj+65]=0;
l33:if((x[jvj+56]>0)) goto l39;
x[jvj+57]=x[jvj+65] ;z[jvj+57]=z[jvj+65];
l10:x[jvj+69]=x[jvj+13] ;z[jvj+69]=z[jvj+13];
l9:if((x[jvj+69]<=0)) goto l8;
x[jvj+16]=s[x[jvj+69]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+69];
if((x[jvj+68]==x[jvj+16])) goto l11;
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+16,V14)*/
V14=pile[WZ2]; 
V13=abs(V14);
if((V13!=1)) goto l11;
x[jvj+70]=x[jvj+42] ;z[jvj+70]=z[jvj+42];
l12:if((x[jvj+70]<=0)) goto l11;
x[jvj+17]=s[x[jvj+70]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+70];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]==484)) goto l14;
if((x[jvj+18]==41)) goto l14;
l13:x[jvj+70]=t[x[jvj+70]];
goto l12;
l11:x[jvj+69]=t[x[jvj+69]];
goto l9;
l14:pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+19)*/
x[jvj+71]=x[jvj+57] ;z[jvj+71]=z[jvj+57];
l15:if((x[jvj+71]<=0)) goto l13;
x[jvj+20]=s[x[jvj+71]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+71];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]==484)) goto l17;
if((x[jvj+21]==41)) goto l17;
l16:x[jvj+71]=t[x[jvj+71]];
goto l15;
l17:pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+25)*/
pile[WZ3]=636; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,636,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+22; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+22,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+32; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+32,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+28,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+23,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+37)*/
pile[v[22]]=V46; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V46,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3846; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3846,246,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20614; pile[WZ2]=218; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20614,218,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ2]=jvj+36; pile[WZ3]=159; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+38,1,158,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[1298])( );     /*NOUVCONTR0(jvj+23,jvj+24)*/
goto l16;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l19:pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+14,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=486)) goto l24;
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+41)*/
x[jvj+72]=x[jvj+41] ;z[jvj+72]=z[jvj+41];
l20:if((x[jvj+72]>0)) goto l26;
x[jvj+50]=0 ;z[jvj+50]=0;
l21:if((x[jvj+41]>0)) goto l27;
x[jvj+42]=x[jvj+50] ;z[jvj+42]=z[jvj+50];
l7:x[jvj+76]=x[jvj+13] ;z[jvj+76]=z[jvj+13];
goto l6;
l22:pile[v[22]]=20; pile[WZ1]=jvj+14; pile[WZ2]=jvj+42; 
(*f[409])( );     /*TRI14(20,jvj+14,jvj+42)*/
goto l7;
l25:x[jvj+72]=t[x[jvj+72]];
goto l20;
l26:x[jvj+46]=s[x[jvj+72]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+72];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[1448])( );     /*NONUL0(jvj+46,jvj+47)*/
if((x[jvj+47]==135)) goto l25;
l24:pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+14,jvj+44)*/
if((x[jvj+44]!=484)) goto l23;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+45; 
(*f[1448])( );     /*NONUL0(jvj+14,jvj+45)*/
if((x[jvj+45]==135)) goto l22;
l23:pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+14,V84)*/
V84=pile[WZ2]; 
V85=abs(V84);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V85; pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,V85,jvj+43)*/
pile[v[22]]=20; pile[WZ1]=jvj+43; pile[WZ2]=jvj+42; 
(*f[409])( );     /*TRI14(20,jvj+43,jvj+42)*/
goto l7;
l27:x[jvj+48]=s[x[jvj+41]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+41];
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]==484)) goto l31;
if((x[jvj+49]==41)) goto l31;
l28:x[jvj+41]=t[x[jvj+41]];
goto l21;
l30:x[jvj+51]=s[x[jvj+73]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+73];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[760])( );     /*MEMEX0(jvj+48,jvj+51,jvj+52)*/
if((x[jvj+52]==135)) goto l28;
x[jvj+73]=t[x[jvj+73]];
l29:if((x[jvj+73]>0)) goto l30;
pile[v[22]]=jvj+50; pile[WZ1]=jvj+48; 
(*f[68])( );     /*PLUE0(jvj+50,jvj+48)*/
goto l28;
l31:x[jvj+73]=x[jvj+50] ;z[jvj+73]=z[jvj+50];
goto l29;
l34:pile[v[22]]=20; pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[409])( );     /*TRI14(20,jvj+53,jvj+57)*/
goto l10;
l37:x[jvj+74]=t[x[jvj+74]];
goto l32;
l38:x[jvj+61]=s[x[jvj+74]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+74];
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[1448])( );     /*NONUL0(jvj+61,jvj+62)*/
if((x[jvj+62]==135)) goto l37;
l36:pile[v[22]]=100; pile[WZ1]=jvj+53; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+53,jvj+59)*/
if((x[jvj+59]!=484)) goto l35;
pile[v[22]]=jvj+53; pile[WZ1]=jvj+60; 
(*f[1448])( );     /*NONUL0(jvj+53,jvj+60)*/
if((x[jvj+60]==135)) goto l34;
l35:pile[v[22]]=130; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+53,V108)*/
V108=pile[WZ2]; 
V109=abs(V108);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V109; pile[WZ4]=jvj+58; 
(*f[192])( );     /*QUADRI4(100,41,130,V109,jvj+58)*/
pile[v[22]]=20; pile[WZ1]=jvj+58; pile[WZ2]=jvj+57; 
(*f[409])( );     /*TRI14(20,jvj+58,jvj+57)*/
goto l10;
l39:x[jvj+63]=s[x[jvj+56]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+56];
pile[v[22]]=100; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(100,jvj+63,jvj+64)*/
if((x[jvj+64]==484)) goto l43;
if((x[jvj+64]==41)) goto l43;
l40:x[jvj+56]=t[x[jvj+56]];
goto l33;
l42:x[jvj+66]=s[x[jvj+75]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+75];
pile[v[22]]=jvj+63; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[760])( );     /*MEMEX0(jvj+63,jvj+66,jvj+67)*/
if((x[jvj+67]==135)) goto l40;
x[jvj+75]=t[x[jvj+75]];
l41:if((x[jvj+75]>0)) goto l42;
pile[v[22]]=jvj+65; pile[WZ1]=jvj+63; 
(*f[68])( );     /*PLUE0(jvj+65,jvj+63)*/
goto l40;
l43:x[jvj+75]=x[jvj+65] ;z[jvj+75]=z[jvj+65];
goto l41;
}

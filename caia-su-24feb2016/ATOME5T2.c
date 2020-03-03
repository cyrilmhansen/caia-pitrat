#include "dx.h"
void ATOME5T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,F=0,G=0,V56=0,V3=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=20005;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3296&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+36]=vo[14];z[jvj+36]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+36,V56)*/
V56=pile[WZ2]; 
x[jvj+39]=0 ;z[jvj+39]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+38; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+38)*/
l7:if((x[jvj+38]<=0)) goto l10;
x[jvj+34]=s[x[jvj+38]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+38];
pile[v[22]]=1417; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1417,jvj+34,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==15) goto l9;
pile[v[22]]=1545; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1545,jvj+36,jvj+37)*/
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==15) goto l9;
l8:x[jvj+38]=t[x[jvj+38]];
goto l7;
l1:pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+5)*/
x[jvj+47]=x[jvj+5] ;z[jvj+47]=z[jvj+5];
l2:if((x[jvj+47]>0)) goto l3;
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+45)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+46)*/
pile[v[22]]=V56; pile[WZ1]=858; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V56,858,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3296; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3296,246,jvj+44)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20005; pile[WZ4]=jvj+44; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(158,1,218,20005,jvj+44,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=159; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+45)*/
pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+46)*/
pile[WZ1]=jvj+3; 
(*f[966])( );     /*ELIMINE0(jvj+41,jvj+3)*/
l11:x[jvj+39]=t[x[jvj+39]];
l10:if((x[jvj+39]<=0)) goto l12;
x[jvj+3]=s[x[jvj+39]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+39];
pile[v[22]]=870; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,jvj+3,V3)*/
V3=pile[WZ2]; 
if((V3>1)) goto l11;
pile[v[22]]=100; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+3,jvj+40)*/
if((x[jvj+40]!=22)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=484)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+6,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+8,jvj+9)*/
if(x[jvj+9]==96||x[jvj+9]==89||x[jvj+9]==41||x[jvj+9]==20||x[jvj+9]==128||x[jvj+9]==570||x[jvj+9]==1317) goto l1;
l4:pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+3,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+10,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+12,jvj+13)*/
if(x[jvj+13]==96||x[jvj+13]==89||x[jvj+13]==41||x[jvj+13]==20||x[jvj+13]==128||x[jvj+13]==570||x[jvj+13]==1317) goto l1;
l5:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+3,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+14,jvj+15)*/
F=x[jvj+15];
if((F==25)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+3,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=531)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+16,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=21)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+16,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=484)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+22,jvj+23)*/
if(x[jvj+23]==96||x[jvj+23]==89||x[jvj+23]==41||x[jvj+23]==20||x[jvj+23]==128||x[jvj+23]==570||x[jvj+23]==1317) goto l1;
l6:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+3,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+24,jvj+25)*/
G=x[jvj+25];
if((G==25)) goto l11;
pile[v[22]]=103; pile[WZ1]=jvj+3; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+3,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=531)) goto l11;
pile[v[22]]=111; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+26,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=21)) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+26,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=484)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+30,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+32,jvj+33)*/
if(x[jvj+33]==96||x[jvj+33]==89||x[jvj+33]==41||x[jvj+33]==20||x[jvj+33]==128||x[jvj+33]==570||x[jvj+33]==1317) goto l1;
goto l11;
l3:x[jvj+4]=s[x[jvj+47]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+47];
pile[v[22]]=jvj+3; pile[WZ1]=D; pile[WZ2]=jvj+4; 
(*f[1738])( );if(v[102]) goto l11;     /*EVLM0(jvj+3,D,jvj+4,V1)*/
V1=pile[WZ3]; 
if((V1!=135)) goto l11;
x[jvj+47]=t[x[jvj+47]];
goto l2;
l9:pile[v[22]]=jvj+39; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+39,jvj+34)*/
goto l8;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}

#include "dx.h"
void ATOME164T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V25=0,V26=0,V27=0,V28=0,V12=0,V29=0,V10=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=51;
x[jvj+1]=20164;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3650&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=625)) goto l8;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(870,R,V12)*/
V12=pile[WZ2]; 
if((V12!=2)) goto l8;
pile[v[22]]=160; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(160,R,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+17,V18)*/
V18=pile[WZ2]; 
x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+18,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,R,jvj+19)*/
pile[v[22]]=103; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,R,jvj+20)*/
pile[v[22]]=R; pile[WZ1]=jvj+21; 
(*f[3519])( );     /*DECSOM2(R,jvj+21)*/
x[jvj+6]=0 ;z[jvj+6]=0;
l1:if((x[jvj+21]>0)) goto l2;
for(i=x[jvj+6],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=2)) goto l8;
pile[v[22]]=R; pile[WZ1]=jvj+6; pile[WZ2]=jvj+22; pile[WZ3]=jvj+8; pile[WZ4]=jvj+10; 
(*f[3651])( );if(v[102]) goto l8;     /*QUELSELTS0(R,jvj+6,jvj+22,jvj+8,jvj+10)*/
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[255])( );     /*COPEXP0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
l5:if((x[jvj+22]>0)) goto l6;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+23; 
(*f[299])( );     /*COPEL0(jvj+13,jvj+23)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1294,R,jvj+24)*/
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==1483) goto l9;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+21]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+21];
pile[v[22]]=218; pile[WZ1]=jvj+4; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+4,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]==41)) goto l3;
l4:pile[v[22]]=jvj+2; pile[WZ1]=V18; pile[WZ2]=jvj+5; 
(*f[3652])( );if(v[102]) goto l3;     /*MODEXPVAL0(jvj+2,V18,jvj+5)*/
if((x[jvj+5]==0)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=1261; pile[WZ2]=jvj+27; 
(*f[300])( );     /*TRI10(jvj+5,1261,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+2; pile[WZ2]=218; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+27,jvj+2,218,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
l3:x[jvj+21]=t[x[jvj+21]];
goto l1;
l6:x[jvj+12]=s[x[jvj+22]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+22];
pile[v[22]]=515; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(515,jvj+12,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(510,jvj+12,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=610; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(610,jvj+12,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(609,jvj+12,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+28)*/
pile[WZ3]=625; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V25; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,V25,jvj+35)*/
pile[WZ3]=V26; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V26,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=160; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,160,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=111; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+32,jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+34,jvj+35,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+36; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+36,jvj+29)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+39)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V27; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+41)*/
pile[WZ3]=V28; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,V28,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=160; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,160,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=111; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+38,jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+40,jvj+41,103,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+42; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+42,jvj+30)*/
pile[WZ2]=111; pile[WZ3]=jvj+28; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+28,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+30)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
l7:x[jvj+22]=t[x[jvj+22]];
goto l5;
l9:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+47)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(V29,858,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,v[13],642,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=3650; pile[WZ2]=246; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,3650,246,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=20164; pile[WZ2]=218; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,20164,218,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=(-20); pile[WZ2]=jvj+46; pile[WZ3]=159; pile[WZ4]=jvj+48; 
(*f[298])( );     /*TRIENS1(jvj+47,(-20),jvj+46,159,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+48,1,158,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+23; pile[WZ2]=107; pile[WZ3]=jvj+51; 
(*f[301])( );     /*TRI11(jvj+50,jvj+23,107,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+51,22,100,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+25; 
(*f[1298])( );     /*NOUVCONTR0(jvj+26,jvj+25)*/
goto l8;
}

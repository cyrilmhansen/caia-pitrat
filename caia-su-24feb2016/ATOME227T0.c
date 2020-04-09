#include "dx.h"
void ATOME227T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V26=0,V22=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=20227;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3686&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=625)) goto l3;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(870,R,V13)*/
V13=pile[WZ2]; 
if((V13!=2)) goto l3;
pile[v[22]]=160; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,R,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=41)) goto l3;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+6,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[3519])( );     /*DECSOM2(R,jvj+7)*/
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1294,R,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==1483) goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:if((x[jvj+7]<=0)) goto l3;
x[jvj+9]=s[x[jvj+7]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+7];
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+9,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=596)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+10,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+13,V22)*/
V22=pile[WZ2]; 
if((V22!=(-1))) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+10,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l2;
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+16)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+16; pile[WZ2]=R; pile[WZ3]=jvj+17; 
(*f[1591])( );     /*SUBSTITUTION0(jvj+10,jvj+16,R,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),jvj+18)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+18; pile[WZ2]=R; pile[WZ3]=jvj+19; 
(*f[1591])( );     /*SUBSTITUTION0(jvj+10,jvj+18,R,jvj+19)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+20)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+22)*/
x[jvj+50]=x[jvj+20] ;z[jvj+50]=z[jvj+20];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[v[22]]=V26; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V26,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3686; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3686,246,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=20227; pile[WZ2]=218; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,20227,218,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ2]=jvj+28; pile[WZ3]=159; pile[WZ4]=jvj+30; 
(*f[298])( );     /*TRIENS1(jvj+29,(-20),jvj+28,159,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+30,1,158,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+31)*/
pile[WZ3]=48; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+34)*/
pile[WZ3]=625; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+40)*/
pile[WZ3]=2; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=160; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,160,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=111; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+41; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+41,jvj+35)*/
pile[WZ2]=111; pile[WZ3]=jvj+34; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+34,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=107; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+35)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+42)*/
pile[WZ3]=625; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+46)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+48; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+48)*/
pile[WZ3]=2; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,2,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=160; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,160,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=111; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+45,jvj+46,111,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; pile[WZ2]=103; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+47,jvj+48,103,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+50; pile[WZ4]=jvj+49; pile[WZ5]=jvj+43; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+50,jvj+49,jvj+43)*/
pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+43)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+33)*/
pile[WZ1]=jvj+23; 
(*f[1298])( );     /*NOUVCONTR0(jvj+24,jvj+23)*/
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
}

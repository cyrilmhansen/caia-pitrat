#include "dx.h"
void ATOME228T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,I=0,V10=0,P=0,V29=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=20228;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3688&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=625)) goto l3;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,R,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+10,P)*/
P=pile[WZ2]; 
x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+11,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+12; 
(*f[3519])( );     /*DECSOM2(R,jvj+12)*/
l1:if((x[jvj+12]<=0)) goto l3;
x[jvj+2]=s[x[jvj+12]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+12];
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+2,jvj+3)*/
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=596)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+7,V16)*/
V16=pile[WZ2]; 
I=V16;
V10=I%P;
if((V10!=0)) goto l2;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=596)) goto l3;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+15)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+15; pile[WZ2]=R; pile[WZ3]=jvj+16; 
(*f[1591])( );     /*SUBSTITUTION0(jvj+4,jvj+15,R,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+17)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+17; pile[WZ2]=R; pile[WZ3]=jvj+18; 
(*f[1591])( );     /*SUBSTITUTION0(jvj+4,jvj+17,R,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+20)*/
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+4,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=1300; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1300,R,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==596) goto l4;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+12]=t[x[jvj+12]];
goto l1;
l4:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+30)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V29,858,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,v[13],642,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=3688; pile[WZ2]=246; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,3688,246,jvj+28)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20228; pile[WZ4]=jvj+28; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(158,1,218,20228,jvj+28,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=159; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+31)*/
pile[WZ3]=48; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+34)*/
pile[WZ3]=26; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+36)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+38; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+38)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=103; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+37,jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+39; pile[WZ5]=jvj+35; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+39,jvj+35)*/
pile[WZ2]=111; pile[WZ3]=jvj+34; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+34,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+19)*/
pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(jvj+32,107,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+40)*/
pile[WZ3]=25; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+44)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; pile[WZ2]=103; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+43,jvj+44,103,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+45; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+45,jvj+41)*/
pile[WZ2]=111; pile[WZ3]=jvj+40; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+40,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+20)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+33,107,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+33)*/
pile[v[22]]=R; pile[WZ1]=jvj+25; pile[WZ2]=jvj+24; 
(*f[1560])( );     /*RESTAURE0(R,jvj+25,jvj+24)*/
goto l3;
}

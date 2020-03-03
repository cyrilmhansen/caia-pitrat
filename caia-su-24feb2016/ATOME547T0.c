#include "dx.h"
void ATOME547T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V9=0,V33=0,V27=0,V10=0,V17=0,P=0,V37=0,NI=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=20547;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3825&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=625)) goto l7;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,NNNI,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=jvj+8; 
(*f[992])( );if(v[102]) goto l7;     /*FACTPREM0(V27,jvj+8)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V30; 
(*f[207])( );     /*PLUE2(jvj+3,V30)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+9]=d[20];z[jvj+9]=0;
l4:if((x[jvj+9]<=0)) goto l7;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=NNNI; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+10,NNNI,jvj+11)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=596)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+11,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+14,V10)*/
V10=pile[WZ2]; 
if((V10<=0)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+10,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=NNNI; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+15,NNNI,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+16,V17)*/
V17=pile[WZ2]; 
if((V17!=0)) goto l5;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+17)*/
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+11,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
x[jvj+35]=x[jvj+17] ;z[jvj+35]=z[jvj+17];
V37=x[jvj+8];
l6:if((V37<=0)) goto l5;
P=s[V37];
pile[v[22]]=V27; pile[WZ1]=P; 
(*f[1033])( );     /*VALEXPO0(V27,P,NI)*/
NI=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+24)*/
pile[WZ3]=596; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+29)*/
pile[WZ3]=63; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+33)*/
pile[WZ3]=87; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,87,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NI; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,NI,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+40,jvj+39,jvj+37)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+34,jvj+35,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+32; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+32,jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+26)*/
pile[WZ3]=P; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=160; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,160,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=111; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+23,jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+20,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+45)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V33,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3825; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3825,246,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=20547; pile[WZ2]=218; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,20547,218,jvj+44)*/
pile[v[22]]=jvj+45; pile[WZ1]=(-20); pile[WZ2]=jvj+44; pile[WZ3]=159; pile[WZ4]=jvj+46; 
(*f[298])( );     /*TRIENS1(jvj+45,(-20),jvj+44,159,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+46,1,158,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+20,jvj+21)*/
V37=t[V37];
goto l6;
l3:V9=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V9; 
(*f[207])( );     /*PLUE2(jvj+3,V9)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+9]=t[x[jvj+9]];
goto l4;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
